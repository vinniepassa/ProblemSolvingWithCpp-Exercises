#include <iostream>
#include <cmath>
using namespace std;

double cal_bas_met(double weight); // computes calories required for basal metabolic rate
double cal_phys_act(int intensity, double weight, int minutes); // computes calories required for physical activity

int main()
{
    double weight, servings_per_day;
    int intensity, minutes, calories;
    bool loop = true;
    char ans;
    while(loop){
    cout << "Enter weight (in pounds): " << endl;
    cin >> weight;
    cout << "Enter intensity of physical activity (range: 1-17): " << endl;
    cin >> intensity;
    cout << "Enter minutes spent doing physical activity: " << endl;
    cin >> minutes;
    cout << "Enter calories in one serving of your favorite food: " << endl;
    cin >> calories;
    servings_per_day = cal_bas_met(weight)+cal_phys_act(intensity, weight, minutes);
    servings_per_day = servings_per_day*1.1;
    cout << "The # of daily calories required to meet your basal metabolic rate is: " << cal_bas_met(weight) << endl;
    cout << "The # of daily calories required for physical activity is: " << cal_phys_act(intensity, weight, minutes) << endl;
    cout << "You need " << servings_per_day/calories << " servings per day";
    cout << "of your favorite food to maintain your current weight." << endl;
    cout << "Enter 1 to compute again, 0 to quit: " << endl;
    cin >> ans;
    loop = ans=='1';
    }
    return 0;
}

double cal_bas_met(double weight){
    double f;
    f = 70*pow((weight/2.2), 0.756);
    return f;
}

double cal_phys_act(int intensity, double weight, int minutes){
    double f;
    f = 0.0385*intensity*weight*minutes;
    return f;
}
