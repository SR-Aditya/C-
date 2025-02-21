#include <iostream>
using namespace std;

class Base {
protected:
    int num1, num2;

public:
    Base(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
};

class Derived : public Base {
public:
    Derived(int n1, int n2) : Base(n1, n2) {

    }

    int product() {
        return num1 * num2;
    }
};

int main() {
    Derived d(10, 20);
    cout << "Product of two numbers: " << d.product() << endl;
    return 0;
}