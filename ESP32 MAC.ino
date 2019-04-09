// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       ESP32 MAC.ino
    Created:	4/2/2019 12:08:50 night
    Author:     DRAKE\Spencer
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//

// The setup() function runs once each time the micro-controller starts
#include <WiFi.h>
void setup()
{
	Serial.begin(115200);

	WiFi.mode(WIFI_MODE_STA);

	Serial.println(WiFi.macAddress());

}

// Add the main program code into the continuous loop() function
void loop()
{


}
