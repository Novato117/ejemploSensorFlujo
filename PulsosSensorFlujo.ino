volatile long NumPulsos;
int PinSensor=2;
void ContarPulsos(){
  NumPulsos++;
}
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(PinSensor,INPUT);
attachInterrupt(0,ContarPulsos,RISING);
interrupts();
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("Numero de pulsos = ");
Serial.print(NumPulsos);
delay(100);
}
