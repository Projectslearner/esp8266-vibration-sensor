/*
    Project name : ESP8266 Vibration Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-vibration-sensor
*/

const int vibrationPin = D2; // Digital pin connected to the vibration sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(vibrationPin, INPUT); // Set vibration sensor pin as INPUT
}

void loop() {
  int vibrationState = digitalRead(vibrationPin); // Read vibration sensor state

  // Check if vibration is detected
  if (vibrationState == HIGH) {
    Serial.println("Vibration detected!");
  }

  delay(100); // Add a small delay to debounce the sensor
}
