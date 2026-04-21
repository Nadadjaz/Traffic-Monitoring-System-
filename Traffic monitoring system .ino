const int pin_ds=7;
const int pin_stcp=6;
const int pin_shcp=5;
int x1=0b0000110;
int x2=0b1011011;
int x3=0b1001111;
int x4=0b1100110;
int x5=0b1101101;
int x6=0b1111101;
int x7=0b0000111;
int x8=0b1111111;
const int lr1=11;
const int lo1=12;
const int lv1=13;
const int lv2=2;
const int lr2=3;
const int lo2=4;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin_ds, OUTPUT);
  pinMode(pin_stcp, OUTPUT);
  pinMode(pin_shcp, OUTPUT);
  pinMode(lv1, OUTPUT);
  pinMode(lr1, OUTPUT);
  pinMode(lo1, OUTPUT);
  pinMode(lv2,OUTPUT);
  pinMode(lr2,OUTPUT);
  pinMode(lo2,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(lv1,HIGH);
  digitalWrite(lr1,LOW);
  digitalWrite(lo1,LOW);
  
  digitalWrite(lv2,LOW);
  digitalWrite(lr2,HIGH);
  digitalWrite(lo2,LOW);

  segments();

   digitalWrite(lv1,LOW);
  digitalWrite(lr1,LOW);
  digitalWrite(lo1,HIGH);
  
  digitalWrite(lv2,LOW);
  digitalWrite(lr2,LOW);
  digitalWrite(lo2,HIGH);
   
   segments();

   digitalWrite(lv1,LOW);
  digitalWrite(lr1,HIGH);
  digitalWrite(lo1,LOW);
  
  digitalWrite(lv2,HIGH);
  digitalWrite(lr2,LOW);
  digitalWrite(lo2,LOW);
  segments();

  digitalWrite(lv1,LOW);
  digitalWrite(lr1,LOW);
  digitalWrite(lo1,HIGH);
  
  digitalWrite(lv2,LOW);
  digitalWrite(lr2,LOW);
  digitalWrite(lo2,HIGH);
  segments();

  
   
}
void segments()
{
   digitalWrite(pin_stcp,LOW);
  shiftOut(pin_ds,pin_shcp,MSBFIRST,x8);
  digitalWrite(pin_stcp,HIGH);
  delay(1000);
  digitalWrite(pin_stcp,LOW);
  shiftOut(pin_ds,pin_shcp,MSBFIRST,x7);
  digitalWrite(pin_stcp,HIGH);
  delay(1000);
  digitalWrite(pin_stcp,LOW);
  shiftOut(pin_ds,pin_shcp,MSBFIRST,x6);
  digitalWrite(pin_stcp,HIGH);
  delay(1000);
  digitalWrite(pin_stcp,LOW);
  shiftOut(pin_ds,pin_shcp,MSBFIRST,x5);
  digitalWrite(pin_stcp,HIGH);
  delay(1000);
  digitalWrite(pin_stcp,LOW);
  shiftOut(pin_ds,pin_shcp,MSBFIRST,x4);
  digitalWrite(pin_stcp,HIGH);
  delay(1000);
  digitalWrite(pin_stcp,LOW);
  shiftOut(pin_ds,pin_shcp,MSBFIRST,x3);
  digitalWrite(pin_stcp,HIGH);
  delay(1000);
  digitalWrite(pin_stcp,LOW);
  shiftOut(pin_ds,pin_shcp,MSBFIRST,x3);
  digitalWrite(pin_stcp,HIGH);
  delay(1000);
  digitalWrite(pin_stcp,LOW);
  shiftOut(pin_ds,pin_shcp,MSBFIRST,x1);
  digitalWrite(pin_stcp,HIGH);
  delay(1000);

}
