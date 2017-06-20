byte kytu;
const char factor = 6 ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7,INPUT_PULLUP);
  pinMode(8, OUTPUT);
}
void transmit(byte kytu)
{ int i;
  digitalWrite(8,HIGH);
delay(5*factor);
digitalWrite(8,LOW);
delay(5*factor);

  Serial.write(kytu);
for(i=0;i<8;i++)
{ if(kytu&0x80)
    { digitalWrite(8,HIGH);
    delay(5*factor);
    digitalWrite(8,LOW);
    delay(10*factor);  }
    else 
    {digitalWrite(8,HIGH);
    delay(10*factor);
    digitalWrite(8,LOW);
      delay(5*factor);
    }
    kytu<<=1;
  }
    delay(200);
  }
void loop() {
  // put your main code here, to run repeatedly:
byte i,jk='N';


//delay(5000);

  //Serial.print("\n");
 if(digitalRead(7)==0) {
  delay(5);
  if(digitalRead(7)==0) {  
    while(Serial.available()!=0) {
      kytu=Serial.read(); 
    transmit(kytu);
}
delay(2000);
while(1)
{ transmit(' ');  
transmit('-');  
transmit('-');  
transmit('-');  
  transmit('h');
    transmit('c');
    transmit('m');
    transmit('u');
    transmit('t');  
    
  }
 }
}
}
 


