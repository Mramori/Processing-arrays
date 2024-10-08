#include <iostream>
#include <vector>
#include <iomanip> // Для std::setprecision

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = matrix.size();
    int cols = matrix[0].size();

    std::vector<double> meanValues(cols, 0.0);

    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            meanValues[j] += matrix[i][j];
        }
        meanValues[j] /= rows; 
    }

    std::cout << "Среднее арифметическое по столбцам:" << std::endl;
    for (int j = 0; j < cols; ++j) {
        std::cout << std::fixed << std::setprecision(2) << meanValues[j] << " ";
    }
    std::cout << std::endl;

    return 0;
}
