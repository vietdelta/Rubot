#include <Servo.h>
char data;
Servo R;          
Servo L;        
Servo F; 
Servo B; 
Servo RK; 
Servo LK; 
Servo FK; 
Servo BK; 
int a[20];
int i=0;
boolean check = true;
void setup() { 
  Serial.begin(9600);
  R.attach(2); 
  L.attach(3);
  F.attach(4); 
  B.attach(5); 
  RK.attach(6); 
  LK.attach(7); 
  FK.attach(8); 
  BK.attach(9);   
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  
  
} 

void loop() {    
  if(check)
  {
    for(i=0;i<20;i++)
    {
    a[i]=0;
    }
    check = false;
  }
  Serial.println("Start to transmit...");
  
  
  
  int fn = 1;
  i=0;
  char m = Serial.read();
  
  fn=1;
  while(fn!=0)
  {
    if (Serial.available()){
        data = Serial.read();
        switch(data)
    {
      case '0': fn = 0;
                 digitalWrite(13,HIGH);
                break;
      case '1': a[i]=1;
                i++;
                 
                Serial.println(a[i]);
                break;
      case '2': a[i]=2;
                i++;
                 
                Serial.println(a[i]);
                break;
      case '3': a[i]=3;
                i++;
                 
                Serial.println(a[i]);
                break;
      case '4': a[i]=4;
                i++;
                 
                Serial.println(a[i]);
                break;
      case '5': a[i]=5;
                i++;
                 
                Serial.println(a[i]);
                break;
      case '6': a[i]=6;
                i++;
                 
                Serial.println(a[i]);
                break;
      case '7': a[i]=7;
                i++;
                 
                Serial.println(a[i]);
                break;
      case '8': a[i]=8;
                i++;
                
                Serial.println(a[i]);
                break;
      case '9': a[i]=9;
                i++;
                 
                Serial.println(a[i]);
                break;     
      case 'a': a[i]=10;
                i++;
                 digitalWrite(12,HIGH);
                Serial.println(a[i]);
                break;      
      case 'b': a[i]=11;
                i++;
                 
                Serial.println(a[i]);
                break; 
      case 'c': a[i]=12;
                i++;
                 
                Serial.println(a[i]);
                break;
      case 'd': a[i]=13;
                i++;
                
                Serial.println(a[i]);
                break;
      case 'e': a[i]=14;
                i++;
                 
                Serial.println(a[i]);
                break;
      case 'f': a[i]=15;
                i++;
                 
                Serial.println(a[i]);
                break;
      case 'g': a[i]=16;
                i++;
                 
                Serial.println(a[i]);
                break;
      case 'h': a[i]=17;
                i++;
                
                Serial.println(a[i]);
                break;
      case 'i': a[i]=18;
                i++;
                 
                Serial.println(a[i]);
                break;          
      default: break;
  }
      }
      
      
  }
  i=0; 
  int c=0;
  for(i=0;i<20;i++)
  {
    if(a[i]>0) c++;
  }
  for(i=0;i<20;i++)
    Serial.println(a[i]);
  init1();
  i=0;
  delay(4000);
  for(i=0;i<=5;i++)
  {
    switch(a[i])
    {
      case 0: break;
      case 1: r();
              break;
      case 2: r2();
              break;
      case 3: r3();
              break;
      case 4: l();
              break;
      case 5: l2();
              break;
      case 6: l3();
              break;
      case 7: f();
              break;
      case 8: f2();
              break;
      case 9: f3();
              break;
      case 10: b();
              break;
      case 11: b2();
              break;
      case 12: b3();
              break;
      case 13: u();
              break;
      case 14: u2();
              break;
      case 15: u3();
              break;
      case 16: d();
              break;
      case 17: d2();
              break;
      case 18: d3();
              break;
      default: break;
    }
  }
  for(i=6;i<=10;i++)
  {
    switch(a[i])
    {
      case 0: break;
      case 1: r();
              break;
      case 2: r2();
              break;
      case 3: r3();
              break;
      case 4: l();
              break;
      case 5: l2();
              break;
      case 6: l3();
              break;
      case 7: f();
              break;
      case 8: f2();
              break;
      case 9: f3();
              break;
      case 10: b();
              break;
      case 11: b2();
              break;
      case 12: b3();
              break;
      case 13: u();
              break;
      case 14: u2();
              break;
      case 15: u3();
              break;
      case 16: d();
              break;
      case 17: d2();
              break;
      case 18: d3();
              break;
      default: break;
    }
  }
  for(i=11;i<=16;i++)
  {
    switch(a[i])
    {
      case 0: break;
      case 1: r();
              break;
      case 2: r2();
              break;
      case 3: r3();
              break;
      case 4: l();
              break;
      case 5: l2();
              break;
      case 6: l3();
              break;
      case 7: f();
              break;
      case 8: f2();
              break;
      case 9: f3();
              break;
      case 10: b();
              break;
      case 11: b2();
              break;
      case 12: b3();
              break;
      case 13: u();
              break;
      case 14: u2();
              break;
      case 15: u3();
              break;
      case 16: d();
              break;
      case 17: d2();
              break;
      case 18: d3();
              break;
      default: break;
    }
  }
  for(i=17;i<=19;i++)
  {
    switch(a[i])
    {
      case 0: break;
      case 1: r();
              break;
      case 2: r2();
              break;
      case 3: r3();
              break;
      case 4: l();
              break;
      case 5: l2();
              break;
      case 6: l3();
              break;
      case 7: f();
              break;
      case 8: f2();
              break;
      case 9: f3();
              break;
      case 10: b();
              break;
      case 11: b2();
              break;
      case 12: b3();
              break;
      case 13: u();
              break;
      case 14: u2();
              break;
      case 15: u3();
              break;
      case 16: d();
              break;
      case 17: d2();
              break;
      case 18: d3();
              break;
      default: break;
    }
  }
  finish();
}
void finish(){
  RK.write(85);
  LK.write(85);
  FK.write(85);
  BK.write(95);
  delay(4000);
}
// Motion routines for forward, reverse, turns, and stop
void init1(){
  R.write(3);
  F.write(0);
  L.write(0);
  B.write(0);
  delay(4000);
  RK.write(6);
  LK.write(0);
  BK.write(8);
  FK.write(0);
   delay(700);
}
// -------------------------------------- R ------------------------------------------
void r() {
    R.write(85);
     delay(700);
    
     RK.write(85);
    BK.write(8);
    FK.write(0);
     delay(700);

    BK.write(8);
    FK.write(0);
     R.write(3);
     delay(700);
    
     RK.write(6);
     delay(700);
}
void r2()
{
   r();
   r();
}
void r3()
{
    r2();
    r();
}
// -------------------------------------- L ------------------------------------------
void l() {
    L.write(95);
     delay(700);
    
     LK.write(85);
     
     delay(700);
    
     L.write(0);
     delay(700);
    
     LK.write(0);
     BK.write(8);
    FK.write(0);
     delay(700);
}
void l2()
{
   l();
   l();
}
void l3()
{
   l2();
   l();
}
// -------------------------------------- F ------------------------------------------

