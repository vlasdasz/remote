
#include <Arduino.h>
#include <ESP8266WiFi.h>

#include <iostream>
using namespace std;

#define WIFI_SSID "Fergel"
#define WIFI_PASS "******"

extern "C" {
    int _write(int fd, char *ptr, int len) {
        (void) fd;
        return Serial.write(ptr, len);
    }
}


void setup() {
    // put your setup code here, to run once:
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600); // open the serial port at 9600 bps:


    cout << "Starting Wifi" << endl;

    WiFi.begin(WIFI_SSID, WIFI_PASS);

    cout << "Wifi began" << endl;

    while (WiFi.status() != WL_CONNECTED) {
        cout << "connecting ..." << endl;
        delay(100);
    }

    cout << "connected!" << endl;

    cout << "local ip: " <<  Serial.println(WiFi.localIP()) << endl;
}

void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(1000);                      // wait for a second
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    delay(1000);                      // wait for a second

    cout << "Ultra skogggo4" << " multi pedven" << endl << endl;
}
