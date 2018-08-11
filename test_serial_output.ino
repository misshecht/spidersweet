// Test serial output

byte pinTable[] = {2,14,7,8,6,20,21,5};

void setup() {
  Serial.begin(0);
  for (int i=0; i<8; i++) { 
    pinMode(pinTable[i],OUTPUT); 
  } 
}

void loop() {
  do {
    for (int i=0; i<=7; i++)
    {
      byte b = 1<<i;
      GPIOD_PDOR = b;
      Serial.println(pinTable[i]);
      delay(1000);
    }
  } 
  while (1==1);
}
