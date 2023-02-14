//computer-arduino_read_pot.ino
/*From Blum pg 163 designed to be used with 
Processing file: screen-processing_display_color.pde
for use with arduino but this program was used on ESP32
note for the map value Arduino has an anolog in range of 0 - 1023
whereas an esp 32 has a range of 0 - 4095
*/

// Potentiometer is connected to GPIO 15 (Analog ADC2_CH3) 
const int potPin = 15;

// variable for storing the potentiometer value
int potValue = 0;

void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // Reading potentiometer value
  potValue = map(analogRead(potPin), 0, 4095, 0, 255);
  Serial.println(potValue);
  delay(250);
}
