#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20,16,2);
byte pb1 = 2 ;
byte pb2 = 3 ;
byte c[8] = {
  B11000,
  B11100,
  B11110,
  B11111,
  B11110,
  B11100,
  B11000,
  B00000
};
byte counter1 = 0;
byte counter2= 0;
void setup()
{ 
lcd.init();
lcd.backlight();
  pinMode(pb1,INPUT_PULLUP);
  pinMode(pb2,INPUT_PULLUP);  
lcd.createChar(0,c);
lcd.setCursor(0,0);
lcd.write(byte(0));  
lcd.setCursor(2,0);
lcd.print("Select Program");
lcd.setCursor(2,1);
lcd.print("Settings");
}
void loop()
{
if(!digitalRead(pb1) && digitalRead(pb2))
{ 
counter1 ++;
delay(250);
 if(counter1 == 4){counter1 = 3;}
 if (counter1==1 && counter2==0)
 {
lcd.clear();  
lcd.createChar(0,c);
lcd.setCursor(0,0);
lcd.write(byte(0));  
lcd.setCursor(2,0);
lcd.print("Select Program");
lcd.setCursor(2,1);
lcd.print("Settings");  
   counter1 = 0 ;
 }
if (counter1==1 && counter2==1)
 {
lcd.clear();  
lcd.createChar(0,c);
lcd.setCursor(0,0);
lcd.write(byte(0));
   
lcd.setCursor(2,0);
lcd.print("Select Program");

lcd.setCursor(2,1);
lcd.print("Settings");
  counter1=0;
 }  
if (counter1==1 && counter2==2)
 {
lcd.clear();  
lcd.createChar(0,c);
lcd.setCursor(0,0);
lcd.write(byte(0));  
lcd.setCursor(2,0);
lcd.print("Settings");
lcd.setCursor(2,1);
lcd.print("Power Saving");
 } 
  if (counter1==1 && counter2==3)
 {
lcd.clear();  
lcd.createChar(0,c);
lcd.setCursor(0,0);
lcd.write(byte(0)); 
lcd.setCursor(2,0);
lcd.print("Power Saving");
lcd.setCursor(2,1);
lcd.print("Shut down");
 } 
  if (counter1==2 && counter2==3)
 {
lcd.clear();  
lcd.createChar(0,c);
lcd.setCursor(0,0);
lcd.write(byte(0)); 
lcd.setCursor(2,0);
lcd.print("Settings");
lcd.setCursor(2,1);
lcd.print("Power Saving");
 }   
  if (counter1==3 && counter2==3)
 {
lcd.clear();  
lcd.createChar(0,c);
lcd.setCursor(0,0);
lcd.write(byte(0));  
lcd.setCursor(2,0);
lcd.print("Select Program");
lcd.setCursor(2,1);
lcd.print("Settings");
   counter1=0;
   counter2=0; 
 }  
    if (counter1 == 3 && counter2 == 2)
 {   
lcd.clear();
lcd.createChar(0,c);
lcd.setCursor(0,0);
lcd.write(byte(0));
lcd.setCursor(2,0);
lcd.print("Select Program");
lcd.setCursor(2,1);
lcd.print("Settings");  
      counter1=0;
      counter2=0;
 } 
    if (counter1==3 && counter2==3)
 {
lcd.clear();  
lcd.createChar(0,c);
lcd.setCursor(0,0);
lcd.write(byte(0));  
lcd.setCursor(2,0);
lcd.print("Select Program");
lcd.setCursor(2,1);
lcd.print("Settings");
   counter1=0;
   counter2=0; 
 }  
}  // if 
if(digitalRead(pb1) && !digitalRead(pb2))
{
counter2 ++;
delay(250); 
  if(counter2 == 4){counter2 = 3;}
 if (counter1==0 && counter2==1)
 {
lcd.clear();
lcd.createChar(0,c);
lcd.setCursor(0,1);
lcd.write(byte(0));
lcd.setCursor(2,0);
lcd.print("Select Program");
lcd.setCursor(2,1);
lcd.print("Settings");   
 } 
if (counter1==0 && counter2==2)
 {
lcd.clear();
lcd.createChar(0,c);
lcd.setCursor(0,1);
lcd.write(byte(0));
lcd.setCursor(2,0);
lcd.print("Settings");
lcd.setCursor(2,1);
lcd.print("Power Saving"); 
 }
  if (counter1==0 && counter2>=3)
 {
lcd.clear();
lcd.createChar(0,c);
lcd.setCursor(0,1);
lcd.write(byte(0));
lcd.setCursor(2,0);
lcd.print("Power Saving");  
lcd.setCursor(2,1);
lcd.print("Shut down"); 
  counter2 =3 ;  
  } 
if (counter1==1 && counter2==2)
 {
lcd.clear();
lcd.createChar(0,c);
lcd.setCursor(0,0);
lcd.write(byte(0));
lcd.setCursor(2,0);
lcd.print("Settings");
lcd.setCursor(2,1);
lcd.print("Power Saving");   
 }
