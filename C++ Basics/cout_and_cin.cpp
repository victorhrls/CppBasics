// Cout and Cin


/* COUT -> Prints data to the console and stands for Character output using <<
*When using std::cout we are using buffers
*that means that statements in our program request that output be sent to the console. 
*However, that output is typically not sent to the console immediately. Instead, the requested output “gets in line”, 
*and is stored in a region of memory set aside to collect such requests (Buffer)
*Until the buffer is FLUSHED
*meaning all of the data collected in the buffer is transferred to its destination (in this case, the console)
*therefore , using std::endl needs to flush and buffer at the end of EACH LINE
*/

// '\n' sends the text to the next line but does not require a FLUSH : therefore will perform better

/* CIN -> Allows the user to input data and stands for Character Input using >>
*
*
*
*
*
*
*
*
*/

#include <iostream> // for std::cout and std::endl and cin

int main(){

    int x{5};

    // first the use of cout

    std::cout << "x is equal to: " << x << '\n';   //when alone , should be '' , not ""
    std::cout << "And that is all, folks! \n";

    // now the use of cin

    std::cout <<" please enter a number \n";

    int y{};

    std::cin >> y; // get the number from the keybord into the variable y

    std::cout <<" The number is: " << y << '\n';



    return 0;
}
