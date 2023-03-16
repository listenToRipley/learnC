#include <iostream>
#include <vector>

int main() {
    std::vector<double> temp_list = {32.5, 105.0, 37.7, -1.5};

    std::cout << temp_list[3] << std::endl; 

    temp_list[3] = 23.5;

    std::cout << temp_list[3] << std::endl; 
    std::cout << temp_list.at(1) << std::endl; 

    temp_list.at(1) = 117.3;

    std::cout << temp_list.at(1) << std::endl; 

    temp_list.push_back(105.2);

    std::cout << temp_list.size() << std::endl; 
}