#include <iostream>
#include <string>

using namespace std;

class bestCar {
    public:
    string brand;
    string model;
    string make;
    string color;
    string engine;
    string transmission;
    int MPG;
    int year;
    int hPower;
};

int main()
{
     bestCar bCar;

     bCar.brand;
     cout << "Enter a car you like: " << endl;
     cin >> bCar.brand;

     bCar.model;
     cout << "Enter the car's model: " << endl;
     cin >> bCar.model;

     bCar.make;
     cout << "Enter the car's make: " << endl;
     cin >> bCar.make;

     bCar.color;
     cout << "Enter the car's color: " << endl;
     cin >> bCar.color;

     bCar.engine;
     cout << "Enter the car's engine type: " << endl;
     cin >> bCar.engine;

     bCar.transmission;
     cout << "Enter the car's transmission type: " << endl;
     cin >> bCar.transmission;

     bCar.MPG;
     cout << "Enter a car's miles per gallon: " << endl;
     cin >> bCar.MPG;

     bCar.year;
     cout << "Enter the car's year: " << endl;
     cin >> bCar.year;

     bCar.hPower;
     cout << "Enter the car's horsepower: " << endl;
     cin >> bCar.hPower;

     cout << "Brand: " << bCar.brand << " " << endl;
     cout << "Model: " << bCar.model << " " << endl;
     cout << "Make: " << bCar.make << " " << endl;
     cout << "Color: " << bCar.color << " " << endl;
     cout << "Engine Type: " << bCar.engine << " " << endl;
     cout << "Transmission Type: " << bCar.transmission << " " << endl;
     cout << "Miles Per Gallon: " << bCar.MPG << " " << endl;
     cout << "Year: " << bCar.year << " " << endl;
     cout << "Horsepower Type: " << bCar.hPower << " " << endl;

}
