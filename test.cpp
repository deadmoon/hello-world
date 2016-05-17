#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

// Program to read the numbers from a file and find the median: 

using namespace std;


int main()
{
    double myinit[] = {3,5,7,11};
    std::vector<double> numbers(myinit,myinit + sizeof(myinit)/sizeof(double)); 

    std::cout<<"The size of the vector is: "<<numbers.size()<<std::endl; 

    std::vector<double>::size_type size;
    
    const vector<double>& nm2 = numbers;

    numbers.push_back(40);

    for(int i=0;i<numbers.size();i++) std::cout<<numbers.at(i)<<std::endl;     
    cout<<std::endl;     
    for(int i=0;i<nm2.size();i++) std::cout<<nm2.at(i)<<std::endl;     
	return 0; 

}
