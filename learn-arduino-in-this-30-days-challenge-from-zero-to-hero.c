// Emit daily topics and practice tasks over a longer run
#include <stdio.h> // Progress logs
#include <unistd.h> // Delay

int main(void) { // Entry
  printf("Learn Arduino in this 30 Days Challenge: From Zero to Hero\n"); // Title
  const char* topics[] = {"GPIO","Serial","PWM","ADC","I2C","SPI","Interrupts","Timers","EEPROM","Sensors"}; // Topics
  for (int day = 1; day <= 20; ++day) { // Simulate 20 days
    const char* t = topics[(day - 1) % 10]; // Topic selection
    printf("Day %d: Topic=%s Practice=2 tasks\n", day, t); // Log
    printf(" - Task 1: Implement %s demo\n", t); // Task detail
    printf(" - Task 2: Document wiring and results\n"); // Task detail
    usleep(150000); // Delay
  } // End loop
  return 0; // Exit
} // End main

