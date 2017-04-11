
 int button = 2; // btw these numbers, (2, 13 etc) are basically the pin.
 int led = 13;
 int sob = 0; //state of button. the number 0 isnt a pin. it's basically just stating that it's 0
 
 void setup(){
   pinMode(13, OUTPUT);
   pinMode(2, INPUT);
   digitalWrite(button, HIGH);
 }
 
 void loop() {
   sob = digitalRead(button);
   if (sob == LOW) {
     digitalWrite(led, HIGH);
   }
   else {
     digitalWrite(led, LOW);
   }
 }
