#include "rtweekend.h"
#include <iostream>

int main() {
    for (int i = 0; i < 200; i++) {
        double r1 = random_double();
        double r2 = random_double();
        double x = cos(2*pi*r1) * 2*sqrt(r2*(1-r2));
        double y = sin(2*pi*r1) * 2*sqrt(r2*(1-r2));
        double z = 1 - 2*r2;
        std::cout << x << " " << y << " " << z << std::endl;
    }
}