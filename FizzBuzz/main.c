

//
//  main.c
//  FizzBuzz
//
//  Created by Chris Eloranta on 2018-01-18.
//  Copyright © 2018 Chris Eloranta. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int counter = 0; //initialize a counter for iteration
    while(counter<100){  //iterate through each integer between 0 and 100)
        counter++;     //increment counter
        printf("\n");   //line return
        //check whether divisible by three or five
        if ((counter % 3 == 0)||(counter % 5 ==0)){
            //print 'Fizz' if divisible by 3
        if (counter % 3 == 0) printf("Fizz");
            //print 'Buzz if divisible by 5
        if (counter % 5 == 0) printf("Buzz");
            //skip the remainder of the while loop
            continue;
        }
        //print the counter if divisible by neither three nor five
        printf("%i",counter);
    }
    //print a final line return
    printf("\n");
    return 0;
}

