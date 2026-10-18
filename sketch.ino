const int ldrPin = A0;
const int ledPin = 13;

int lightValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lightValue = analogRead(ldrPin);

  Serial.print("Light value: ");
  Serial.println(lightValue);

  if (lightValue < 500) {
    digitalWrite(ledPin, HIGH);  // Street light ON
  } else {
    digitalWrite(ledPin, LOW);   // Street light OFF
  }

  delay(500);
}
