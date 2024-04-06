/*!
@file       the name of source file is q.h
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   Assignment 3
@date       file created on 13/09/2023
@brief      provide a brief explanation about what this source file does 
            This file contains 1 functions declaraction recieves 
            temperature in Fahrenheit and identifiy those tempertures in 
            the form of Celsius and kelvin and to print them as output
______________________________________________________________________*/

// You should document [not necessary for grading but an excellent habit
// to acquire] your implementation of function temp_converter to aid
// in debugging and maintenance not only by yourself but by others in
// your software development team ...

// Remember, the function-level documentation header in q.h is primarily
// meant for your clients. The documentation header here is primarily for
// use by you [and other on your team] solely to aid maintenance and
// debugging tasks ...

// @todo: Add necessary C standard library headers here ...

// @todo: Provide the definition of function temp_converter that
// matches the declaration in q.h ...



#include <stdio.h>
#include "q.h"

void temp_converter(double temp){
        
        double ftemp = temp , ctemp = 0.0, ktemp = 0.0;                          // declaring variables in the function for Fahrenheit, Celsius and kelvin assigning valuse to them

        ctemp = ((ftemp-32)*5)/9;                                                // calculating temperture in Celsius using fourmula for conversion from Fahrenheit to Celsius
        ktemp =  ctemp + 273.15;                                                 // calculating temperture in kelvin using fourmula for conversion from Fahrenheit to kelvin
        
        printf("Fahrenheit     Celsius        Kelvin         ");                 // printing out list layout
        printf("\n---------------------------------------------");               // printing out list layout spacing
        printf("\n%-15.f%-15.2f%-15.2f\n", ftemp, ctemp, ktemp);                 // printing the themperatures in Fahrenheit, Celsius and kelvin
}
