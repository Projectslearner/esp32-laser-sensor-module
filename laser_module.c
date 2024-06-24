/*
    Project name : ESP32 Laser sensor Module
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-laser-sensor-module
*/

// Pin connected to the laser sensor module
const int laserSensorPin = 2; // GPIO 2 on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(laserSensorPin, INPUT); // Set laser sensor pin as input
}

void loop() {
  // Read the state of the laser sensor module
  int sensorValue = digitalRead(laserSensorPin);

  // Print the state to the Serial Monitor
  if (sensorValue == HIGH) {
    Serial.println("Object detected by laser sensor!");
  } else {
    Serial.println("No object detected by laser sensor.");
  }

  delay(500); // Add a small delay before the next reading
}
