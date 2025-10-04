# FIRE_ALARM_SYSTEM
This project is a smart fire detection system using an ESP32 microcontroller, flame sensor, buzzer, red/green LEDs, 16x2 I2C LCD, and Blynk IoT platform. When a fire is detected, the system:
•	Activates a blinking red LED and buzzer
•	Displays warning messages on the LCD
•	Sends a real-time update to the Blynk web dashboard
•	Shows “Normal” status with a green LED when no fire is detected
# 🔥 Fire Alarm System

## Overview
This project implements a fire detection and alert system using embedded hardware and IoT integration. It includes sensor-based flame detection, real-time alerts via Blynk, and detailed documentation for replication and understanding.

## Tech Stack
- Arduino (FLAME_ALARM_WITHBlynk.ino)
- Flame sensor
- Buzzer or alert module
- Blynk IoT platform for remote notifications
- Excel for pin mapping
- Word documentation for system overview

## Files Included
- `FLAME_ALARM_WITHBlynk.ino`: Arduino sketch for flame detection and Blynk alert logic
- `FIRE_ALARM_SYSTEM.docx`: Detailed documentation of system design and operation
- `FIRE_ALARM_SYSTEM_PINOUTS.xlsx`: Pin configuration and hardware mapping
- `fire_alarm_system_image.jpg`: Photo of the physical setup
- `circuit_image (22).png`: Circuit diagram
- `README.md`: Project overview and instructions

## Highlights
- Real-time flame detection using embedded sensors
- Remote alert system via Blynk mobile app
- Clear documentation and pin mapping for reproducibility
- Modular code structure for easy adaptation to other alert platforms

## How It Works
- Flame sensor detects fire presence and triggers an alert
- Arduino sends signal to buzzer and Blynk app
- Visual and remote alerts ensure quick response
- Circuit and pin mapping guide hardware replication

## Author
**Manohar** – Embedded Systems Enthusiast  
📫 [GitHub Profile](https://github.com/manohar146)
