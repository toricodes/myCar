#include <iostream>

using namespace std;
void bestCar(string model, string make, string color, int hPower, int MPG, string Cengine, string cTransmission);

int main()
{
    string model;
    string make;
    string color;
    int MPG;
    string engine;
    string transmission;

    bestCar(model, make, color, hPower, MPG, engine, transmission);
}

void bestCar(string model, string make, string color,int hPower, int Cmpg, string Cengine, string cTransmission){
    cout << "Enter model of car: " << endl;
    cin >> Cmodel;
    getline(cin, Cmodel);

    cout << "Enter make of car: " << endl;
    cin >> Cmake;
    getline(cin, Cmake);

    cout << "Enter color of car: " << endl;
    cin >> Ccolor;
    getline(cin, Ccolor);

    cout << "Enter horsepower of car: " << endl;
    cin >> ChPower;
    getline(cin, ChPower);

    cout << "Enter miles per gallon of car: " << endl;
    cin >> Cmpg;
    getline(cin, Cmpg);

    cout << "Enter engine type of car: " << endl;
    cin >> Cengine;
    getline(cin, Cengine);

    cout << "Enter transmission type of car: " << endl;
    cin >> cTransmission;
    getline(cin, cTransmission);

    cout << "======================= Your Dream Car ======================== " << endl;

    cout << "Car Model: " << endl;
    cout << "Car Make: " << endl;
    cout << "Car Color: " << endl;
    cout << "Car Horsepower: " << endl;
    cout << "Car MPG: " << endl;
    cout << "Car Engine: " << endl;
    cout << "Car Transmission: " << endl;

    cout << "=============================================================== " << endl;
}
