/*************************************************************
[MODIFY] Description of program, authors, dates, etc... 
[MODIFY] Include pseudo code between these lines
*************************************************************/

#include "mbed.h"
#include "platform/mbed_thread.h"

#define SERVO_CAN_ID 	 1   //[DO NOT MODIFY]  Address of mbed/servo CAN device
#define SENSOR_CAN_ID    2   //[DO NOT MODIFY]  Address of mbed/sensor CAN device
#define CONTROL_CAN_ID   3   //[DO NOT MODIFY]  Address of THIS mbed device

Serial pc(USBTX, USBRX);    //tx, and rx for tera term
CAN can(p30,p29); 		    //[DO NOT MODIFY]  Set CAN Interface (assume using pins p30 and p29).
				
Timer tlog;			        //[DO NOT MODIFY]  This is a time you can use

/*************************************************************
[OPTIONAL]  Declare and initialize any variables and 
            functions you might need
*************************************************************/

int main() {
	can.frequency(500000);      //[DO NOT MODIFY]  Set the frequency (baudrate) of CAN 
	//[MODIFY]  Ask user to initiate attack
	tlog.start();			    //[DO NOT MODIFY]  Start counter for timer    
    // Execute attack for 120 seconds
    // Read and Write CAN Messages with ID from Sensor

}