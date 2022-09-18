#include "rtweekend.h"
#include <iostream>
#include <iomanip>

int main() {
    int N = 1000000;
    float sum = 0.0;
    for (int i = 0; i < N; i++) {
        vec3 v = random_cosine_direction();
        sum += v.z()*v.z()*v.z() / (v.z()/pi);
    }

    std::cout << std::fixed << std::setprecision(12);
    std::cout << "Pi/2     = " << pi/2 << std::endl;
    std::cout << "Estimate = " << sum/N << std::endl;
}