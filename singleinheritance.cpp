#include <iostream>
#include <string>
using namespace std;


class vehicle
{
    public:
    string brand = "Ford";
    void colour()
    {
        cout << "Red \n";
    }
};

class car: public vehicle
{
    public:
    string model = "Mustang";
};

int main()
{
    car c1;
    c1.colour();
    cout << c1.brand << endl;
    cout << c1.model;
    return 0;
}
// OUTPUT
// Red
// Ford
// Mustang