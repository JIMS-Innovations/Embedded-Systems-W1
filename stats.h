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
 * @file stats.h 
 * @brief This is the header file for the stats.c source file
 *
 * This file contains function prototypes for the functions defined
 * in the stats.c source file
 *
 * @author Jesutofunmi Kupoluyi
 * @date 3 March, 2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Function for printing out data statistics
 *
 * The function prints out the following:
 * 	Data array
 * 	Min
 * 	Max
 * 	Mean
 * 	Median
 * 
 *
 * @param   int array[]   array containing the data
 * @param   int size      size of the array
 *
 * @return void
 */
void print_statistics(int array[], int size);


/**
 * @brief Function for printing out data array 
 *
 * The function prints out the data array
 *
 *
 * @param   int array[]   array containing the data
 * @param   int size      size of the array
 *
 * @return void
 */
void print_array(int array[], int size);


/**
 * @brief Function for sorting the array 
 *
 * The function sorts the data array.
 *
 *
 * @param   int array[]   array containing the data
 * @param   int size      size of the array
 *
 * @return int*
 */
int* sort_array(int array[], int size);

/**
 * @brief Function for finding the minimum 
 *
 * The function finds the minimum in a data
 * array.
 *
 * @param   int array[]   array containing the data
 * @param   int size      size of the array
 *
 * @return int
 */
int find_minimum(int array[], int size);


/**
 * @brief Function for finding the maximum 
 *
 * The function finds the maximum in a data
 * array.
 *
 * @param   int array[]   array containing the data
 * @param   int size      size of the array
 *
 * @return int
 */
int find_maximum(int array[], int size);


/**
 * @brief Function for finding the median 
 *
 * The function finds the median in a data
 * array.
 *
 * @param   int array[]   array containing the data
 * @param   int size      size of the array
 *
 * @return float
 */
float find_median(int array[], int size);


/**
 * @brief Function for finding the mean 
 *
 * The function finds the mean of a data
 * array.
 *
 * @param   int array[]   array containing the data
 * @param   int size      size of the array
 *
 * @return float
 */
float find_mean(int array[], int size);

#endif /* __STATS_H__ */
