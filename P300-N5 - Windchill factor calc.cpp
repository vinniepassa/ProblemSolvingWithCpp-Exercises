#include <iostream>
#include <cmath>
using namespace std;

double windchill_fac(double wind_speed, double temperature);

int main()
{
    double wind_speed, temperature;
    bool flag = true;
    char ans;
    cout << "This calculator computes the windchill factor." << endl;
    while(flag){
        cout << "Enter wind speed (in m/sec): " << endl;
        cin >> wind_speed;
        cout << "Enter temperature (in Celsius degrees): " << endl;
        cin >> temperature;
        if(temperature>10)
            cout << "Invalid input! Only temperatures less than/equal to 10 degrees allowed. ";
        else if(temperature<=10)
            cout << "The windchill factor is: " << windchill_fac(wind_speed, temperature) << endl;
        else
            cout << "Invalid input! ";
        cout << "Enter 1 to compute the windchill factor again, 0 to exit: " << endl;
        cin >> ans;
        flag = ans=='1';
        }
    return 0;
}

double windchill_fac(double wind_speed, double temperature){
    double W;
    W = 13.12+0.6215*temperature-11.37*(pow(wind_speed, 0.16))+0.3965*temperature*(pow(wind_speed, 0.016));
    return W;
}
