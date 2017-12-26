/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Kaike Alves Silva>
 * @date <26 dec 2017>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  int maximum, minimum, mean, median;  

  print_array(test, SIZE);
//  print_statistics(test, SIZE);
//  sort_array(test, SIZE);
  
}

/* Add other Implementation File Code Here */
void print_array(unsigned char array[], unsigned int length){
  
  printf("%10s", "Array: ");
  printf("\n");  
  for(int i = 0; int < length; i++){
    printf("%c, ", array[i])/  

  }
  printf("\n"); 
}

void print_statistics(unsigned char array[], unsigned int length){ 
  
  unsigned char maximum, minimum, mean, median; 
  maximum = find_maximum(test, SIZE);
  minimum = find_minimum(test, SIZE);
  mean = find_mean(test, SIZE);
  median = find_median(test, SIZE);
  
  printf("%10s: %c \n %10s: %c \n %10s: %c, %10s: %c", "Minimum: ", minimum, "Maximum: ", maximum, "Mean: ", mean, "Median: ", median);
 
}
















