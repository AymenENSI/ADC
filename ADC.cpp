
const float ADC_VREF_V = 5.0; 
const int ADC_RESOLUTION = 4095;
const int analogPin = 32;  
float previousValue = 0 ; 


void setup(){

  Serial.begin(115200);
  delay(1000);
  pinMode(analogPin , INPUT);

  
}

void loop(){
  int analogValue = analogRead(analogPin);
  float tensionV ;  


  Serial.println(analogValue);
  Serial.println(String(analogValue , BIN));

  tensionV = analogValue * (ADC_VREF_V / ADC_RESOLUTION) ; 
  Serial.println("La tension en volt : " ) ;
  Serial.println(tensionV);

  if(previousValue != analogValue ){
    previousValue = analogValue ; 
  }

  delay(250);
  
}