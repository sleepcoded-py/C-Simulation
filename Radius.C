#include <iostream>
#include <iomanip>

// Function to calculate the Schwarzschild radius in meters
double calculateSchwarzschildRadius(double massKg) {
    const double G = 6.67430e-11;   // Gravitational constant (m^3 kg^-1 s^-2)
    const double c = 299792458.0;   // Speed of light in vacuum (m/s)

    return (2.0 * G * massKg) / (c * c);
}

int main() {
    // Example: Mass of the Sun in kilograms (~1.989 x 10^30 kg)
    double solarMass = 1.989e30;
    double blackHoleMass = solarMass * 10.0; // 10 solar mass black hole

    double radius = calculateSchwarzschildRadius(blackHoleMass);

    std::cout << std::scientific << std::setprecision(5);
    std::cout << "Black Hole Mass: " << blackHoleMass << " kg\n";
    std::cout << "Schwarzschild Radius: " << radius << " meters\n";

    return 0;
}
