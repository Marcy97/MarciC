int ledG=11;
int ledY=12;
int ledR=13;
void setup() {
  // put your setup code here, to run once:
pinMode(ledG,OUTPUT);
pinMode(ledY,OUTPUT);
pinMode(ledR,OUTPUT);
giornaliera();
notturna();
loop();
}

void giornaliera()
{
  int i;
  for(i=0;i<3;i++)
    {  
      digitalWrite(ledG,HIGH);
      delay(1000);
      digitalWrite(ledY,HIGH);
      delay(1000);
      digitalWrite(ledG,LOW);
      digitalWrite(ledY,LOW);
      digitalWrite(ledR,HIGH);
      delay(1000);
      digitalWrite(ledR,LOW);
    } 
  
}

void notturna()
{
  int i;
  for(i=0;i<9;i++)
    {  
      digitalWrite(ledY,HIGH);
      delay(1000);
      digitalWrite(ledY,LOW);
      delay(1000);
    } 
  
}


void loop() {
  // put your main code here, to run repeatedly:
giornaliera();
}
