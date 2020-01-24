int onePin = 1;
int twoPin = 2;
int threePin = 3;
int fourPin = 4;
int fivePin = 5;
int sixPin = 6;           //six leds connected with 220 ohm resistors
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
randomSeed(analogRead(0));
pinMode(onePin,OUTPUT);
pinMode(twoPin,OUTPUT);
pinMode(threePin,OUTPUT);
pinMode(fourPin,OUTPUT);
pinMode(fivePin,OUTPUT);
pinMode(sixPin,OUTPUT);
}

void loop() {
int number = random(1,7);  //find random number and do void 1,6 accordingly
if (number==1)
 one();
else if(number==2)
 two();
else if (number==3)
 three();
else if (number==4)
 four();
else if (number==5)
 five();
else if (number==6)
 six();
}
void one()
  {
  Serial.println("one");       //Serial monitor also runs for viewing
  digitalWrite(onePin,HIGH);
  delay(50000);
  digitalWrite(onePin,LOW);
  delay(1000);
  }
void two()
  {
  Serial.println("two");
  digitalWrite(onePin,HIGH);
  digitalWrite(twoPin,HIGH);
  delay(50000);
  digitalWrite(onePin,LOW);
  digitalWrite(twoPin,LOW);
  delay(1000);
  }
void three()
  {
  Serial.println("three");
  digitalWrite(onePin,HIGH);
  digitalWrite(twoPin,HIGH);
  digitalWrite(threePin,HIGH);
  delay(50000);
  digitalWrite(onePin,LOW);
  digitalWrite(twoPin,LOW);
  digitalWrite(threePin,LOW);
  delay(1000);
  }
void four()
  {
  Serial.println("four");
  digitalWrite(onePin,HIGH);
  digitalWrite(twoPin,HIGH);
  digitalWrite(threePin,HIGH);
  digitalWrite(fourPin,HIGH);
  delay(50000);
  digitalWrite(onePin,LOW);
  digitalWrite(twoPin,LOW);
  digitalWrite(threePin,LOW);
  digitalWrite(fourPin,LOW);
  delay(1000);
  }
void five()
  {
  Serial.println("five");
  digitalWrite(onePin,HIGH);
  digitalWrite(twoPin,HIGH);
  digitalWrite(threePin,HIGH);
  digitalWrite(fourPin,HIGH);
  digitalWrite(fivePin,HIGH);
  delay(50000);
  digitalWrite(onePin,LOW);
  digitalWrite(twoPin,LOW);
  digitalWrite(threePin,LOW);
  digitalWrite(fourPin,LOW);
  digitalWrite(fivePin,LOW);
  delay(1000);
  }
void six()
  {
  Serial.println("six");
  digitalWrite(onePin,HIGH);
  digitalWrite(twoPin,HIGH);
  digitalWrite(threePin,HIGH);
  digitalWrite(fourPin,HIGH);
  digitalWrite(fivePin,HIGH);
  digitalWrite(sixPin,HIGH);
  delay(50000);
  digitalWrite(onePin,LOW);
  digitalWrite(twoPin,LOW);
  digitalWrite(threePin,LOW);
  digitalWrite(fourPin,LOW);
  digitalWrite(fivePin,LOW);
  digitalWrite(sixPin,LOW);
  delay(1000);
  }
