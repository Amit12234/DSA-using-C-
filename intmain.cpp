#include<iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
    // Check if there are enough command-line arguments
    if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " <num1> <num2>" << std::endl;
        return 1; // Return 1 to signal an error
    }

    // Convert command-line arguments to integers
    int num1 = std::atoi(argv[1]);
    int num2 = std::atoi(argv[2]);

    // Perform the calculation
    int sum = num1 + num2;

    // Display the result
    std::cout << "Sum: " << sum << std::endl;

    return 0; // Return 0 to signal successful execution
}
