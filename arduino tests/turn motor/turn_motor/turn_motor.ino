int button = 2; //assigning pin number to button
int motor = 13; //assigning pin number to motor
int sob = 0;
//int x = 1; //uncomment these when u want to use
//int v = 0;
void setup() {
  pinMode (13, OUTPUT);
  pinMode (2,INPUT);
  digitalWrite(2, HIGH);
}

void loop() {
  sob = digitalRead(button);
  if (sob == LOW){
    digitalWrite(motor,HIGH);
    delay (1500);
  }
  else{
    digitalWrite(motor,LOW);
  }
}

 /*
ok so i decided to do one with analogWrite but just in case it breaks anything i decided to put it here and u can test it at ur own risk (v1)
 void loop() {
   sob = digitalRead(button);
   do
   {
     analogWrite(motor, 51);
     delay(1000);
     analogWrite(motor, 102);
     delay(1000);
     analogWrite(motor, 153);
     delay(1000);
     analogWrite(motor, 204);
     delay(1000);
     analogWrite(motor, 255);
   }  while (sob == LOW);
   else {
     analogWrite(motor, 0);
   }
 }
  */

  /*
   //ok different version not tested also because i no arduino but it might or might not work idk (v2)
   void loop() {
   sob = digitalRead(button);
   do //what this loop should be doing is everytime x is less than 5, the thing will add 1 to x and x multiplied by 51 is equals to the analogwrite value so v is stands for value
   {
   x * 51 = v; //so now first loop x = 1, 1 * 51 = 51. v is now 51 too.
   analogWrite(motor, v); //v is now 51 so when analogWrite outputs a voltage, its 1volt as (51 = 1v, 255 = 5v idk why but ok)
   delay(1000); //delay so you might be able to see it slowly speed up
   x = x + 1; //now once the motor is moving, we add 1 to x so now x = 2 on second loop
   }  while(sob == LOW or x < 5) //so here comes the fun part, while the button state is turned on the loop runs untill x is 5!
   else { //if the button is not pressed, then we just turn off motor, and reset x to 1
    analogWrite(motor, 0);
    x = 1;
    }
   }
   */
