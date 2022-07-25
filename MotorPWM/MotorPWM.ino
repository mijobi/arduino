/*
  Programm:       
  Board:          lil' Nardo ^= Arduino Leonardo
  Board Layout:   D0/RX; D1/TX; D2/SDA; D3/SCL/PWM; D4/A6; D5/PWM; D6/A8/PWM; D7; D8/A9; 
                  D9/A10/PWM; D10/A11/PWM; D11/PWM; D12/A7; D13/PWM; A0; A1; A2; A3; A4;
                  A5; MISO; MOSI; SCK; AREF
                
  geändert 20180801
  von Michael Bitzer
*/

// den GPIO-Portnummern Konstanten der Form Integer zuweisen, dies geschieht einmalig

const int motorPin1 = 0;         
const int motorPin2 = 3; //PWM

// die setup-Funktion läuft einmalig bei Reset oder bei Einschalten des Boards
void setup() {
  
  // GPIO Digitalausgänge definieren
  pinMode(motorPin1, OUTPUT);               
  pinMode(motorPin2, OUTPUT);               
}

void motorStop(){
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,LOW);
  delay(500);
}

// die loop-Funktion läuft fortwährend in einer Endlosschleife
void loop() {

  digitalWrite(motorPin1,HIGH);   // Motor Vor
  digitalWrite(motorPin2,LOW);
  delay(5000);

  motorStop();                    // Motor Stop
  
  digitalWrite(motorPin1,LOW);    // Motor Rueck
  digitalWrite(motorPin2,HIGH);
  delay(5000);
  
  motorStop();                    // Motor Stop
  
  digitalWrite(motorPin1, LOW);   // Motor langsam zu schnell
  for (int i=150; i<255; i++){
    analogWrite(motorPin2, i);
    delay(250);
  }
  motorStop();                    // Motor Stop

}
