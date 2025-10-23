#include <iostream>
using namespace std;

class Animal {
public:
    string name, color;
    void display() {
        cout << "Animal: " << name << ", Color: " << color << endl;
    }
};

int main() {
    Animal a1{"Lion", "Brown"}, a2{"Cat", "White"};
    a1.display();
    a2.display();
}
