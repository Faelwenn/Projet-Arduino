//120 bpm, noire = 500ms, croche=250ms, double=125ms
#include <Servo.h>
Servo Si3;
Servo Do3;
Servo Re3;
Servo Mi3;
Servo Fa3;
Servo Sol3;
Servo La2;
Servo Si2;
Servo Do2;
Servo Re2;
Servo Mi2;
//variables provisoires temps
int PauseSi3=60;
int PauseDo3=60;
int PauseRe3=60;
int PauseMi3=60;
int PauseFa3=60;
int PauseSol3=60;
int PauseLa2=60;
int PauseSi2=60;
int PauseDo2=60;
int PauseRe2=40;
int PauseMi2=60;

//variables angle
int AngleSi3=150;
int AngleDo3=150;
int AngleRe3=150;
int AngleMi3=150;
int AngleFa3=150;
int AngleSol3=150;
int AngleLa2=150;
int AngleSi2=150;
int AngleDo2=150;
int AngleRe2=150;
int AngleMi2=150;


void setup() {
  Si3.attach(12);
  Do3.attach(11);
  Re3.attach(10);
  Mi3.attach(9);
  Fa3.attach(8);
  Sol3.attach(7);
  La2.attach(6);
  Si2.attach(5);
  Do2.attach(4);
  Re2.attach(3);
  Mi2.attach(2);


  Si3.write(100);
  Do3.write(100);
  Re3.write(100);
  Mi3.write(100);
  Fa3.write(100);
  Sol3.write(100);
  La2.write(100);
  Si2.write(100);
  Do2.write(100);
  Re2.write(100);
  Mi2.write(100);
}

