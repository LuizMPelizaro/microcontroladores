//
// Created by Luiz on 19/08/2022.
//
//conversor
int tanque = 0;

void setup() {

    pinMode(A0, INPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    tanque = analogRead(A0);
    Serial.print(" - tanque: ");
    Serial.println(tanque);

    if (tanque < 128 and tanque > 2) {
        digitalWrite(3, 1);
    } else { digitalWrite(3, 0); }
    if (tanque >= 256) {
        digitalWrite(4, 1);
    } else { digitalWrite(4, 0); }
    if (tanque >= 385) {
        digitalWrite(5, 1);
    } else { digitalWrite(5, 0); }
    if (tanque >= 641) {
        digitalWrite(6, 1);
    } else { digitalWrite(6, 0); }
    if (tanque >= 769) {
        digitalWrite(7, 1);
    } else { digitalWrite(7, 0); }
    if (tanque >= 897) {
        digitalWrite(8, 1);
    } else { digitalWrite(8, 0); }
    if (tanque > 1021 and tanque <= 1024) {
        digitalWrite(9, 1);
    } else { digitalWrite(9, 0); }
}
