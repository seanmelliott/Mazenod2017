// RoughBot Basic Program
// This program sets up the connection between the Arduino and
// the motor controller.
// Use the loop() function to control the behaviour of the 
// RoughBot.

// Connection of motor controller pins to Arduino digital pins
// motor one
int enA = 10;
int in1 = 9;
int in2 = 8;

// motor two
int in3 = 7;
int in4 = 6;
int enB = 5;


void setup() 
{
  // set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}


void loop() 
{
  // This loop controls the movment of the robot.
  // Commands to use:
  // forward();
  // turnleft();
  // turnright();
  // backward();
  // halt();
  // delay(time);
  
  forward();
  delay(2000);
  halt();
  delay(500);
  turnleft();
  delay(500);
  halt();
  delay(500);

  
}

// The following are the functions to control the motors. 
// Each motor has two digital pins (set to HIGH [1] or LOW [0]) and an
// analogue pin (a number between 0 to 255).
// The two digital pins set the direction the motor spins, while
// the analogue pin sets the speed.
// For instance: 
// Motor A, in1 = 0, in2 = 0: the motor doesn't spin.
// Motor A, in1 = 1, in2 = 0: the motor spins.
// Motor A, in1 = 0, in2 = 1: the motor spins opposite direction.
// Motor A, in1 = 1, in2 = 1: the motor doesn't spin.

void halt()
{
  // turn off all motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}


void forward()
{
  // turn on motor A
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  // set speed to 200 out of possible range 0~255
  analogWrite(enA, 200);
  
  // turn on motor B
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  // set speed to 200 out of possible range 0~255
  analogWrite(enB, 200);
}

void turnleft()
{
  // turn on motor A
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  // set speed to 200 out of possible range 0~255
  analogWrite(enA, 100);
  
  // turn on motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enB, 100);

}

void turnright()
{
  // turn on motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enA, 100);
  
  // turn on motor B
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  // set speed to 200 out of possible range 0~255
  analogWrite(enB, 100);

}

void backwards()
{
  // turn on motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enA, 200);
  
  // turn on motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enB, 200);
}