void loop() {
  Mi2.write(AngleMi2);
  delay(PauseMi2);
  Mi2.write(100);
  delay(500);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(750);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250); //fin de mesure 1

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(500);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Re2.write(AngleRe2);
  delay(PauseRe2);
  Re2.write(100);
  delay(750); //fin de mesure 2

  Re3.write(AngleRe3);
  delay(PauseRe3);
  Re3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(750);

  Re3.write(AngleRe3);
  delay(PauseRe3);
  Re3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250); //fin de la mesure 3

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Re3.write(AngleRe3);
  delay(PauseRe3);
  Re3.write(100);
  delay(250);

  Fa3.write(AngleFa3);
  delay(PauseFa3);
  Fa3.write(100);
  delay(500);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Re2.write(AngleRe2);
  delay(PauseRe2);
  Re2.write(100);
  delay(750);//fin mesure 4

  Re3.write(AngleRe3);
  delay(PauseRe3);
  Re3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(750);

  Re3.write(AngleRe3);
  delay(PauseRe3);
  Re3.write(100);
  delay(250);

  Re2.write(AngleRe2);
  delay(PauseRe2);
  Re2.write(100);
  delay(250);//fin mesure 5

  Do2.write(AngleDo2);
  delay(PauseDo2);
  Do2.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(250);

  Re3.write(AngleRe3);
  delay(PauseRe3);
  Re3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(500);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Mi3.write(AngleMi3);
  delay(PauseMi3);
  Mi3.write(100);
  delay(1000);//fin mesure 6

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(1000);

  Re2.write(AngleRe2);
  delay(PauseRe2);
  Re2.write(100);
  delay(250);//fin de mesure 7 

  Do2.write(AngleDo2);
  delay(PauseDo2);
  Do2.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(250);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(500);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Mi2.write(AngleMi2);
  delay(PauseMi2);
  Mi2.write(100);
  delay(750);//fin mesure 8

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(750);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);
  
  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);//fin mesure 9

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(500);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);  

  Re2.write(AngleRe2);
  delay(PauseRe2);
  Re2.write(100);
  delay(750);//fin mesure 10

  Re3.write(AngleRe3);
  delay(PauseRe3);
  Re3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(750);

  Re3.write(AngleRe3);
  delay(PauseRe3);
  Re3.write(100);
  delay(250);

  Re2.write(AngleRe2);
  delay(PauseRe2);
  Re2.write(100);
  delay(250);//fin mesure 11

  Do2.write(AngleDo2);
  delay(PauseDo2);
  Do2.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(250);

  Re3.write(AngleRe3);
  delay(PauseRe3);
  Re3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(500);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);  

  Re2.write(AngleRe2);
  delay(PauseRe2);
  Re2.write(100);
  delay(750);//fin mesure 12

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(750);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Mi2.write(AngleMi2);
  delay(PauseMi2);
  Mi2.write(100);
  delay(500);//fin mesure 13

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(500);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(500);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  Fa3.write(AngleFa3);
  delay(PauseFa3);
  Fa3.write(100);
  delay(250);

  Mi3.write(AngleMi3);
  delay(PauseMi3);
  Mi3.write(100);
  delay(500);//fin mesure 14

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Do3.write(AngleDo3);
  delay(PauseDo3);
  Do3.write(100);
  delay(250);

  Fa3.write(AngleFa3);
  delay(PauseFa3);
  Fa3.write(100);
  delay(250);

  Do3.write(AngleDo3);
  delay(PauseDo3);
  Do3.write(100);
  delay(250);

  Mi3.write(AngleMi3);
  delay(PauseMi3);
  Mi3.write(100);
  delay(250);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  Re3.write(AngleRe3);
  delay(PauseRe3);
  Re3.write(100);
  delay(250);//fin mesure 15

  Fa3.write(AngleFa3);
  delay(PauseFa3);
  Fa3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Mi3.write(AngleMi3);
  delay(PauseMi3);
  Mi3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(500); 

  Fa3.write(AngleFa3);
  delay(PauseFa3);
  Fa3.write(100);
  delay(250);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Mi2.write(AngleMi2);
  delay(PauseMi2);
  Mi2.write(100);
  delay(750);//fin mesure 16

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(750);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);//fin mesure 17

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(250);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);  

  Re2.write(AngleRe2);
  delay(PauseRe2);
  Re2.write(100);
  delay(750);//fin mesure 18

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(750);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);//fin mesure 19

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Fa3.write(AngleFa3);
  delay(PauseFa3);
  Fa3.write(100);
  delay(500);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);  

  Re2.write(AngleRe2);
  delay(PauseRe2);
  Re2.write(100);
  delay(750);//fin mesure 20  

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(750);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Re2.write(AngleRe2);
  delay(PauseRe2);
  Re2.write(100);
  delay(250);//fin mesure 21

  Do2.write(AngleDo2);
  delay(PauseDo2);
  Do2.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(250);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(500);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Mi3.write(AngleMi3);
  delay(PauseMi3);
  Mi3.write(100);
  delay(750);//fin mesure 22

  Do3.write(AngleDo3);
  delay(PauseDo3);
  Do3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(750);

  Do3.write(AngleDo3);
  delay(PauseDo3);
  Do3.write(100);
  delay(250);

  Re2.write(AngleRe2);
  delay(PauseRe2);
  Re2.write(100);
  delay(250);//fin mesure 

  Do2.write(AngleDo2);
  delay(PauseDo2);
  Do2.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(250);

  Re3.write(AngleRe3);
  delay(PauseRe3);
  Re3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(500);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Mi2.write(AngleMi2);
  delay(PauseMi2);
  Mi2.write(100);
  delay(750);//fin mesure 24

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(750);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);//fin mesure 25  

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(250);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);  

  Re2.write(AngleRe2);
  delay(PauseRe2);
  Re2.write(100);
  delay(750);//fin mesure 26

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(750);

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);//fin mesure 27

  Do2.write(AngleDo2);
  delay(PauseDo2);
  Do2.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(250);

  Re3.write(AngleRe3);
  delay(PauseRe3);
  Re3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(500);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);  

  Re2.write(AngleRe2);
  delay(PauseRe2);
  Re2.write(100);
  delay(750);//fin mesure 28

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(750);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Mi2.write(AngleMi2);
  delay(PauseMi2);
  Mi2.write(100);
  delay(500);//fin mesure 29

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(500);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(500);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  Fa3.write(AngleFa3);
  delay(PauseFa3);
  Fa3.write(100);
  delay(250);

  Mi3.write(AngleMi3);
  delay(PauseMi3);
  Mi3.write(100);
  delay(500);//fin mesure 30

  Si3.write(AngleSi3);
  delay(PauseSi3);
  Si3.write(100);
  delay(250);

  Do3.write(AngleDo3);
  delay(PauseDo3);
  Do3.write(100);
  delay(250);

  Fa3.write(AngleFa3);
  delay(PauseFa3);
  Fa3.write(100);
  delay(250);

  Do3.write(AngleDo3);
  delay(PauseDo3);
  Do3.write(100);
  delay(250);

  Mi3.write(AngleMi3);
  delay(PauseMi3);
  Mi3.write(100);
  delay(250);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  Re3.write(AngleRe3);
  delay(PauseRe3);
  Re3.write(100);
  delay(250);//fin mesure 31

  Fa3.write(AngleFa3);
  delay(PauseFa3);
  Fa3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Mi3.write(AngleMi3);
  delay(PauseMi3);
  Mi3.write(100);
  delay(250);

  Si2.write(AngleSi2);
  delay(PauseSi2);
  Si2.write(100);
  delay(500); 

  Fa3.write(AngleFa3);
  delay(PauseFa3);  
  Fa3.write(100);
  delay(250);

  Sol3.write(AngleSol3);
  delay(PauseSol3);
  Sol3.write(100);
  delay(250);

  La2.write(AngleLa2);
  delay(PauseLa2);
  La2.write(100);
  delay(250);

  Mi2.write(AngleMi2);
  delay(PauseMi2);
  Mi2.write(100);
  delay(750);//fin mesure 32
  
}
