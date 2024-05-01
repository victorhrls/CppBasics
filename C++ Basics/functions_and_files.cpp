//  A function is a reusable sequence of statements designed to do a particular job.

#include <iostream> 

// a function to print something 

void print()
{
  std::cout << "Inside the function Print \n";
}

// now main


int main()
{
    std::cout << "Starting Main \n";
    print(); // interrupt main to call print
    std::cout << "ending Main \n";

    return 0;
}

// Be aware that functions cannot be nested in C++. Thus , you should always create a function outside of any other function

/* a function can also return values 

#include <iostream>

int getValueFromUser() // this function now returns an integer value
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input; // return the value the user entered back to the caller
}

int main()
{
	int num { getValueFromUser() }; // initialize num with the return value of getValueFromUser()

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}



*/
