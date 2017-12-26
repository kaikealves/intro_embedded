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
 * @file stats.c 
 * @brief First peer-graded assignment from Colorado Boulder`s Introduction to Embedded Systems at Coursera.com
 *
 * This software analyses an array and print its statistics to the screen. 
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
  printf("\n%-10s", "Array: ");
  print_array(test, SIZE);
  printf("\n\n");
  print_statistics(test, SIZE);
  printf("\n\n%-10s", "Sorted: ");
  sort_array(test, SIZE);
  print_array(test, SIZE);
  printf("\n\n");
}

/* Add other Implementation File Code Here */
void print_array(unsigned char array[], unsigned int length){
  
  for(int i = 0; i < length; i++){
    if( (i) % 10 == 0 && i != 0) printf("\n%-10s", "");
    printf("%3d ", array[i]);  

  }
}

void print_statistics(unsigned char array[], unsigned int length){ 
  
  unsigned char maximum, minimum, mean, median; 
  maximum = find_maximum(array, SIZE);  
  minimum = find_minimum(array, SIZE);
  mean = find_mean(array, SIZE);
  median = find_median(array, SIZE);
  
  printf("%-10s%3d \n\n%-10s%3d \n\n%-10s%3d \n\n%-10s%3d", "Minimum: ", minimum, "Maximum: ", maximum, "Mean: ", mean, "Median: ", median); 
}

unsigned char find_maximum(unsigned char array[], unsigned int length){  
  unsigned char max = array[0];
  for(int i = 0; i < length; i++){
    if(array[i] > max) max = array[i];
  }  
  return max;
}

unsigned char find_minimum(unsigned char array[], unsigned int length){  
  unsigned char min = array[0];
  for(int i = 0; i < length; i++){
    if(array[i] < min) min = array[i];
  }  
  return min;
}

unsigned char find_mean(unsigned char array[], unsigned int length){
  unsigned int sum = 0;
  for(int i = 0; i < length; i++){
    sum = sum +  array[i];
  }  
  return (sum/length);
}

unsigned char find_median(unsigned char array[], unsigned int length){
  unsigned char hold = 0;
  unsigned char copy[length];
  int median; 
 
  for(int i = 0; i < length; i++) copy[i] = array[i];

  for(int i = 0; i < length - 1; i++){
    for(int j = 0; j < length -  i; j++){
      if(copy[j] <= copy[j+1]){
        hold = copy[j];
        copy[j] = copy[j+1];
        copy[j+1] = hold;
      }
    }  
  }

  if(length%2 == 0) return ( copy[length/2 + 1] + copy[length/2] ) / 2;
  else return copy[length/2];

}


void sort_array(unsigned char array[], unsigned int length){
  char  hold = 0;

  for(int i = 0; i < length - 1; i++){
    for(int j = 0; j < length -  i; j++){
      if(array[j] <= array[j+1]){
        hold = array[j];
        array[j] = array[j+1];
        array[j+1] = hold;
      }
    }  
  }


}














