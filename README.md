## Sanitization Dock

The Sanitization Dock is designed to maintain hygiene and reduce contamination risks in hospital environments by automatically disinfecting the robot before and after operation. The system detects the robot's presence and activates a mist-based sanitization mechanism through embedded control systems.

---

### Features

 Automatic robot detection
 Contactless operation
 Mist-based sanitization process
 Relay-controlled device switching
 Embedded control using Arduino Nano
 Improved hospital hygiene and safety

---

## System Components

### 1. Arduino Nano Controller

The sanitization station uses an Arduino Nano microcontroller as the main control unit. The Arduino receives signals from sensors and controls the sanitization process by activating output devices.

Functions:

* Receives sensor input
* Controls relay operation
* Activates sanitization devices
* Controls indicator status

---

### 2. IR Sensor Detection

An infrared (IR) sensor is used to detect the presence of the robot within the sanitization area.

Working:

* Robot enters sanitization dock
* IR sensor detects object presence
* Sensor sends signal to Arduino Nano
* Sanitization sequence starts automatically

---

### 3. Relay-Controlled Sanitization System

Relay modules are used as switching devices to control components that require higher power than the microcontroller can directly provide.

Functions:

* Controls ultrasonic mist generator
* Controls UV LED indicator system
* Provides isolation between controller and high-power devices

---

### 4. Ultrasonic Mist Generator

The ultrasonic mist generator creates a fine disinfectant fog that spreads over the robot surface to improve hygiene.

Functions:

* Produces disinfectant mist
* Covers robot surfaces uniformly
* Helps reduce contamination risks

---

## Working Principle

1. Robot enters sanitization dock
2. IR sensor detects robot presence
3. Signal is sent to Arduino Nano
4. Arduino activates relay module
5. Relay powers ultrasonic mist generator and LED indicator
6. Robot undergoes sanitization process
7. Sanitization completes and system returns to standby mode

---

## Applications

* Smart hospitals
* Healthcare robotics
* Automated medical systems
* Contactless sanitization systems
* Hospital hygiene management
