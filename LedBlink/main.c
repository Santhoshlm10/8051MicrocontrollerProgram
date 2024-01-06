#include <reg51.h>  // Include the header file for the 8051 microcontroller

void delay(unsigned int);  // Declare the function for creating a delay

void main() {
  while(1) {  // Loop forever
    P2 = 0x00;  // Turn the LED off
    delay(2000);  // Wait for 1 second
    P2 = 0xFF;  // Turn the LED on
    delay(2000);  // Wait for 1 second
  }
}

void delay(unsigned int count) {
  unsigned int i;
  while(count) {  // Loop until count is zero
    i = 115;  // Set i to 115
    while(i > 0) {  // Loop until i is zero
      i--;  // Decrement i
    }
    count--;  // Decrement count
  }
}
