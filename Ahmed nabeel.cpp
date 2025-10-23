#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string name;
    string color;

    void display() {
        cout << "Animal: " << name << ", Color: " << color << endl;
    }
};

int main() {
    Animal a1, a2; // create objects

    a1.name = "Lion";
    a1.color = "Brown";

    a2.name = "Cat";
