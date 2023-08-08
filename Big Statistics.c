/*
**********************************************************************
*** Program: 	Big Statistics     		                   ***
*** Author: Gysheilla Jangha (gysheilla.m.tita-jangha-1@ou.edu     ***
*** Course: CS 1313 010 Spring 2022     		           ***
*** Lab: Sec 013 Fridays 2:30pm      		                   ***
*** Description:   The program will calculate the outputs of       ***
***  a list of numbers provided by the user                        ***
**********************************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const float initial_sum = 0.0;
    const int minimum_number_of_elements = 1;
    const int program_success_code = 0;
    const int program_failure_code = 1;

    float *list1_input_value = NULL;
    float *list2_input_value = NULL;

    float list1_input_value_sum = initial_sum;
    float list2_input_value_sum = initial_sum;

    int number_of_elements;
    int element;

    printf("How many values would you like to\n");
    printf("calculate the mean of in each list?\n");
    scanf("%d", &number_of_elements);

    if (number_of_elements < minimum_number_of_elements) {
        printf("ERROR: Can't calculate the mean of %d values.\n", number_of_elements);
        exit(program_failure_code);
    }

    list1_input_value = (float *)malloc(sizeof(float) * number_of_elements);
    if (list1_input_value == NULL) {
        printf("ERROR: Can't allocate the 1st float array\n");
        printf("of length %d.\n", number_of_elements);
        exit(program_failure_code);
    }

    list2_input_value = (float *)malloc(sizeof(float) * number_of_elements);
    if (list2_input_value == NULL) {
        printf("ERROR: Can't allocate the 2nd float array\n");
        printf("of length %d.\n", number_of_elements);
        free(list1_input_value);  // Clean up allocated memory
        exit(program_failure_code);
    }

    printf("What are the pair of lists of %d values each\n", number_of_elements);
    printf("to calculate the mean of?\n");
    for (element = 0; element < number_of_elements; element++) {
        scanf("%f %f", &list1_input_value[element], &list2_input_value[element]);
        list1_input_value_sum += list1_input_value[element];
        list2_input_value_sum += list2_input_value[element];
    }

    // Calculate mean values...

    // Output calculated values...

    // Free allocated memory...
    free(list1_input_value);
    free(list2_input_value);

    return program_success_code;
}
