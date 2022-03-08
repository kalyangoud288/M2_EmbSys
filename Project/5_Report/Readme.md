__Abstract__

1.Most of the people in residential areas facethe problem of running out of water and overflow ofwater in water tanks due to excess supply of water. It
becomes difficult for users to judge the level of water in water tanks. 

2.When the pump is turned ON, users will notrealize that the water tank is filled, which may result in overflow. 

3.Water level indicator and controller system is used to sort out the issues associated with water tank. It is also possible to check the level of the water using
sensor so that whenever the water goes below, pump gets turned ON automatically.

4.Also when there is overflow of water in water tank it uses sensor to detect the water level so that if the water level goes above, the pump gets turned off automatically. 

5.This system prevents wastage of water.

__Introduction__

1.Water is a universal solvent which plays an important role in everyday life. The total amount of water available on earth has been estimated at 1.4 billion cubic kilometers,enough to cover the planet with a layer of about 3km.

2.About 95% of the Earths water is unfit for human consumption. About 4% is locked in the polar ice caps, and the rest 1% constitutes all fresh water found in rivers,
streams and lakes which is suitable for our consumption.

3.A study estimated that a person in India consumes an average of 135 liters per day. This consumption would rise by 40% by the year 2025. 

4.This signifies the need to preserve our fresh water resources. 

5.Many houses make use of supplementary water tank to store water that is collected from rain water or water pumped from well or underground. 

6.At present, water meters are used to calculate the amount of water used at homes. This doesn’t provide an efficient method of monitoring the water usage. 

7.The water is wasted at each and every outlet knowingly or unknowingly which adds up to huge amount in the end. 

8.Efficient management of the water used at homes is very much necessary as, about 50% of water supplied to the cities gets wasted through its improper
usage. 

9.Water management is only possible, if the user is aware of the quantity of water he uses and the quantity available to him.

10.Water is essential in every hour of our lives. Hardly anyone keeps in track of the level of water in the overhead tanks. 

11.Consequently, automatic controlling involves designing a control system to function with minimal or no human interference. 

12.The idea can be implicitly used to ascertain and control the level of water in overhead tanks and prevent the wastage. 

13.In this Arduino based automatic water level indicator and controller project, the water level is being measured by using ultrasonic sensors.

14.The objective of the project is to measure the level of water in the tank and notify the user about the water level. 

15."Water Level Indicator and Controller using Arduino”project, the water is being measured by using ultrasonic sensors. 

16.Initially, the tank is considered to be empty. The motor pump is automatically turned ON when the water level becomes low and turned OFF when the tank is full.

__OBJECTIVES__

There are some objectives need to be achieved in order to accomplish this project. These objectives will act as a guide and will restrict the system to be implemented for certain situations:

1. To develop water level control system to control the water level in the tank.

2. To check the level of water in the tank. Depending on the water level, the motor switches ON when the water level goes below a predetermined level or the motor switches OFF
when the tank is full.

3. To monitor the level of water in the tank. If the level inside the tank is low, the motor turns ON. Similarly if the tank is full, the motor turns OFF.

__Components__

1.Arduino Uno

2.Ultrasonic Sensor

3.Servo Motor

4.LED's(Red,Green)

5.Voltage Display

6.Voltage Supply

7.Ground

8.Potentiometer

__1.Arduino__:

Arduino is an open-source electronics platform based on easy-to-use hardware and software. Arduino boards are able to read inputs - light on a sensor, a finger on a button, or a Twitter message - and turn it into an output - activating a motor, turning on an LED, publishing something online.

i)__Arduino Language__:

1.The compiler software is hosted on a computer separate from the Arduino UNO. 
2.The job of the compiler is to transform the program provided by the program writer (filename.c and filename.h) into machine code (filename.hex) suitable for loading into
the processor. Once the source files (filename.c andfilename.h) are provided to the compiler, the compiler executes two steps to render the machine code.

__2.Ultrasonic Sensor__:

1.It is basically a distance sensor and is used for detecting the distance. 

2.It has two ultrasonic transmitters namely the receiver and the control circuit.

3.The transmitter emits a high frequency ultrasonic sound wave which bounces off from any solid object and receiver receives it as an echo. 

3.The echo is then processed by the control circuit to calculate the time and the difference between the transmitter and receiver signal. 

4.This time can subsequently be used to measure the measure the distance between the sensor and the reflecting object.

5.It has an ultrasonic frequency of 40 KHz and accuracy.

6.is nearest to 0.3 cm.

__3.LED__:

1.A light-emitting diode (LED) is a semiconductor light source that emits light when current flows through it. 

2.Electrons in the semiconductor recombine with electron holes, releasing energy in the form of photons.

__4.Potentiometer__:

1.The potentiometer is a device that is used to measure the voltage or electric potential. It provides a variable resistance when the shaft of the device is turned. Here, we will measure the amount of resistance as an analog value produced by the potentiometer.

__ARDUINO IDE SOFTWARE__:

1.The Arduino Integrated Development Environment (IDE) is a cross-platform application (for Windows, MAC OS, Linux). 

2.The source code for the IDE is released under the GNU (General Public License) version 2.

3.The Arduino IDE supports the languages C and C++ using special rules of code structuring. 

4.The Arduino IDE supplies a software library from the Wiring project, which provides many common input and output procedures. 

5.User-written code only requires two basic functions, for starting the sketch and the main program loop, that are compiled and linked with a program stub main() into an executable cyclic executive program with the GNU tool chain, also included with the IDE distribution.