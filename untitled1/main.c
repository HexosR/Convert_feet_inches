#include "function.cpp"
#include <stdio.h>

//main() {
//    int feet;
//    int inch;
//    double meters;
//    int how_many;
//    printf("How many heights you want to convert?");
//    scanf("%d" , &how_many);
//    for (int i = 0 ; i < how_many ; i++){
//        printf("Please enter your height (feet):");
//        scanf("%d", &feet);
//        printf("Please enter your height (inch):");
//        scanf("%d" , &inch );
//        meters = to_meters(feet,inch);
//        printf("Your height in meters is %1.2f \n", meters);
//    }
//    printf("Thank You! Conversion of %d heights is finished. Have a great day. ;) \n" , how_many);
//}

main() {
    int feet;
    int inch;
    double meters;
    do {
        printf("Please enter your height (feet):");
        scanf("%d", &feet);
        printf("Please enter your height (inch):");
        scanf("%d" , &inch );
        meters = to_meters(feet,inch);
        printf("Your height in meters is %1.2f \n", meters);
    } while ( feet >= 0 );
    printf("Value of foots can not be negative \n");
}