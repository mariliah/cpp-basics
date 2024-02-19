#include "Cube.h"
#include <iostream>

using namespace std;

int main()
{
    uiuc::Cube c;
    c.setLength(2.4);
    double volume = c.getVolume();
    cout << "Volume: " << volume << endl;

    double surfaceArea = c.getSurfaceArea();
    cout << "Surface Area: " << surfaceArea << endl;
    return 0;
}