#include <iostream>
using namespace std;

struct Wspolrzedne {
    int x;
    int y;
};

int main()
{
    Wspolrzedne punkt;
    punkt.x = 15;
    punkt.y = 34;

    cout << "punkt x: " << punkt.x << endl;
    cout << "punkt y: " << punkt.y << endl;
}
