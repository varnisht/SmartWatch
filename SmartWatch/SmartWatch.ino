/* Smart Watch Project 
   Thomas Varnish
*/

/* INCLUDES */
#include <G4D.h>
#include <SoftwareSerial.h>

#define POWER_PIN    8
#define RESET_PIN    9
#define SOFT_TX      3
#define SOFT_RX      2

SoftwareSerial oledSerial(SOFT_RX, SOFT_TX);
G4D display(POWER_PIN,RESET_PIN,&oledSerial);

/* VARIABLES */
<<<<<<< HEAD
const int button = 11;
const float pi = 3.1415;
const int cX = 64;
const int cY = 64;
=======
const float pi = 3.1415;
>>>>>>> origin/master

int buttonState = 0;
int i;
int x;
<<<<<<< HEAD
float h = 0.0;
float hAngle;
float hX;
float hY;
int hLength = 60;
=======
int hAngle;
int hX;
int hY;
int cX = 64;
int cY = 64;
int hLength = 45;

float h = 0.0;
>>>>>>> origin/master

/* FUNCTIONS */
void ColourBackground()
{
  display.setBackground(50, 50, 88);
}

void DrawHollowCircle(int x, int i)
{
  display.circle(64, 64, x, 255, 255, 255);
  display.circle(64, 64, x - i, 0, 0, 0);
}

void DrawClockLines()
{
  // Four main lines
  display.line( 64, 124, 64, 114, 255, 255, 255);
  display.line( 64, 4, 64, 14, 255, 255, 255);
  display.line( 124, 64, 114, 64, 255, 255, 255);
  display.line( 4, 64, 14, 64, 255, 255, 255);
  
  // Other lines
  //display.line( 64, 64, 64.54, 4.0025, 255, 255, 255);
 // display.line( 
}

void DrawHourHand()
{
  h = h + 0.25;
  hAngle = 2.0 * pi * h / 12.0;
  hX = cX + hLength * sin(hAngle);
  hY = cY - hLength * cos(hAngle);
  display.line( cX, cY, hX, hY, 255, 0, 0);
  delay(100);
  display.line( cX, cY, hX, hY, 0, 0, 0);
}

/* MAIN PROGRAM */
void setup()
{  
        Serial.begin(9600);
        delay(100);
        
  	oledSerial.begin(57600);

	display.powerUp();
        display.clear();
        //ColourBackground();
        DrawHollowCircle(60, 1);
        DrawClockLines();
}

/* LOOP */
void loop()
{
<<<<<<< HEAD
  for (int i = 0; i < 12; i ++)
  {
    h ++;
  
    hAngle = 2.0 * pi * h/12.0;
    hX = cX + hLength * sin(hAngle);
    hY = cY - hLength * cos(hAngle);
    
    display.line(64, 64, hX, hY, 255, 255, 255);
  }
   
  h = 0;
  hLength = hLength - 10;
  
  for (int i = 0; i < 12; i ++)
  {
    h ++;
    
    hX = cX + hLength * sin(hAngle);
    hY = cY - hLength * cos(hAngle);
    
    display.line(64, 64, hX, hY, 0, 0, 0);
=======
  // Needs fixing
  while (true)
  {
    h ++;
    DrawHourHand();
>>>>>>> origin/master
  }
}
