const int pirPin = 2;
const int ledPin = 13;
int pirState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
}

void loop() {
  pirState = digitalRead(pirPin);
  if (pirState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
