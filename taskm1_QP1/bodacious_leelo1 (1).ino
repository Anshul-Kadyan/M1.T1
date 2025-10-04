// TaskM1.cpp - Basic Sense-Think-Act with Polling

void setup() {
  pinMode(2, INPUT_PULLUP);  // Digital sensor (button) on pin 2
  pinMode(13, OUTPUT);       // Actuator (LED) on pin 13
  Serial.begin(9600);        // For output logging
  Serial.println("System started - QP 1/4");
}

void loop() {
  int sensorState = digitalRead(2);  // Sense: Read button state
  
  if (sensorState == LOW) {  // Think: If pressed (LOW with pull-up)
    digitalWrite(13, HIGH);  // Act: Turn LED on
    Serial.println("Button pressed - LED ON");
  } else {
    digitalWrite(13, LOW);   // Act: Turn LED off
    Serial.println("Button released - LED OFF");
  }
  
  delay(200);  // Delay to debounce button and prevent spam
}