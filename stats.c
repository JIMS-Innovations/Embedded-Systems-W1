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
 * @brief This is a program that calculates statistical functions
 *
 *
 * @author Jesutofunmi Kupoluyi
 * @date 28 February, 2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main(void)
{

     unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                  114, 88,   45,  76, 123,  87,  25,  23,
                                  200, 122, 150, 90,   92,  87, 177, 244,
                                  201,   6,  12,  60,   8,   2,   5,  67,
                                    7,  87, 250, 230,  99,   3, 100,  90};

    
    /*Printing full statistics*/
    print_statistics(test, SIZE);
        

return 0;
}


/* Add other Implementation File Code Here */

void print_statistics(unsigned char *array,int size )
{
   
    printf("\n\n*********DATA*********\n\n");

    print_array(array, size);

     /*sort the array*/
    unsigned char *sorted_array;
    
    //sorted_array = array;
    sorted_array = sort_array(array, size);
    
    /*Print sorted array*/
    printf("\n\n***********SORTED ARRAY*******\n\n");    
    print_array(sorted_array, size);
    printf("\n\n");

	/*Get the minimum*/
	unsigned char min = find_minimum(sorted_array, size);
	
	/*Get the maximum*/
	unsigned char max = find_maximum(sorted_array, size);
	
	/*Get the mean*/
	unsigned char mean = find_mean(sorted_array, size);
	
	/*Get the median*/
	unsigned char median = find_median(sorted_array, size);
    

    printf("\n\n");
	
    printf("******Statistics********\n\n\tMIN: %d\n\tMAX: %d\n\tMEAN: %d\n\tMEDIAN: %d\n\n\n", min, max, mean, median );

}

/*Function for printing the array*/
void print_array(unsigned char *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    
    }
    printf("\n");    
}

/*Function for finding the median*/
unsigned char find_median(unsigned char *array, int size)
{
	unsigned char median;
	if(size % 2)
		median = (float)(array[size/2] + array[(size/2) + 1])/2;
	else
		median = array[size/2];

	return median;
}

/*Function for finding the mean*/
unsigned char find_mean(unsigned char *array, int size)
{
    int sum = 0; 
    unsigned char mean;
    for(int i = 0; i < size; i++)
        sum += array[i];
    mean = sum/size;

    return mean;
}

/*Function for finding the maximum*/
unsigned char find_maximum(unsigned char *array, int size)
{
    unsigned char max =  array[0];
    for(int i = 0; i < size; i++)
    {
        if(max < array[i])
            max = array[i];
    }

    return max;
}

/*Function for finding the minimum*/
unsigned char find_minimum(unsigned char *array, int size)
{
    unsigned char min = array[0]; 
    for(int i = 0; i < size; i++)
    {
        if(min > array[i])
            min = array[i];
    }

    return min;
}

/*Function for sorting array*/
unsigned char* sort_array(unsigned char *array, int size)
{
    unsigned char swap;
    for(int i = 0; i < size - 1; i++)
    {
      for(int j = 0; j < size - 1; j++)
	{
	    if(array[j] > array[j+1])
	    {
		swap = array[j];
		array[j] = array[j + 1];
		array[j + 1] = swap;
	    } 
	}  
           
    }
    return array;
}
