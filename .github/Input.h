//
// Created by PatrickMaillard on 17.11.2022.
//

#include <string>
#include <iostream>
#include <iomanip> 	// setw
#include <limits> 	// remove it if you use it in the main.cpp file

#ifndef LAB05_REFACTOR_ALEXANDER_PATRICK_INPUT_H
#define LAB05_REFACTOR_ALEXANDER_PATRICK_INPUT_H

/// This function asks user for an integer value between Min and Max
/// \param MIN             Min number user can enter
/// \param MAX             Max number user can enter
/// \param MSG_USER 	   	Display sentence to request input
/// \param MSG_ERROR       Display sentence if input is incorrect
/// \return                user input

template <typename T>
T userInputRange(T MIN, T MAX, const std::string& MSG_USER, const std::string&
MSG_ERROR_){

    T userInput         ;

    // loop control variable
    bool errorUserInput ;

    do {

        // message to user
        std::cout << MSG_USER << " [" << MIN << ".." << MAX << "] : ";

        // read user input
        std::cin >> userInput;

        // check errors in user input
        errorUserInput = std::cin.fail() or userInput < MIN or userInput > MAX;
        if(errorUserInput)
        {
            // error message if user input is wrong
            std::cout << MSG_ERROR_ << std::endl;
            std::cin.clear();
        }
        // clear buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while(errorUserInput);

    return userInput;
}

#endif //LAB05_REFACTOR_ALEXANDER_PATRICK_INPUT_H
