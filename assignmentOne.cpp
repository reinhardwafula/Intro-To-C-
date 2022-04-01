// assignmentOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{   
    //First Program
    int noOfAccidents;
    int basicCharge = 20000;
    int totalInsurance;
    int surcharge;
    
    cout << "Enter the number of accidents had by the driver: " << endl;
    cin >> noOfAccidents;
    if (noOfAccidents == 1) {
        surcharge = 4250;
        totalInsurance = surcharge + basicCharge;
        cout << "Driver's insurance plan is: " << totalInsurance << endl;
    }
    else if (noOfAccidents == 2) {
        surcharge = 10600;
        totalInsurance = surcharge + basicCharge;
        cout << "Driver's insurance plan is: " << totalInsurance << endl;
    }
    else if (noOfAccidents == 3) {
        surcharge = 19100;
        totalInsurance = surcharge + basicCharge;
        cout << "Driver's insurance plan is: " << totalInsurance << endl;
    }
    else if (noOfAccidents >= 4) {
        cout << "No Insurance Offered!" << endl;
    }
    system("pause");

    //Second Program
    int a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    if ((a == b ) && (b == c)) {
        cout << "Triangle is equilateral!" << endl;
    }
    else if ((a == b && a != c) || (b == c && b != a )  || (a == c && a != b)) {
        cout << "Triangle is isosceles!" << endl;
    }
    else {
        cout << "Triangle is scalene!" << endl;
    }
    system("pause");

    //Third Program
    int units;
    cout << "Enter units: ";
    cin >> units;
    if (units <= 50) {
        cout << "Pay " << (units * 0.50) << endl;
    }
    else if (units <= 150) {
        cout << "Pay " << (50 * 0.50) + ((units - 50) * 0.75) << endl;
    }
    else if (units <= 250) {
        cout << "Pay " << (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20) << endl;
    }
    else {
        float chargeOn250 = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
        float extraCharges = chargeOn250 * 0.2;
        cout << "Pay " << chargeOn250 + extraCharges << endl;
        cout << "Surcharge: " << extraCharges << endl;
    }
    system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
