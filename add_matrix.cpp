#include <iostream>

int main(){
    
    int num1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9,};
    int num2[3][3] = {3, 2, 4, 5, 6, 4, 8, 7, 9,};
    int sum [3][3];
    int i, j;
    
    std::cout << "First Matrix: " << "\n";
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cout << num1[i][j] << "\t";
        }
        std::cout << "\n";
    }
    
    std::cout << "\n" << "Second Matrix: " << "\n";
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cout << num2[i][j] << "\t";
        }
        std::cout << "\n";
    }
    
    std::cout << "\n" << "Sum Matrix: " << "\n";
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            sum[i][j] = num1[i][j] + num2[i][j];
            std::cout << sum[i][j] << "\t";
        }
        std::cout << "\n";
    }
    
    return 0;
}
