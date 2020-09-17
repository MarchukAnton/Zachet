#define _USE_MATH_DEFINES
#include <cmath>
#include <limits>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Header.h"


int main()
{
    Colour   c1(Vec3f(0.25, 0.25, 0.5)), c2(Vec3f(0.2, 0.5, 0));

    Picture pic = Picture();

    Sphere s1 = Sphere(Vec3f(-5, -3, -12), 3, c1), s2 = Sphere(Vec3f(11, 5, -25), 5, c2);

    pic.add(s1);

    pic.add(s2);

    Light light = Light(Vec3f(0, 0, -10), 1);

    pic.render(pic.spheres, light);

    return 0;

}
