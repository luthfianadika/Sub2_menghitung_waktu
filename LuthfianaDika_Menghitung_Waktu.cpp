#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double s;
    double v0;
    double g;
    double waktu;
    double sinA;
	
	cout << "Masukan Nilai Sudut: ";
    cin >> s;
    cout << "Masukan Nilai Kecepatan: ";
    cin >> v0;
    sinA = sin(s * 22 / 7 / 180);
    waktu = 2 * (v0 * sinA) / 10;
    cout << "Hasil Nilai Waktu Adalah: ";
    cout << waktu << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

