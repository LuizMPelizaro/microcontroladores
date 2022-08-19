//
// Created by Luiz on 19/08/2022.
//
#include "Arduino.h"

//7 segmentos
boolean A = 0;
boolean B = 0;
boolean C = 0;
boolean D = 0;

void setup() {
    pinMode(12, OUTPUT);//Sa
    pinMode(13, OUTPUT);//Sb
    pinMode(14, OUTPUT);//Sc que é saida analógica A0
    pinMode(15, OUTPUT);//Sd
    pinMode(16, OUTPUT);//Se
    pinMode(10, OUTPUT);//Sf
    pinMode(11, OUTPUT);//Sg
    pinMode(4, INPUT);//ent A
    pinMode(5, INPUT);//ent B
    pinMode(6, INPUT);//ent C
    pinMode(7, INPUT);//ent D
}

void loop() {
    A = digitalRead(4);//entrada A
    B = digitalRead(5);
    C = digitalRead(6);
    D = digitalRead(7);

//    Faz o digito 0
    if (!A * !B * !C * !D == 1) {
        digitalWrite(12, 1);
        digitalWrite(13, 1);
        digitalWrite(14, 1);
        digitalWrite(15, 1);
        digitalWrite(16, 1);
        digitalWrite(10, 1);
        digitalWrite(11, 0);
    } else {
        digitalWrite(12, 0);
        digitalWrite(13, 0);
        digitalWrite(14, 0);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
    }
//    Faz o digito 1
    if (!A * !B * !C * D == 1) {
        digitalWrite(12, 1);
        digitalWrite(13, 0);
        digitalWrite(14, 1);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
    } else {
        digitalWrite(12, 0);
        digitalWrite(13, 0);
        digitalWrite(14, 0);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
    }
    //    Faz o digito 2
    if (!A * !B * C * !D == 1) {
        digitalWrite(12, 1);
        digitalWrite(13, 1);
        digitalWrite(14, 0);
        digitalWrite(15, 1);
        digitalWrite(16, 1);
        digitalWrite(10, 0);
        digitalWrite(11, 1);
    } else {
        digitalWrite(12, 0);
        digitalWrite(13, 0);
        digitalWrite(14, 0);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
    }
    // Faz o 3
    if (!A * !B * C * D == 1) {
        digitalWrite(12, 1);
        digitalWrite(13, 1);
        digitalWrite(14, 1);
        digitalWrite(15, 1);
        digitalWrite(16, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 1);
    } else {
        digitalWrite(12, 0);
        digitalWrite(13, 0);
        digitalWrite(14, 0);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
    }
    // Faz o 4
    if (A * !B * C * D == 1) {
        digitalWrite(12, 0);
        digitalWrite(13, 1);
        digitalWrite(14, 1);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 1);
        digitalWrite(11, 1);
    } else {
        digitalWrite(12, 0);
        digitalWrite(13, 0);
        digitalWrite(14, 0);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
    }
    // Faz o 5
    if (A * !B * C * D == 1) {
        digitalWrite(12, 1);
        digitalWrite(13, 0);
        digitalWrite(14, 1);
        digitalWrite(15, 1);
        digitalWrite(16, 0);
        digitalWrite(10, 1);
        digitalWrite(11, 1);
    } else {
        digitalWrite(12, 0);
        digitalWrite(13, 0);
        digitalWrite(14, 0);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
    }
    // Faz o 6
    if (!A * B * C * !D == 1) {
        digitalWrite(12, 0);
        digitalWrite(13, 0);
        digitalWrite(14, 1);
        digitalWrite(15, 1);
        digitalWrite(16, 1);
        digitalWrite(10, 1);
        digitalWrite(11, 1);
    } else {
        digitalWrite(12, 0);
        digitalWrite(13, 0);
        digitalWrite(14, 0);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
    }
    // Faz o 7
    if (!A * B * C * D == 1) {
        digitalWrite(12, 1);
        digitalWrite(13, 1);
        digitalWrite(14, 1);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
    } else {
        digitalWrite(12, 0);
        digitalWrite(13, 0);
        digitalWrite(14, 0);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
    }
    // Faz o 8
    if (A * !B * !C * !D == 1) {
        digitalWrite(12, 1);
        digitalWrite(13, 1);
        digitalWrite(14, 1);
        digitalWrite(15, 1);
        digitalWrite(16, 1);
        digitalWrite(10, 1);
        digitalWrite(11, 1);
    } else {
        digitalWrite(12, 0);
        digitalWrite(13, 0);
        digitalWrite(14, 0);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
    }
    // Faz o 9
    if (A * !B * !C * D == 1) {
        digitalWrite(12, 1);
        digitalWrite(13, 1);
        digitalWrite(14, 1);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 1);
        digitalWrite(11, 1);
    } else {
        digitalWrite(12, 0);
        digitalWrite(13, 0);
        digitalWrite(14, 0);
        digitalWrite(15, 0);
        digitalWrite(16, 0);
        digitalWrite(10, 0);
        digitalWrite(11, 0);
    }
}