// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: June 2021
// This program get marks in porcentage and shows the average

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>
#include <array>
#include <list>
#include <map>
#include <string>
#include <cstring>
#include <locale>

std::list<std::string> stringConverterHex(std::string enteredString) {
    // This function outputs the average of a list
    std::list<std::string> hexadecimal;
    std::string temp;

    std::map<char, std::string> dictionary;

    dictionary[' '] = "0x20";
    dictionary['!'] = "0x21";
    dictionary['#'] = "0x23";
    dictionary['$'] = "0x24";
    dictionary['%'] = "0x25";
    dictionary['&'] = "0x26";
    dictionary['"'] = "0x27";
    dictionary['('] = "0x28";
    dictionary[')'] = "0x29";
    dictionary['*'] = "0x2a";
    dictionary['+'] = "0x2b";
    dictionary[','] = "0x2c";
    dictionary['-'] = "0x2d";
    dictionary['.'] = "0x2e";
    dictionary['/'] = "0x2f";
    dictionary['0'] = "0x30";
    dictionary['1'] = "0x31";
    dictionary['2'] = "0x32";
    dictionary['3'] = "0x33";
    dictionary['4'] = "0x34";
    dictionary['5'] = "0x35";
    dictionary['6'] = "0x36";
    dictionary['7'] = "0x37";
    dictionary['8'] = "0x38";
    dictionary['9'] = "0x39";
    dictionary[':'] = "0x3a";
    dictionary[';'] = "0x3b";
    dictionary['<'] = "0x3c";
    dictionary['='] = "0x3d";
    dictionary['>'] = "0x3e";
    dictionary['?'] = "0x3f";
    dictionary['@'] = "0x40";
    dictionary['A'] = "0x41";
    dictionary['B'] = "0x42";
    dictionary['C'] = "0x43";
    dictionary['D'] = "0x44";
    dictionary['E'] = "0x45";
    dictionary['F'] = "0x46";
    dictionary['G'] = "0x47";
    dictionary['H'] = "0x48";
    dictionary['I'] = "0x49";
    dictionary['J'] = "0x4a";
    dictionary['K'] = "0x4b";
    dictionary['L'] = "0x4c";
    dictionary['M'] = "0x4d";
    dictionary['N'] = "0x4e";
    dictionary['O'] = "0x4f";
    dictionary['P'] = "0x50";
    dictionary['Q'] = "0x51";
    dictionary['R'] = "0x52";
    dictionary['S'] = "0x53";
    dictionary['T'] = "0x54";
    dictionary['U'] = "0x55";
    dictionary['V'] = "0x56";
    dictionary['W'] = "0x57";
    dictionary['X'] = "0x58";
    dictionary['Y'] = "0x59";
    dictionary['Z'] = "0x5a";
    dictionary['['] = "0x5b";
    dictionary[']'] = "0x5d";
    dictionary['^'] = "0x5e";
    dictionary['_'] = "0x5f";
    dictionary['`'] = "0x60";
    dictionary['a'] = "0x61";
    dictionary['b'] = "0x62";
    dictionary['c'] = "0x63";
    dictionary['d'] = "0x64";
    dictionary['e'] = "0x65";
    dictionary['f'] = "0x66";
    dictionary['g'] = "0x67";
    dictionary['h'] = "0x68";
    dictionary['i'] = "0x69";
    dictionary['j'] = "0x6a";
    dictionary['k'] = "0x6b";
    dictionary['l'] = "0x6c";
    dictionary['m'] = "0x6d";
    dictionary['n'] = "0x6e";
    dictionary['o'] = "0x6f";
    dictionary['p'] = "0x70";
    dictionary['q'] = "0x71";
    dictionary['r'] = "0x72";
    dictionary['s'] = "0x73";
    dictionary['t'] = "0x74";
    dictionary['u'] = "0x75";
    dictionary['v'] = "0x76";
    dictionary['w'] = "0x77";
    dictionary['x'] = "0x78";
    dictionary['y'] = "0x79";
    dictionary['z'] = "0x7a";
    dictionary['{'] = "0x7b";
    dictionary['|'] = "0x7c";
    dictionary['}'] = "0x7d";
    dictionary['~'] = "0x7e";

    // https://www.geeksforgeeks.org/convert-string-char-array-cpp/
    int lengthOfEnteredString = enteredString.length();

    // declaring character array
    char char_array[lengthOfEnteredString + 1];

    // copying the contents of the
    // string to char array
    strcpy(char_array, enteredString.c_str());

    for (char character : char_array) {
        temp = dictionary[character];
        hexadecimal.push_back(temp);
    }

    return hexadecimal;
}

int main() {
    // This function is the main function
    std::string input;
    std::list<std::string> result;
    std::string output;
    std::list<char> listOfChar;

    output = "";

    std::cout << "Insert a string: ";
    getline(std::cin, input);

    result = stringConverterHex(input);

    for (std::string temp : result) {
        output = output + temp + " ";
    }

    std::cout << "\nTranslation in Hexadecimal: " << output << std::endl;

    std::cout << "\nDone." << std::endl;
}
