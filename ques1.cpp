#include <iostream>
using namespace std;

class NaturalNumberSum {
    private:
        int n;
    public:
        NaturalNumberSum() {
            cout << "Enter the value of n: ";
            cin >> n;
        }
        int calculateSum() {
            return (n * (n + 1)) / 2;
        }
        void displayresult() {
            cout << "Sum of first " << n << " natural numbers is: " << calculateSum();
        }
};
int main() {
    NaturalNumberSum sum;
    sum.displayresult();
    return 0;
}
