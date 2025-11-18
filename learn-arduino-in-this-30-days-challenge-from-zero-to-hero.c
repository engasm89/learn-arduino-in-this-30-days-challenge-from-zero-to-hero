/*
 * Course: Learn Arduino In This 30 Days Challenge From Zero To Hero
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Learn Arduino In This 30 Days Challenge From Zero To Hero" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/learn-arduino-in-this-30-days-challenge-from-zero-to-hero/
 * Repository: https://github.com/engasm89/learn-arduino-in-this-30-days-challenge-from-zero-to-hero
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

// Emit daily topics and practice tasks over a longer run
#include <stdio.h> // Progress logs
#include <unistd.h> // Delay

int main(void) { // Program entry point
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
} // End of main function

