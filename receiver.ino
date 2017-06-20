const char heso =6;
String rx_str;
void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT_PULLUP);
Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  byte i,data=0x00;
while(1)
{ if(digitalRead(7)==0)
    {  delay(7*heso);
      if(digitalRead(7)==1)
      { //while(digitalRead(7)==1);
        delay(3*heso);
        for(i=0;i<8;i++)
     {delay(7*heso);
      if(digitalRead(7)==1)
   { data+=1;
    if(i!=7)
    data<<=1; 
    //while(digitalRead(7)==1);
    delay(8*heso); }
    else 
    {if(i!=7)
    data<<=1;
    /*if(i!=7) {
    while(digitalRead(7)==0); 
    while(digitalRead(7)==1);}*/
    delay(8*heso); }
  }
        }
      //  else 
       // Serial.print("failed");
      if((data>=0x20)&&(data<=0x7F))
       Serial.write(data);
     // Serial.print("\n");
      break;
      }

  }


}
