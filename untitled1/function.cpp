//
// Created by rom57 on 11/10/2019.
//

#include "function.h"

double to_meters (int feet, int inch){
    double one_inch = 0.0254;
    double all = inch + (feet * 12);
    return (all * one_inch);
}
