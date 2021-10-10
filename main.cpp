#include <iostream>
#include <string>//for printing std::string
int main()

{
	//A string is a group of characters and an array of const chars
	const char* name = "Caleb";//C style string
	//how string actually works below:
	//String without null terminating character below:

	char name2[5] = { 'C','a','l','e','b' };// string is just an array of characters
	//The above doesn't have an null termination character at the end cout will not now where the string ends and will acess memory that is not a part of your string
	std::cout << name2 << std::endl;//output => Caleb + somejunk //this is because null terminating char is not present at the end of array
	//String with null terminating character below:

	char name3[6] = { 'C','a','l','e','b','\0' };//null terminating char '\0' or '0' can be used 
	std::cout << name3 << std::endl;//output => Caleb // because null terminating char is present cout knows where array ends 

	//std::string class in c++ is takes an array of const chars and a bunch of functions to manuplate it:
	//std::string has a constructor  that takes const char array
	std::string name4 = "Caleb";
	name4.size();//gives size of string and there are many more methods in std::string class
	
  //appending to std::string
  
  	//"Ever thing inside these double quotes becomes const char array"
   //std::string namee = "Caleb" +"Hello";//This will give error because adding const char array to const char array 
	std::string namee = "Caleb";
	namee += " Hello";//This will work because adding a ptr to a actual string
	std::cout << namee << std::endl;
//You can also use the below
	std::string namee2 = std::string("Caleb")+" Hello";// This will work because constructor will convert const char array  to string, adding a ptr to string
	std::cout << namee2 << std::endl;
    std::cin.get();

}