#include <iostream>
#include <iomanip>
using namespace std;


//In Baraye Tabdil Dama
double convertTemperature(double value, char fromUnit, char toUnit) {
    if (fromUnit == 'C' && toUnit == 'F') {
        return value * 9.0 / 5.0 + 32;
    }
    else if (fromUnit == 'F' && toUnit == 'C') {
        return (value - 32) * 5.0 / 9.0;
    }
    return value; 
}

//In Baraye Tabdil Tul
double convertLength(double value, char fromUnit, char toUnit) {
    if (fromUnit == 'M' && toUnit == 'F') {
        return value * 3.28084;
    }
    else if (fromUnit == 'F' && toUnit == 'M') {
        return value / 3.28084;
    }
    return value; 
}

//In Baraye Tabdil Vazn
double convertWeight(double value, char fromUnit, char toUnit) {
    if (fromUnit == 'K' && toUnit == 'P') {
        return value * 2.20462;
    }
    else if (fromUnit == 'P' && toUnit == 'K') {
        return value / 2.20462;
    }
    return value; 
}

int main() {
    cout << "Coded By MamaD" << endl;
    cout << "----------------" << endl;
    char category;
    double value;
    char fromUnit, toUnit;

    cout << "Select category (T for Dama, L for Tul, W for Vazn): ";
    cin >> category;

    cout << "Enter value to convert: ";
    cin >> value;

    if (category == 'T') {
        cout << "Enter from unit (C for Santigerad, F for Fahrenheit): ";
        cin >> fromUnit;
        cout << "Enter to unit (C for Santigerad, F for Fahrenheit): ";
        cin >> toUnit;
        cout << fixed << setprecision(2);
        cout << "Result: " << convertTemperature(value, fromUnit, toUnit) << endl;
    }
    else if (category == 'L') {
        cout << "Enter from unit (M for Meter, F for Foot): ";
        cin >> fromUnit;
        cout << "Enter to unit (M for Meter, F for Foot): ";
        cin >> toUnit;
        cout << fixed << setprecision(2);
        cout << "Result: " << convertLength(value, fromUnit, toUnit) << endl;
    }
    else if (category == 'W') {
        cout << "Enter from unit (K for Kilogram, P for Pound): ";
        cin >> fromUnit;
        cout << "Enter to unit (K for Kilogram, P for Pound): ";
        cin >> toUnit;
        cout << fixed << setprecision(2);
        cout << "Result: " << convertWeight(value, fromUnit, toUnit) << endl;
    }
    else {
        cout << "Invalid category!" << endl;
    }

    return 0;
}
