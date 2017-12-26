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
 * @file <stats.h> 
 * @brief <Week 1 Peer-graded assignment>
 *
 * @author <Kaike Silva>
 * @date <26 dec 2017>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief prints the statistics of an array including minimum, maximum, mean and median.
 *
 *
 * @param array The array to be analysed and to have its statistics printed
 * @param length Number of elements in the array
 *
 */
void print_statistics(unsigned char array[], unsigned int length);


/**
 * @brief Given an array of data and a length, prints the array to the screen   
 *
 * @param array The array to be printed
 * @param length Number of elements in the array
 *
 */
void print_array(unsigned char array[], unsigned int length);


/**
 * @brief Given an array of data and a length, returns the median value
 *
 * @param length Number of elements in the array 
 * @param array The array to be analysed
 *
 * @return Returns the median value of the array
 */
unsigned char find_median(unsigned char array[], unsigned int length);


/**
 * @brief Given an array of data and a length, returns the mean value
 *
 * @param length Number of elements in the array 
 * @param array The array to be analysed
 *
 * @return Returns the mean value of the array
 */
unsigned char find_mean(unsigned char array[], unsigned int length);


/**
 * @brief Given an array of data and a length, returns the minimum value
 *
 * @param length Number of elements in the array 
 * @param array The array to be analysed
 *
 * @return Returns the minimum value of the array
 */
unsigned char find_minimum(unsigned char array[], unsigned int length);


/**
 * @brief Given an array of data and a length, returns the maximum value
 *
 * @param length Number of elements in the array 
 * @param array The array to be analysed
 *
 * @return Returns the maximum value of the array
 */
unsigned char find_maximum(unsigned char array[], unsigned int length);


/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest
 *
 * @param array The array to be sorted
 * @param length The length of the array to be sorted
 *
 */
void sort_array(unsigned char array[], unsigned int length);

 
#endif /* __STATS_H__ */
