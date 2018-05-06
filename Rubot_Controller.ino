#include <Servo.h>

Servo R;          
Servo L;        
Servo F; 
Servo B; 
Servo RK; 
Servo LK; 
Servo FK; 
Servo BK; 

void setup() { 
  R.attach(2); 
  L.attach(3);
  F.attach(4); 
  B.attach(5); 
  RK.attach(6); 
  LK.attach(7); 
  FK.attach(8); 
  BK.attach(9);   
} 

void loop() {            // Loop through motion tests

  init1();
  delay(2000); 

   
  /*RK.write(85);
  LK.write(85);
  FK.write(85); 
  BK.write(85);
  
  //R.write(80);
  //L.write(80);
  F.write(90);  
  B.write(90); 
  */
  delay(2000);
  r();
  b();
  r3();
  l3();
  f3();
  b();
  r();
  b3();
  r3();
  finish();
}
void finish(){
  RK.write(85);
  LK.write(85);
  FK.write(85);
  BK.write(85);
  delay(4000);
}
// Motion routines for forward, reverse, turns, and stop
void init1(){
  R.write(0);
  F.write(0);
  L.write(0);
  B.write(10);
  delay(4000);
  RK.write(0);
  LK.write(0);
  BK.write(0);
  FK.write(0);
  delay(1000);
}
// -------------------------------------- R ------------------------------------------
void r() {
    R.write(85);
    delay(500);
    
     RK.write(85);
    BK.write(0);
    FK.write(0);
    delay(500);

    BK.write(0);
    FK.write(0);
     R.write(0);
    delay(500);
    
     RK.write(0);
    delay(500);
}
void r2()
{
   R.write(180);
    delay(500);

     BK.write(0);
    FK.write(0);
     RK.write(85);
    delay(500);

     R.write(0);
    delay(500);

     RK.write(0);
    delay(500);
}
void r3()
{
   BK.write(0);
    FK.write(0);
   RK.write(85);
    delay(500);
    
     R.write(85);
    delay(500);
    
     RK.write(0);
    delay(500);

     R.write(0);
    delay(500);
}
// -------------------------------------- L ------------------------------------------
void l() {
    L.write(80);
    delay(500);
    
     LK.write(85);
     BK.write(0);
    FK.write(0);
    delay(500);
    
     L.write(0);
    delay(500);
    
     LK.write(0);
    delay(500);
}
void l2()
{
   L.write(180);
    delay(500);

     LK.write(85);
     BK.write(0);
    FK.write(0);
    delay(500);

     L.write(0);
    delay(500);

     LK.write(0);
    delay(500);
}
void l3()
{
   LK.write(85);
   BK.write(0);
    FK.write(0);
    delay(500);
    
     L.write(80);
    delay(500);
    
     LK.write(0);
    delay(500);

     L.write(0);
    delay(500);
}
// -------------------------------------- F ------------------------------------------

void f() {
    F.write(90);  
    delay(500);
    
     FK.write(85);
     RK.write(0);
    LK.write(0);
    delay(500);
    
     F.write(0);
    delay(500);
    
     FK.write(0);
    delay(500);
}
void f2()
{
   F.write(170);
    delay(500);

     FK.write(85);
       RK.write(0);
    LK.write(0);
    delay(500);

     F.write(0);
    delay(500);

     FK.write(0);
    delay(500);
}
void f3()
{
   FK.write(85);
     RK.write(0);
    LK.write(0);
    delay(500);
    
     F.write(85);  
    delay(500);
    
     FK.write(0);
    delay(500);

     F.write(0);
    delay(500);
}
// -------------------------------------- B ------------------------------------------
void b() {
    B.write(90); 
    delay(500);
    
     BK.write(85);
       RK.write(0);
    LK.write(0);
    delay(500);
    
     B.write(10);
    delay(500);
    
     BK.write(0);
    delay(500);
}
void b2()
{
   B.write(180);
    delay(500);

     BK.write(85);
       RK.write(0);
    LK.write(0);
    delay(500);

     B.write(10);
    delay(500);

     BK.write(0);
    delay(500);
}
void b3()
{
   BK.write(85);
     RK.write(0);
    LK.write(0);
    delay(500);
    
     B.write(85); 
    delay(500);
    
     BK.write(0);
    delay(500);

     B.write(10);
    delay(500);
}
// ----------------------------------- CVUB -----------------------------
void CVUB()
{
  LK.write(85);
    BK.write(0);
    FK.write(0);
    delay(500);
    
    L.write(80);
    delay(500);
    
    LK.write(0);
    delay(500);
    
     BK.write(85);
     FK.write(85);
       RK.write(0);
    LK.write(0);
     delay(100);

      L.write(0);
      R.write(85);
      delay(500);

      BK.write(0);
     FK.write(0);
     delay(500);

    RK.write(85);
      BK.write(0);
    FK.write(0);
     delay(500);
 
     R.write(0);
     delay(500);

     RK.write(0);
     delay(500);
    
}
//--------------------------------------- CVDB --------------------------------
void CVDB()
{
  RK.write(85);
    BK.write(0);
    FK.write(0);
    delay(500);
    
    R.write(85);
    delay(500);
    
    RK.write(0);
    delay(500);
    
     BK.write(85);
     FK.write(85);
       RK.write(0);
    LK.write(0);
     delay(100);

      R.write(0);
      L.write(80);
      delay(500);

      BK.write(0);
     FK.write(0);
     delay(500);

    LK.write(85);
      BK.write(0);
    FK.write(0);
     delay(500);
 
     L.write(0);
     delay(500);

     LK.write(0);
     delay(500);
    
}
// --------------------------------- U -------------------------------
void u(){
  CVUB();
  b();
  CVDB();
}

void u2(){
  CVUB();
  b2();
  CVDB();
}

void u3(){
  CVUB();
  b3();
  CVDB();
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




