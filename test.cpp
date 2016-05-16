#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

// Program to read the numbers from a file and find the median: 


int main()
{

    std::vector<double> numbers(4,10); 
    std::cout<<"The size of the vector is: "<<numbers.size()<<std::endl; 
    typedef std::vector<double>::size_type vec_sz; 
    for(int i=0;i<numbers.size();i++) std::cout<<numbers.at(i)<<std::endl;     
    
    std::cout<<sizeof(vec_sz); 
	return 0; 

}
