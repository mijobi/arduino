/*
  Programm:       Lil' Nardo Standard
  
  Board:          lil' Nardo ^= Arduino Leonardo
  Board Layout:   D0/RX; D1/TX; D2/SDA; D3/SCL/PWM; D4/A6; D5/PWM; D6/A8/PWM; D7; D8/A9; 
                  D9/A10/PWM; D10/A11/PWM; D11/PWM; D12/A7; D13/PWM; A0; A1; A2; A3; A4;
                  A5; MISO; MOSI; SCK; AREF
                
  geändert am 6 Mai 2018
  von Michael Bitzer
*/

// den GPIO-Portnummern Konstanten der Form Integer zuweisen, dies geschieht einmalig

const int d0 = 0; const int d1 = 1; const int d2 = 2; const int d3 = 3; const int d4 = 4; const int d5 = 5;
const int d7 = 7; const int d8 = 8; const int d9 = 9; const int d10 = 10; const int d11 = 11; const int d12 = 12;
const int d13 = 13; const int a0 = 14; const int a1= 15; const int a2 = 16; const int a3 = 17; const int a4 = 18;
const int a5 = 19; const int mosi = 20; const int miso = 21; const int sck = 22;

// die setup-Funktion läuft einmalig bei Reset oder bei Einschalten des Boards
void setup() {
  
  // GPIO Digitalausgänge definieren
  pinMode(LED_BUILTIN, OUTPUT);                   // D13
  pinMode(d0, ); pinMode(d1, ); pinMode(d2, ); pinMode(d3, ); pinMode(d4, ); pinMode(d5, ); 
  pinMode(d6, ); pinMode(d7, ); pinMode(d8, ); pinMode(d9, ); pinMode(d10, ); pinMode(d11, );
  pinMode(d12, ); pinMode(d13, ); pinMode(a0, ); pinMode(a1, ); pinMode(a2, ); pinMode(a3, ); 
  pinMode(a4, ); pinMode(a5, ); pinMode(mosi, ); pinMode(miso, ); pinMode(sck, );      
}

// die loop-Funktion läuft fortwährend in einer Endlosschleife
void loop() {

  delay(60000);
  
}
