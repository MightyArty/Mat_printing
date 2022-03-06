#include <iostream>
#include <stdexcept>
#include <string>
#include "mat.hpp"

using namespace std;


/**
 * @brief Simple example
 * input = 9 7 @ -
 * the output would be: 
 * @@@@@@@@@
 * @-------@
 * @-@@@@@-@
 * @-@---@-@
 * @-@@@@@-@
 * @-------@
 * @@@@@@@@@
 * so, first compute the first half, and then reverse and compute the second half
 */

/**
 * @brief Function to check if the number is odd or even
 */
bool even_or_odd(int n){
    bool res = false;
    if (n % 2 == 0){
        res = true; // even
    } // else -> odd
    return res;
}

/**
 * @brief Making a combination of two characters for given lentgh of string
 * for example -> @#@#@#@#@#@#...
 */
string combined(int length, char first, char second){
    string out = "";
    if (length > 0){
        for (int i = 0 ; i < length ; i++){
            if (even_or_odd(i) == true){    // even
                out = out + first;
            }
            else {
                out = out + second;
            }
        }
        return out;
    }
    else {
        throw runtime_error("enter a valid length!");
    }
}

/**
 * @brief Making line of the matrix
 * using combined function till the half of the matrix
 * and then reverse the second half
 */
string help_for_mat(int length, char first, char second, int runner){
    
}

namespace ariel{
    string mat(int column, int row, char first, char second){
        /**
         * @brief Checking the correction of the user input
         * if not correct -> throw runtime error
         */
        if (column % 2 == 0 || row % 2 == 0){
            throw runtime_error("the size should be odd!");
        }
        if (first == second){
            throw runtime_error("the chars should be different!");
        }
        if(row <= 0 || column <= 0){
            throw runtime_error("the size of the matrix should be greater than 0");
        }
        if((first <= 33 && first >= 126) && (second <= 33 && second >= 126)){
            throw runtime_error("enter valid characters!");
        }

        /**
         * @brief The algorighm
         */

    }
}