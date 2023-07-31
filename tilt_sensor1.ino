// C++ code
//

int sw = A0 ;
int motor = 11 ;

int speed =0 ;
int swValue = 0;

void setup()
{
  pinMode(sw,INPUT);
  pinMode(motor,OUTPUT);

  Serial.begin(96000);
}

void loop()
{

  
  swValue= analogRead(sw);
  
   speed =map(swValue,0,1023,0,255);
  
    if(swValue <0 || swValue >255)
  {
    analogWrite(motor,LOW);
      
  }
  
  else
  {
    
      analogWrite(motor,-speed);
  }
  
}