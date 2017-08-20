#include <iostream>
#include <cmath>
using namespace std;

double stand_dev(double myArray[], int sizeofArray);

int main()
{
    double myArray[1000];
    bool loop = true;
    char ans;
    cout << "This program computes the SD of a list of numbers." << endl;
    cout << "Enter the numbers (max 1000), then press the" << endl;
    cout << "'K' (upper case) and 'Enter' keys to calculate the SD: " << endl;
    while(loop)
    {
        for(int i = 0; i < 1000; ++i)
            cin >> myArray[i];
            cin >> ans;
            loop = ans=='K';
    }
    cout << "The standard deviation is: " << stand_dev(myArray, 10) << endl;
    return 0;
}

double stand_dev(double myArray[], int sizeofArray){
    double sum = 0, average, SD;
    for(int i = 0; i < sizeofArray; ++i){
        sum = sum + myArray[i];
    }
    average = sum/sizeofArray;
    for(int i = 0; i < sizeofArray; ++i)
        SD = SD + pow((myArray[i] - average), 2);
    return sqrt(SD/sizeofArray);
}
