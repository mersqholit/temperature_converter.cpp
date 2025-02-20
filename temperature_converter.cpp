#include <iostream>

using namespace std;

void celsiusToOther(double celsius) {
    double fahrenheit = (celsius * 9/5) + 32;
    double kelvin = celsius + 273.15;
    cout << celsius << "°C = " << fahrenheit << "°F = " << kelvin << "K\n";
}

void fahrenheitToOther(double fahrenheit) {
    double celsius = (fahrenheit - 32) * 5/9;
    double kelvin = celsius + 273.15;
    cout << fahrenheit << "°F = " << celsius << "°C = " << kelvin << "K\n";
}

void kelvinToOther(double kelvin) {
    double celsius = kelvin - 273.15;
    double fahrenheit = (celsius * 9/5) + 32;
    cout << kelvin << "K = " << celsius << "°C = " << fahrenheit << "°F\n";
}

int main() {
    int choice;
    double value;

    cout << "Temperature Converter\n";
    cout << "1. Celsius to Fahrenheit & Kelvin\n";
    cout << "2. Fahrenheit to Celsius & Kelvin\n";
    cout << "3. Kelvin to Celsius & Fahrenheit\n";
    cout << "Choose an option (1-3): ";
    cin >> choice;

    cout << "Enter temperature value: ";
    cin >> value;

    switch (choice) {
        case 1: celsiusToOther(value); break;
        case 2: fahrenheitToOther(value); break;
        case 3: kelvinToOther(value); break;
        default: cout << "Invalid option!\n";
    }

    return 0;
}
