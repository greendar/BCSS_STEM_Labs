//screen-processing_display_color.pde
/* from Blum pg 164
used to display serial data from arduino using program
computer-arduino_read_pot.ino
*/


import processing.serial.*;
Serial port;

float brightness = 0;

void setup(){
  size(500, 500);
  port = new Serial(this, "COM6", 9600);
  port.bufferUntil('\n');
}

void draw(){
  background(0, 0, brightness);
}

void serialEvent(Serial port){
  brightness = float(port.readStringUntil('\n'));
}
