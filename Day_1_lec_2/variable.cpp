//variables:- containers to store the data
// PRIMITIVES DATATYPES;-

#include <iostream>
using namespace std;

int main()
{
    int age= 21;  //int stores 4 bytes
    cout<<age<<endl;
    cout<<sizeof(age)<<endl;   //sizeof() --> is a function used to get size of the variable in bytes
    
    char grade='A'; //char stores 1 byte 
    cout << grade<<endl;
    cout<<sizeof(grade)<<endl;
    
    float PI = 3.14f; //4 byte
    cout<< PI <<endl;
    cout<< sizeof(PI) <<endl;

    bool isSafe = false; // 1byte
    cout<< isSafe<<endl;  // in bool= true -> 1 & false -> 0

    double price = 100.99; //8 byte
    cout<< price<<endl;

    return 0;
}