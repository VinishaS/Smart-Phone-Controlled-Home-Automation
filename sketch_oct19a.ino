#include <SoftwareSerial.h>
SoftwareSerial myserial (0,1);
String
voice; int
led1 = 2,
led2 = 3,
led3 = 4,
led4 = 5;
void allon
() {
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
}
void alloff ()
{digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
}
void setup ()
{Serial.begin(9600);
myserial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
}
void loop () {
while (myserial.available())
{delay(10);
char c=myserial.read();
if (c == '#')
{
break;
}
voice += c;
}
if (voice.length() > 0) {
Serial.println(voice);
if(voice == "hello") {
allon();
}
else if(voice="ok") {
alloff();
}
else if (voice="LED on") {
digitalWrite (led1, HIGH);
}
else if(voice="light on") {
digitalWrite(led2, HIGH);}
else if(voice="AC on") {
digitalWrite(led3, HIGH);}
else if(voice="fan on") {
digitalWrite (led4, HIGH);}
else if(voice = "LED off") {
digitalWrite(led1, LOW);}
else if(voice="light off") {
digitalWrite(led2, LOW);}
else if (voice="AC off") {
digitalWrite (led3, LOW);}
else if(voice = "fan off") {
digitalWrite(led4, LOW);}
voice="";}} 
