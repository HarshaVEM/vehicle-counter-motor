# Vehicle Counter & Motor Control (ESP32)

Designed a system to count vehicles and automatically control a motor based on a threshold.

## Features
- Vehicle detection using IR sensor
- Real-time counting logic
- Automatic motor shutdown after threshold

## Components
- ESP32
- IR Sensor
- DC Motor / Relay Module

## Working
Each vehicle crossing the IR sensor increments the count.

Once the predefined limit is reached:
- Motor is turned OFF automatically

## Applications
- Parking systems
- Automated entry control
- Traffic monitoring

## Note
This repository contains a simplified firmware representation of the system logic.
