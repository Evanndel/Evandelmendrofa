#include <iostream>
#include <cmath>   // untuk sqrt() dan pow()
using namespace std;

// Fungsi untuk menghitung jarak antara dua titik
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Fungsi untuk menghitung jari-jari lingkaran
double radius(double xCenter, double yCenter, double xPoint, double yPoint) {
    return distance(xCenter, yCenter, xPoint, yPoint);
}

// Fungsi untuk menghitung keliling lingkaran
double circumference(double r) {
    const double PI = 3.1416;
    return 2 * PI * r;
}

// Fungsi untuk menghitung luas lingkaran
double area(double r) {
    const double PI = 3.1416;
    return PI * r * r;
}

int main() {
    double xCenter, yCenter, xPoint, yPoint;

    cout << "Program Menghitung Lingkaran Berdasarkan Dua Titik\n";
    cout << "-------------------------------------------------\n";
    cout << "Masukkan koordinat pusat lingkaran (x1 y1): ";
    cin >> xCenter >> yCenter;
    cout << "Masukkan koordinat titik pada lingkaran (x2 y2): ";
    cin >> xPoint >> yPoint;

    double r = radius(xCenter, yCenter, xPoint, yPoint);
    double d = 2 * r;
    double c = circumference(r);
    double a = area(r);

    cout << "\nHasil Perhitungan:\n";
    cout << "-----------------------------\n";
    cout << "Jari-jari (radius)     : " << r << endl;
    cout << "Diameter               : " << d << endl;
    cout << "Keliling (circumference): " << c << endl;
    cout << "Luas (area)            : " << a << endl;

    return 0;
}