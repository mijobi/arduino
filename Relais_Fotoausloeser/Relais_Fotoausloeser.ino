/*
  Programm:       Ansteuerung eines Fernauslösers an einer Canon DSLR
                  zwecks Zeitrafferaufnahmen
  Board:          lil' Nardo ^= Arduino Leonardo
  Board Layout:   D0/RX; D1/TX; D2/SDA; D3/SCL/PWM; D4/A6; D5/PWM; D6/A8/PWM; D7; D8/A9; 
                  D9/A10/PWM; D10/A11/PWM; D11/PWM; D12/A7; D13/PWM; A0; A1; A2; A3; A4;
                  A5; MISO; MOSI; SCK; AREF
                
  geändert 20180801
  von Michael Bitzer
*/

// den GPIO-Portnummern Konstanten der Form Integer zuweisen, dies geschieht einmalig

const int d0 = 0;         
const int d1 = 1;         
const int d2 = 2;
const int d3 = 3;

// die setup-Funktion läuft einmalig bei Reset oder bei Einschalten des Boards
void setup() {
  
  // GPIO Digitalausgänge definieren
  pinMode(d0, OUTPUT);               // J3, Pin 8 = Auslöser halb
  pinMode(d1, OUTPUT);               // J3, Pin 7 = Auslöser voll
  pinMode(d2, OUTPUT);               // J3, Pin 6 = nicht genutzt
  pinMode(d3, OUTPUT);               // J3, Pin 5 = nicht genutzt

}

// die loop-Funktion läuft fortwährend in einer Endlosschleife
void loop() {

  digitalWrite(d2, HIGH);            // K3 abfallen
  digitalWrite(d3, HIGH);            // K4 abfallen
  digitalWrite(d0, HIGH);            // K1 abfallen
  digitalWrite(d1, HIGH);            // K2 abfallen
  digitalWrite(d0, LOW);             // Auslöser halb drücken
  delay(1000);                       // Warten/Verzögerung (in ms)
  digitalWrite(d1, LOW);             // Auslöser drücken
  delay(500); 
  digitalWrite(d1, HIGH);            // Auslöser lösen
  delay(500); 
  digitalWrite(d0, HIGH);            // Auslöser halb lösen
  delay(300000);                     // aktueller Wert
    
  // delay(500);                     // warte 0,5 Sekunden
  // delay(1000);                    // warte 1 Sekunden
  // delay(2000);                    // warte 2 Sekunden
  // delay(3000);                    // warte 3 Sekunden
  // delay(5000);                    // warte 5 Sekunden
  // delay(10000);                   // warte 10 Sekunden
  // delay(15000);                   // warte 15 Sekunden
  // delay(30000);                   // warte 30 Sekunden
  // delay(60000);                   // warte 1 Minuten
  // delay(120000);                  // warte 2 Minuten
  // delay(180000);                  // warte 3 Minuten
  // delay(300000);                  // warte 5 Minuten
  //delay(598000);                   // warte 10 Minuten
  // delay(900000);                  // warte 15 Minuten
  // delay(1800000);                 // warte 30 Minuten
  // delay(3600000);                 // warte 1 Stunde
  // delay(7200000);                 // warte 2 Stunden
  // delay(10800000);                // warte 3 Stunden
  // delay(18000000);                // warte 5 Stunden
  // delay(36000000);                // warte 10 Stunden
  // delay(43200000);                // warte 12 Stunden
  // delay(720000000);               // warte 20 Stunden
  // delay(864000000);               // warte 24 Stunden

}
