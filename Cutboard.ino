int EncoderPin = 25;
volatile int Encode = 0, dir = 0;



void setup(){
  for(int i=0;i==26;i++){
  pinMode(i, INPUT);
  
attachInterrupt(EncoderPin, interrupt, CHANGE);
}
  
}

void loop(){
  
}

void interrupt(){
  //ISR

  
}
