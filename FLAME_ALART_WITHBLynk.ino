#define BLYNK_TEMPLATE_NAME "Fire Alarm System"
#define BLYNK_AUTH_TOKEN "Q74WSm6J8bq2uPCvGMKgrxIcv7Sm78Hl"
#define BLYNK_TEMPLATE_ID "TMPL35JmIb-D8"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Student";         // Your WiFi SSID
char pass[] = "Learn@123";       // Your WiFi Password

#define FLAME_SENSOR_PIN 34
#define RED_LED_PIN      25
#define GREEN_LED_PIN    26
#define BUZZER_PIN       27

BlynkTimer timer;

bool fireDetected = false;
bool blinkState = false;

void checkFire() {
  int flame = digitalRead(FLAME_SENSOR_PIN);  // LOW = fire detected

  fireDetected = (flame == LOW);  // true if fire

  if (fireDetected) {
    digitalWrite(GREEN_LED_PIN, LOW);          // Green LED OFF
    Blynk.virtualWrite(V0, 1);                 // Fire status ON
  } else {
    digitalWrite(GREEN_LED_PIN, HIGH);         // Green LED ON
    digitalWrite(RED_LED_PIN, LOW);            // Red LED OFF
    digitalWrite(BUZZER_PIN, LOW);             // Buzzer OFF
    Blynk.virtualWrite(V0, 0);                 // Fire status OFF
  }
}

// This function toggles red LED and buzzer every 500ms
void blinkAlert() {
  if (fireDetected) {
    blinkState = !blinkState;
    digitalWrite(RED_LED_PIN, blinkState);
    digitalWrite(BUZZER_PIN, blinkState);
  }
}

void setup() {
  Serial.begin(115200);

  pinMode(FLAME_SENSOR_PIN, INPUT);
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  timer.setInterval(1000L, checkFire);   // Check fire every 1 sec
  timer.setInterval(500L, blinkAlert);   // Blink every 0.5 sec
}

void loop() {
  Blynk.run();
  timer.run();
}
