//
//  main.cpp
//
//  Created by Vik on 10/7/24.
//C-STRINGS

//cstrings are arrays of characters terminated by a null character ('\0').
//code example:                 char greeting [] = "yo myb G i don't got my license";


//C++ string objects are part of the Standard Template Library (STL) and provide more functionality than C-strings.
//code example:                 #include <string>
//                              std::string message = "hi, youre going to jail";

// Password checker program.

#include <iostream>
#include <cstring>
#include <cctype>


int main() {
    const int MAX_PASSWORD_LENGTH = 50;
    char password[MAX_PASSWORD_LENGTH];
    
    std::cout << "Enter Password";
    std::cin.getline(password, MAX_PASSWORD_LENGTH);
    
    int passwordLength = std::strlen(password);
    
    bool hasUppercase = false;
    bool hasDigit = false;
    for (int i = 0; i < passwordLength; i++) {
        if (std::isupper(password[i])) {
            hasUppercase = true;
        }
        if (std::isdigit(password[i])) {
            hasDigit = true;
        }

    }
    bool isValid = (passwordLength >= 8) && hasUppercase && hasDigit;
        
        if (isValid) {
            std::cout << "Password is valid." << std::endl;
        } else {
            std::cout << "Password is invalid." << std::endl;
        }

        return 0;
    }
