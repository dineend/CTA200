#include <stdio.h>
#include "average.h"


int main() {
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};

    double result = average(7, arr);

    printf("The average of 1-7 is: %.4f\n", result);
    return 0;    
}

