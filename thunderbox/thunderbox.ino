
int ledPin = 13;  // LED on Pin 13 of Arduino
int pirPin = 2; // Input for HC-S501

int value; // Place to store read PIR Value
int _current = 0;


void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);

  digitalWrite(ledPin, LOW);

  Serial.begin(9600);
  Serial.print("INIT PIR VALUE");
  Serial.println(value);
}

void loop() {
  value = digitalRead(pirPin);
  
  if (_current != value) {
    _current = value;
    
    Serial.print("PIR VALUE CHANGED:");
    Serial.println(value);
  }
  
  digitalWrite(ledPin, value);
}

