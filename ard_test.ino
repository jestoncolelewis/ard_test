int inPin = 8;
int yPin = 11;
int rPin = 12;
int gPin = 13;
long blink = 200;

void setup() {
    Serial.begin(9600);
    pinMode(inPin, INPUT);
    pinMode(yPin, OUTPUT);
    pinMode(rPin, OUTPUT);
    pinMode(gPin, OUTPUT);
}

void loop() {
    while (digitalRead(inPin) == HIGH) {
        digitalWrite(yPin, HIGH);
        delay(blink);
        digitalWrite(rPin, HIGH);
        delay(blink);
        digitalWrite(gPin, HIGH);
        delay(blink);
        digitalWrite(yPin, LOW);
        delay(blink);
        digitalWrite(rPin, LOW);
        delay(blink);
        digitalWrite(gPin, LOW);
        delay(blink);
    }
}