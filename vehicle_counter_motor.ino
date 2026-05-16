// ESP32 Vehicle Counter + Motor Control

int irSensor = 4;
int motorPin = 5;

int vehicleCount = 0;
int maxVehicles = 5;

void setup() {
  pinMode(irSensor, INPUT);
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);

  digitalWrite(motorPin, HIGH); // Motor ON
}

void loop() {
  if (digitalRead(irSensor) == HIGH) {
    vehicleCount++;

    Serial.print("Vehicle Count: ");
    Serial.println(vehicleCount);

    delay(500);
  }

  if (vehicleCount >= maxVehicles) {
    digitalWrite(motorPin, LOW); // Motor OFF
    Serial.println("Limit reached. Motor stopped.");
  }
}
