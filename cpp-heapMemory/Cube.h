#pragma once

// when we use "Cube" we mean that it is OUR definition of Cube
namespace uiuc
{
    class Cube
    {
    public:
        /*
        returns the volume of the cube
        @return
            volume of the cube*/
        double getVolume();
        double getSurfaceArea();

        // sets length of the sie of the cube
        //@param length
        void setLength(double length);

    private:
        double length_;
    };
}