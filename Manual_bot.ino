#include <SoftwareSerial.h>
#include <Cytron_PS2Shield.h>

Cytron_PS2Shield ps2(10, 11);
int inF1= 23;
int inF2= 25;
int pwmF= 7;

int inL1= 27;
int inL2= 29;
int pwmL= 6;

int inR1= 31;
int inR2= 33;
int pwmR= 5;

int inB1= 35;
int inB2= 37;
int pwmB= 8;

void setup() {

  pinMode(inL1, OUTPUT);
  pinMode(inL2, OUTPUT);
  pinMode(pwmL, OUTPUT);

  pinMode(inF1, OUTPUT);
  pinMode(inF2, OUTPUT);
  pinMode(pwmF, OUTPUT);

  pinMode(inR1, OUTPUT);
  pinMode(inR2, OUTPUT);
  pinMode(pwmR, OUTPUT);

  pinMode(inB1, OUTPUT);
  pinMode(inB2, OUTPUT);
  pinMode(pwmB, OUTPUT);
  Serial.begin(9600);
  ps2.begin(9600); 

}

void loop() {
if((ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)<=120)&&(ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)>=0) && (ps2.readButton(PS2_JOYSTICK_RIGHT_X_AXIS)>120)&&(ps2.readButton(PS2_JOYSTICK_RIGHT_X_AXIS)<132))
   { 
    digitalWrite(inL1 , HIGH);
    digitalWrite(inL2 , LOW);
    digitalWrite(inF1 , HIGH);
    digitalWrite(inF2 , HIGH);
    digitalWrite(inR1 , LOW);
    digitalWrite(inR2 , HIGH);
    digitalWrite(inB1 , HIGH);
    digitalWrite(inB2 , HIGH);
    analogWrite(pwmL , 150);
    analogWrite(pwmR , 150);
    analogWrite(pwmB , 0);
    analogWrite(pwmF , 0);
    Serial.println("FORWARD");
  }


if((ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)>=132)&&(ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)<=255) && (ps2.readButton(PS2_JOYSTICK_RIGHT_X_AXIS)>120)&&(ps2.readButton(PS2_JOYSTICK_RIGHT_X_AXIS)<132))
  { 
    digitalWrite(inL1 , LOW);
    digitalWrite(inL2 , HIGH);
    digitalWrite(inF1 , HIGH);
    digitalWrite(inF2 , HIGH);
    digitalWrite(inR1 , HIGH);
    digitalWrite(inR2 , LOW);
    digitalWrite(inB1 , HIGH);
    digitalWrite(inB2 , HIGH);
    analogWrite(pwmL , 150);
    analogWrite(pwmR , 150);
    analogWrite(pwmB , 0);
    analogWrite(pwmF , 0);
    Serial.println("BACKWARD");
  }

if((ps2.readButton(PS2_JOYSTICK_RIGHT_X_AXIS)<=120)&&(ps2.readButton(PS2_JOYSTICK_RIGHT_X_AXIS)>=0) && (ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)>120)&&(ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)<132))
  { 
    digitalWrite(inL1 , HIGH);
    digitalWrite(inL2 , HIGH);
    digitalWrite(inF1 , LOW);
    digitalWrite(inF2 , HIGH);
    digitalWrite(inR1 , HIGH);
    digitalWrite(inR2 , HIGH);
    digitalWrite(inB1 , HIGH);
    digitalWrite(inB2 , LOW);
    analogWrite(pwmL , 0);
    analogWrite(pwmR , 0);
    analogWrite(pwmB , 150);
    analogWrite(pwmF , 150);
    Serial.println("RIGHT");
 }

if((ps2.readButton(PS2_JOYSTICK_RIGHT_X_AXIS)>=132)&&(ps2.readButton(PS2_JOYSTICK_RIGHT_X_AXIS)<=255) && (ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)>120)&&(ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)<132))
  { 
    digitalWrite(inL1 , HIGH);
    digitalWrite(inL2 , HIGH);
    digitalWrite(inF1 , HIGH);
    digitalWrite(inF2 , LOW);
    digitalWrite(inR1 , HIGH);
    digitalWrite(inR2 , HIGH);
    digitalWrite(inB1 , LOW);
    digitalWrite(inB2 , HIGH);
    analogWrite(pwmL , 0);
    analogWrite(pwmR , 0);
    analogWrite(pwmB , 150);
    analogWrite(pwmF , 150);
    Serial.println("LEFT");
  }
  
if((ps2.readButton(PS2_JOYSTICK_LEFT_X_AXIS)<=120)&&(ps2.readButton(PS2_JOYSTICK_LEFT_X_AXIS)>=0) && (ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)>120)&&(ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)<132))
  { 
    digitalWrite(inL1 , HIGH);
    digitalWrite(inL2 , LOW);
    digitalWrite(inF1 , HIGH);
    digitalWrite(inF2 , LOW);
    digitalWrite(inR1 , HIGH);
    digitalWrite(inR2 , LOW);
    digitalWrite(inB1 , HIGH);
    digitalWrite(inB2 , LOW);
    analogWrite(pwmL , 150);
    analogWrite(pwmB , 150);
    analogWrite(pwmF , 150);
    analogWrite(pwmR , 150);
    Serial.println("clockwise");
  }

else if((ps2.readButton(PS2_JOYSTICK_LEFT_X_AXIS)>=132)&&(ps2.readButton(PS2_JOYSTICK_LEFT_X_AXIS)<=255) && (ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)>120)&&(ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)<132))
 { 
    digitalWrite(inL1 , LOW);
    digitalWrite(inL2 , HIGH);
    digitalWrite(inF1 , LOW);
    digitalWrite(inF2 , HIGH);
    digitalWrite(inR1 , LOW);
    digitalWrite(inR2 , HIGH);
    digitalWrite(inB1 , LOW);
    digitalWrite(inB2 , HIGH);
    analogWrite(pwmL , 150);
    analogWrite(pwmB , 150);
    analogWrite(pwmF , 150);
    analogWrite(pwmR , 150);
    Serial.println("anti clockwise");
 }
else if((ps2.readButton(PS2_JOYSTICK_RIGHT_X_AXIS)>120)&&(ps2.readButton(PS2_JOYSTICK_RIGHT_X_AXIS)<132) && (ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)>120)&&(ps2.readButton(PS2_JOYSTICK_RIGHT_Y_AXIS)<132))
 {
    digitalWrite(inL1 , HIGH);
    digitalWrite(inL2 , HIGH);
    digitalWrite(inF1 , HIGH);
    digitalWrite(inF2 , HIGH);
    digitalWrite(inR1 , HIGH);
    digitalWrite(inR2 , HIGH);
    digitalWrite(inB1 , HIGH);
    digitalWrite(inB2 , HIGH);

 }
}

