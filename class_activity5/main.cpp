//
//  main.cpp
//  class_activity5
//
//  Created by Sonia Lopchan on 9/15/24.

// I want you to find the size and limits of short and double data types on your machine.

#include <iostream>

using namespace std;

int main()
{
    cout << "The size of short data type is " <<sizeof(short)<< " bytes"<< endl;
    cout << "The size of double data type is " <<sizeof(double)<< " bytes"<< endl;
    cout << endl;
    
    cout << "The limits of short is " <<numeric_limits<short>::min()<< " to "<<numeric_limits<short>::max()<< endl;
    cout << "The limits of double is " <<numeric_limits<double>::min()<< " to "<<numeric_limits<double>::max()<< endl;

return 0;
}
