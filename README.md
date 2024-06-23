### ESP8266 Vibration Sensor Project

#### Project Overview
This project demonstrates how to interface a vibration sensor with an ESP8266 microcontroller to detect vibration events. Vibration sensors are commonly used in applications such as security systems, impact detection, and vibration monitoring.

#### Components Needed
- **ESP8266 Microcontroller**
- **Vibration Sensor Module**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup
1. **Connecting the Vibration Sensor to ESP8266:**
   - Connect the digital output pin of the vibration sensor to GPIO pin D2 on the ESP8266.
   - Ensure a common ground (GND) connection between the ESP8266 and the vibration sensor.

#### Instructions
1. **Setup:**
   - Initialize serial communication at a baud rate of 9600 for debugging purposes.
   - Configure the GPIO pin connected to the vibration sensor (`vibrationPin`) as an input using `pinMode()`.

2. **Operation:**
   - In the `loop()` function:
     - Read the state of the vibration sensor using `digitalRead(vibrationPin)`.
     - If vibration is detected (when `vibrationState` is `HIGH`), print "Vibration detected!" to the Serial Monitor.
     - Add a small delay (`delay(100)`) to debounce the sensor and prevent rapid triggering.

3. **Considerations:**
   - **Sensor Sensitivity:** Adjust the sensitivity of the vibration sensor based on environmental conditions and application requirements.
   - **Power Supply:** Ensure stable power supply to both ESP8266 and the vibration sensor for reliable operation.
   - **Deployment:** Mount the vibration sensor securely to ensure accurate detection of vibration events.

#### Applications
- **Security Systems:** Detect unauthorized access or tampering.
- **Industrial Monitoring:** Monitor machinery for abnormal vibrations indicating faults.
- **Home Automation:** Trigger actions based on detected vibrations, such as turning on lights or sending alerts.

#### Notes
- **Digital Output:** The vibration sensor provides a digital output (`HIGH` or `LOW`), simplifying interfacing with microcontrollers like ESP8266.
- **Serial Output:** Use the Serial Monitor to observe and debug vibration sensor readings and operations.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Vibration Sensor](https://projectslearner.com/learn/esp8266-vibration-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner