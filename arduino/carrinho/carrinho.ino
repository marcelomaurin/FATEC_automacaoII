
#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <DabbleESP32.h>

//PINOUT
// TB6612FNG H-Bridge Connections (both PWM inputs driven by GPIO 12)
#define MTR_PWM     12
#define LEFT_M0     15
#define LEFT_M1     14
#define RIGHT_M0    13
#define RIGHT_M1    2


//Setting Motor PWM properties
const int freq = 2000;
const int motorPWMChannnel = 8;
const int lresolution = 8;

volatile unsigned int  motor_speed   = 200;
volatile unsigned long previous_time = 0;
volatile unsigned long move_interval = 250;

//chamadas de funçoes
void robot_stop();
void robot_fwd();
void robot_back();
void robot_right();
void robot_left();
void update_speed();
unsigned int get_speed(unsigned int sp);


void Start_PonteH()
{
    // Pins for Motor Controller
    pinMode(LEFT_M0,OUTPUT);
    pinMode(LEFT_M1,OUTPUT);
    pinMode(RIGHT_M0,OUTPUT);
    pinMode(RIGHT_M1,OUTPUT);
    robot_stop();
    
     // Motor uses PWM Channel 8
    ledcAttachPin(MTR_PWM, 8);
    ledcSetup(8, 2000, 8);      
    ledcWrite(8, 130);
}

void Start_Serial()
{
   
  Serial.begin(115200);      // make sure your Serial Monitor is also set at this baud rate.
}

void Start_Dabble()
{  
  Dabble.begin("carrinho");       //set bluetooth name of your device
}

void setup() 
{
 Start_Serial();
 Start_Dabble();
 Start_PonteH();
}

void update_speed()
{  
    ledcWrite(motorPWMChannnel, get_speed(motor_speed));
    
}

unsigned int get_speed(unsigned int sp)
{
  return map(sp, 0, 100, 0, 255);
}
 


void robot_stop()
{
  digitalWrite(LEFT_M0,LOW);
  digitalWrite(LEFT_M1,LOW);
  digitalWrite(RIGHT_M0,LOW);
  digitalWrite(RIGHT_M1,LOW);
}
 
void robot_fwd()
{
  digitalWrite(LEFT_M0,HIGH);
  digitalWrite(LEFT_M1,LOW);
  digitalWrite(RIGHT_M0,HIGH);
  digitalWrite(RIGHT_M1,LOW);
  move_interval=250;
  previous_time = millis();  
}
 
void robot_back()
{
  digitalWrite(LEFT_M0,LOW);
  digitalWrite(LEFT_M1,HIGH);
  digitalWrite(RIGHT_M0,LOW);
  digitalWrite(RIGHT_M1,HIGH);
  move_interval=250;
  previous_time = millis();  
}
 
void robot_right()
{
  digitalWrite(LEFT_M0,LOW);
  digitalWrite(LEFT_M1,HIGH);
  digitalWrite(RIGHT_M0,HIGH);
  digitalWrite(RIGHT_M1,LOW);
  move_interval=100;
  previous_time = millis();
}
 
void robot_left()
{
  digitalWrite(LEFT_M0,HIGH);
  digitalWrite(LEFT_M1,LOW);
  digitalWrite(RIGHT_M0,LOW);
  digitalWrite(RIGHT_M1,HIGH);
  move_interval=100;
  previous_time = millis();
}

void Le_Dable()
{
  Dabble.processInput();             //this function is used to refresh data obtained from smartphone.Hence calling this function is mandatory in order to get data properly from your mobile.
  Serial.print("KeyPressed: ");
  if (GamePad.isUpPressed())
  {
    Serial.print("Up");
    robot_fwd();
  }

  if (GamePad.isDownPressed())
  {
    Serial.print("Down");
    robot_back();
  }

  if (GamePad.isLeftPressed())
  {
    Serial.print("Left");
    robot_left();
  }

  if (GamePad.isRightPressed())
  {
    Serial.print("Right");
    robot_right();
  }

  if (GamePad.isSquarePressed())
  {
    Serial.print("Square");
    robot_stop();
  }

  if (GamePad.isCirclePressed())
  {
    Serial.print("Circle");
  }

  if (GamePad.isCrossPressed())
  {
    Serial.print("Cross");
  }

  if (GamePad.isTrianglePressed())
  {
    Serial.print("Triangle");
  }

  if (GamePad.isStartPressed())
  {
    Serial.print("Start");
    robot_stop();
  }

  if (GamePad.isSelectPressed())
  {
    Serial.print("Select");
  }
}

void Leituras()
{
  Le_Dable();
}

void Analisa()
{
  int a = GamePad.getAngle();
  Serial.print("Angle: ");
  Serial.print(a);
  Serial.print('\t');
  int b = GamePad.getRadius();
  Serial.print("Radius: ");
  Serial.print(b);
  Serial.print('\t');
  float c = GamePad.getXaxisData();
  Serial.print("x_axis: ");
  Serial.print(c);
  Serial.print('\t');
  float d = GamePad.getYaxisData();
  Serial.print("y_axis: ");
  Serial.println(d);
  Serial.println();
}

void loop() {
  Serial.print('\t');
  Leituras();
  Analisa();
}
