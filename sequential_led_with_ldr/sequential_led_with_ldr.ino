int ledPin = 13;
int ledPin1 = 12;
int ledPin2 = 11;
int ldrPin = A0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  int ldrStatus = analogRead(ldrPin);
  if (ldrStatus <= 300) {
     switching();
  } else {
    digitalWrite(ledPin, LOW);
    delay(200);
    digitalWrite(ledPin1, LOW);
    delay(200);
    digitalWrite(ledPin2, LOW);
  }
}

void switching() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  delay(100);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(200);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(300);
}