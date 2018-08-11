//Testing simple serial read of pins

// input test:
byte pinTable[] = {2,14,7,8,6,20,21,5};

void setup() {
  Serial.begin(0);
  for (int i=0; i<8; i++) { 
    pinMode(pinTable[i],INPUT_PULLUP); 
  } 
}

void loop() {
  byte eight,prev_eight;
  do {
  eight = GPIOD_PDIR & 0xFF;

  if (eight != prev_eight) {
  prev_eight = eight;
  Serial.println(eight,HEX);
  }
} 

while (1==1);

}
