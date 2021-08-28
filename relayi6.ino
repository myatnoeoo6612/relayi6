int ch1 = 0;
int ch2 = 0;
int ch3 = 0;
int ch4 = 0;
int ch5 = 0;
int ch6 = 0;

#define relay1 2
#define relay2 4
#define relay3 7
#define relay4 8
#define relay5 12
#define relay6 13

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600); 
 pinMode(3,INPUT);
 pinMode(5,INPUT);
 pinMode(6,INPUT);
 pinMode(9,INPUT);
 pinMode(10,INPUT);
 pinMode(11,INPUT);
 
 pinMode(relay1,OUTPUT);
 pinMode(relay2,OUTPUT);
 pinMode(relay3,OUTPUT);
 pinMode(relay4,OUTPUT);
 pinMode(relay5,OUTPUT);
 pinMode(relay6,OUTPUT);

 digitalWrite(relay1,LOW);
 digitalWrite(relay2,LOW);
 digitalWrite(relay3,LOW);
 digitalWrite(relay4,LOW);
 digitalWrite(relay5,LOW);
 digitalWrite(relay6,LOW);
 
}

void loop() {
  // put your main code here, to run repeatedly:
   
  Serial.print("ch1 = "); Serial.println(analogRead(3));
  delay(200);
  Serial.print("ch2 = "); Serial.println(analogRead(5));
  delay(200);
  Serial.print("ch3 = "); Serial.println(analogRead(6));
  delay(200);
  Serial.print("ch4 = "); Serial.println(analogRead(9));
  delay(200);
  Serial.print("ch5 = "); Serial.println(analogRead(10));
  delay(200);
  Serial.print("ch6 = "); Serial.println(analogRead(11));
  delay(200);
  
  ch1 = map(analogRead(3), 0, 1023, -255, 255);
  ch2 = map(analogRead(5), 0, 1023, -255, 255);
  ch3 = map(analogRead(6), 0, 1023, -255, 255); 
  ch4 = map(analogRead(9), 0, 1023, -255, 255);
  ch5 = map(analogRead(10), 0, 1023, -255, 255);
  ch6 = map(analogRead(11), 0, 1023, -255, 255);

 /* Serial.print("ch1 = "); Serial.println(ch1);
  delay(200);
  Serial.print("ch2 = "); Serial.println(ch2);
  delay(200);
  Serial.print("ch3 = "); Serial.println(ch3);
  delay(200);
  Serial.print("ch4 = "); Serial.println(ch4);
  delay(200);
  Serial.print("ch5 = "); Serial.println(ch5);
  delay(200);
  Serial.print("ch6 = "); Serial.println(ch6);
  delay(200); */
  
  if ( ch1>10 || ch1<-10 )
  {
    digitalWrite(relay1,HIGH);  
  }

  if ( ch1<10 || ch1>-10)
  {
    digitalWrite(relay1,LOW);
  }

  if ( ch2>10 || ch2<-10 )
  {
    digitalWrite(relay2,HIGH);
  }

  if ( ch2<10 || ch2>-10 )
  {
    digitalWrite(relay2,LOW);
  }

  if ( ch3>10 || ch3<-10 )
  {
    digitalWrite(relay3,HIGH);
  }

  if ( ch3<10 || ch3>-10 )
  {
    digitalWrite(relay3,LOW);
  }

  if ( ch4>10 || ch4<-10 )
  {
    digitalWrite(relay4,HIGH);
  }

  if ( ch4<10 || ch4>-10 )
  {
    digitalWrite(relay4,LOW);
  }

  if ( ch5>10 || ch5<-10 )
  {
    digitalWrite(relay5,HIGH);
  }

  if ( ch5<10 || ch5>-10 )
  {
    digitalWrite(relay5,LOW);
  }

  if ( ch6>10 || ch6<-10 )
  {
    digitalWrite(relay6,HIGH);
  }

  if ( ch6<10 || ch6>-10 )
  {
    digitalWrite(relay6,LOW);
  }
}
