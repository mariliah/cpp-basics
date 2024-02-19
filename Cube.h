// header file create interface to the class. defined separately from implementation (.cpp file)
// declaration of all member variables AND functions
// akin to an api

#pragma once // always present in h files, compiler will run this only ONCE

namespace uiuc
{
    class Cube
    {
    public:
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);

    private:
        double length_;
    };
}
