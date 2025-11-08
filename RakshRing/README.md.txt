#  Raksh Ring — AI-Powered Smart Safety Wearable

###  Overview
**Raksh Ring** is a conceptual prototype of a **smart wearable safety device** designed to enhance **women’s safety** through **AI, IoT, and embedded systems**.  
The device is **compact, discreet, and intelligent** — fitting comfortably on a finger like a ring while enabling **instant distress alerts** using integrated sensors and wireless communication.

This project merges **electronics design, AI-driven event detection, and cloud-connected safety systems** into a next-generation personal safety solution.

---

###  Objective
To develop a **low-cost, AI-enabled wearable ring** that can:
- Detect distress or abnormal motion automatically using sensors.  
- Trigger **manual SOS alerts** through a hidden button (**3 taps within 5 seconds**).  
- Send **real-time location** and alert messages to emergency contacts.  
- Integrate with **cloud or smartphone app** for enhanced data analytics and monitoring.

---

###  Concept Block Diagram
```markdown
![Raksh Ring Block Diagram](images/block_diagram.png)
 Component	 Purpose
ESP32 / Arduino Nano 33 BLE	Core microcontroller handling sensor input, button logic (3-tap detection), and communication
Push Button / Capacitive Touch Sensor	Manual SOS trigger — activates alert when pressed 3 times within 5 seconds
GPS Module (NEO-6M)	Tracks and provides real-time location data during alerts
GSM Module (SIM800L)	Sends SMS or initiates call to emergency contacts
Bluetooth (Built-in / BLE)	Connects to mobile app for AI-based event detection and logging
Li-ion / Li-Po Battery (10–20 mAh)	Power source for wearable device
Accelerometer / Gyroscope (ICM-20948)	Detects gestures or distress motion patterns
LED / Vibration Motor	Provides haptic or visual feedback on successful SOS activation
AI / Cloud Integration (Optional)	Learns user behavior patterns to auto-detect distress situations

 Working Principle
 Normal Mode

The device remains in low-power standby to conserve battery.

Sensors continuously monitor for abnormal motion or gestures.

 Alert Activation (Manual Trigger)

The user can trigger an SOS by pressing the button 3 times within 5 seconds.

The built-in microcontroller detects this pattern through a time-based interrupt algorithm.

Once verified, the system switches to Alert Mode.

 Automatic Activation (AI/ML Trigger)

If the accelerometer or AI model detects abnormal motion (e.g., struggle, sudden fall, panic gesture), the alert activates automatically — no button press needed.

 Alert Transmission

Once triggered:

The device fetches GPS coordinates via NEO-6M.

Sends an SMS or call alert using SIM800L.

Optionally transmits Bluetooth data to the paired mobile app.

A small LED or vibration motor confirms that the SOS was sent.

 AI Cloud Support (Optional)

A connected mobile app or cloud service analyzes sensor data for pattern learning and predictive detection.

 Recovery Mode

The user or system can reset to standby mode once the situation is safe.

 Future Improvements
Integrate TinyML for onboard gesture recognition

Develop Android App for alerts and tracking

Design custom mini PCB

Optimize battery life

Improve waterproofing and comfort

 Repository Structure
css
Copy code
raksh-ring/
├── code/
│   └── raksh_ring.ino
├── hardware/
│   └── schematic.png
├── images/
│   ├── ring_render.png
│   ├── ring_cutaway_labeled.png
│   └── block_diagram.png
├── docs/
│   └── HACKATHON.docx
├── README.md
├── LICENSE
└── .gitignore
 Technologies Used
Embedded C / Arduino IDE

ESP32 / GSM / GPS interfacing

BLE / IoT communication

TinyML (conceptual)

3D modeling (Fusion 360 / Tinkercad)

 Project Status
Conceptual Prototype Stage

 Hardware design finalized

 3D models complete

 Integration next

 Real-World Impact
“A ring that silently speaks for safety.”

Raksh Ring empowers women by turning wearable tech into a lifesaving companion, ensuring rapid alerts in critical moments.

 Author
Shivam Vyas
📧 shivam2411vyas@gmail.com
🎓 Electronics & Communication Engineer | GATE 2026 Aspirant
🌐 GitHub Profile