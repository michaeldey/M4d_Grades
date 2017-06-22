
#include <cstdlib>
#include <iostream>
#include <array>

using namespace std;

int main() {

    int arr1[2][2] = {{1,2},{3,4}};
    
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j<2; j++)
        {
            std::cout<<arr1[i][j]<<" ";
        }
        std::cout<<endl;
    }
    
    std::cout<<"Swapping"<<endl;
    swap(arr1[0], arr1[1]);
    
        for (int i = 0; i<2; i++)
    {
        for (int j = 0; j<2; j++)
        {
            std::cout<<arr1[i][j]<<" ";
        }
        std::cout<<endl;
    }

    return 0;
}

