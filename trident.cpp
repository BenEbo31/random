#include <iostream>

int main(){
    
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
        std::cout << "*    ";
        }
        std::cout << std::endl;
    }
    
    for (int i = 0; i < 6; i++){
        std::cout << "* ";

    }
    std::cout << std::endl;
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 1; j++){
        std::cout << "     *";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
