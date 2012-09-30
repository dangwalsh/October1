//
//  farenheit.cpp
//  October1
//
//  Created by Daniel Walsh on 9/30/12.
//  Copyright (c) 2012 Daniel Walsh. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

double fToC (double degF = 32.0);

int main()
{
    double fahrenheit;
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> fahrenheit;
    
    double centigrade;
    centigrade = fToC(fahrenheit);
    
    cout << fahrenheit << "F is " << centigrade << "C\n";
    
    return EXIT_SUCCESS;
}

double fToC (double degF)
{
    double degC = ((5.0/9.0) * (degF - 32.0));
    return degC;
}
