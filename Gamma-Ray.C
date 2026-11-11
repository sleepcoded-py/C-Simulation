#include <iostream>
#include <iomanip>

struct GammaRayProperties {
    double energyJoules;
    double energyMeV;
    double frequencyHz;
};

// Function to calculate gamma-ray properties from wavelength (in meters)
GammaRayProperties calculateGammaRay(double wavelengthMeters) {
    const double h = 6.62607015e-34; // Planck's constant (J*s)
    const double c = 299792458.0;    // Speed of light (m/s)
    const double joulesToMeV = 6.241509074e12; // Conversion factor from J to MeV

    GammaRayProperties props;
    props.frequencyHz = c / wavelengthMeters;
    props.energyJoules = h * props.frequencyHz;
    props.energyMeV = props.energyJoules * joulesToMeV;

    return props;
}

int main() {
    // Example: A typical gamma-ray wavelength (1 picometer = 1e-12 meters)
    double wavelength = 1.0e-12; 

    GammaRayProperties gamma = calculateGammaRay(wavelength);

    std::cout << std::scientific << std::setprecision(4);
    std::cout << "Wavelength: " << wavelength << " meters\n";
    std::cout << "Frequency:  " << gamma.frequencyHz << " Hz\n";
    std::cout << "Energy:     " << gamma.energyJoules << " Joules\n";
    std::cout << "Energy:     " << gamma.energyMeV << " MeV\n";

    return 0;
}