void f() {
    F.write(70);  
     delay(700);
    
     FK.write(85);
     
     delay(700);
    
     F.write(0);
     delay(700);
    
     FK.write(0);
     RK.write(6);
     BK.write(8);
    LK.write(0);
     delay(700);
}
void f2()
{
   f();
   f();
}
void f3()
{
   f2();
   f();
}
// -------------------------------------- B ------------------------------------------
void b() {
    B.write(80); 
     delay(700);
    
     BK.write(95);
       
     delay(700);
    
     B.write(0);
     delay(700);
    
     BK.write(8);
     RK.write(6);
    LK.write(0);
     delay(700);
}
void b2()
{
   b();
   b();
}
void b3()
{
   b2();
   b();
}
// ----------------------------------- CVUB -----------------------------
void CVUB()
{
  LK.write(85);
    BK.write(8);
    FK.write(0);
     delay(700);
    
    L.write(80);
     delay(700);
    
    LK.write(0);
     delay(700);
    
     BK.write(95);
     FK.write(85);
       RK.write(6);
    LK.write(0);
     delay(100);

      L.write(0);
      R.write(85);
       delay(700);

      BK.write(8);
     FK.write(0);
      delay(700);

    RK.write(85);
      BK.write(8);
    FK.write(0);
      delay(700);
 
     R.write(3);
      delay(700);

     RK.write(6);
      delay(700);
    
}
//--------------------------------------- CVDB --------------------------------
void CVDB()
{
  RK.write(85);
    BK.write(8);
    FK.write(0);
     delay(700);
    
    R.write(85);
     delay(700);
    
    RK.write(6);
     delay(700);
    
     BK.write(95);
     FK.write(85);
       RK.write(6);
    LK.write(0);
     delay(100);

      R.write(3);
      L.write(80);
       delay(700);

      BK.write(8);
     FK.write(0);
      delay(700);

    LK.write(85);
      BK.write(8);
    FK.write(0);
      delay(700);
 
     L.write(0);
      delay(700);

     LK.write(0);
      delay(700);
    
}
// --------------------------------- U -------------------------------
void u(){
  CVDB();
  f();
  CVUB();
}

void u2(){
  CVDB();
  f2();
  CVUB();
}

void u3(){
  CVDB();
  f3();
  CVUB();
}
// ------------------------------- D ----------------------------------
void d(){
  CVDB();
  b();
  CVUB();
}
void d2(){
  CVDB();
  b2();
  CVUB();
}
void d3(){
  CVDB();
  b3();
  CVUB();
}




