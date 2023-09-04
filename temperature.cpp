#include <iostream>
using namespace std;

int main() {
    double temperature;
    char originalUnit;

    cout << "Temperature Conversion Program" << endl;
    cout << "Enter the temperature value: ";
    cin >> temperature;

    cout << "Enter the original unit (C, F, or K): ";
    cin >> originalUnit;

    double convertedCelsius, convertedFahrenheit, convertedKelvin;

    switch (originalUnit) {
        case 'C':
        case 'c':
            convertedCelsius = temperature;
            convertedFahrenheit = (temperature * 9.0 / 5.0) + 32;
            convertedKelvin = temperature + 273.15;
            break;
        case 'F':
        case 'f':
            convertedCelsius = (temperature - 32) * 5.0 / 9.0;
            convertedFahrenheit = temperature;
            convertedKelvin = (temperature + 459.67) * 5.0 / 9.0;
            break;
        case 'K':
        case 'k':
            convertedCelsius = temperature - 273.15;
            convertedFahrenheit = (temperature * 9.0 / 5.0) - 459.67;
            convertedKelvin = temperature;
            break;
        default:
            cout << "Invalid original unit. Please enter C, F, or K." << endl;
            return 1;
    }

    cout << "Converted Temperature:" << endl;
    cout << "Celsius: " << convertedCelsius << " °C" << endl;
    cout << "Fahrenheit: " << convertedFahrenheit << " °F" << endl;
    cout << "Kelvin: " << convertedKelvin << " K" << endl;

    return 0;
}
