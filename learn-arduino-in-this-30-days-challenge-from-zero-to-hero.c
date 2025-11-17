#include <stdio.h> // Include I/O for challenge progress
#include <unistd.h> // Include sleep for timing

// Simulate 10 days of the 30-day challenge
int main(void) { // Entry
  printf("Learn Arduino in this 30 Days Challenge: From Zero to Hero\n"); // Title
  for (int day = 1; day <= 10; ++day) { // Loop days
    printf("Day %d: GPIO, Serial, Sensors\n", day); // Log topics
    usleep(150000); // Delay
  } // End loop
  return 0; // Exit
} // End main

