#include <iostream>
#include <cstdlib>
#include <string>
#include<limits>
#include <vector>
#include <sstream>
#include<numeric>
#include <ctime>
#include <cmath>
#include <fstream>



int main()
{

    std::ofstream writeToFile;
    std::ifstream readFromFile;
    std::string txtToWrite = "";
    std::string txtFromFile = "";

    /*
    writeToFile.open("test.txt", std::ios_base::out | std::ios_base::trunc);
    if(writeToFile.is_open()){
        writeToFile << "Beginning of File \n";
        std::cout << "Enter data to write: ";
        std::getline(std::cin, txtToWrite);
        writeToFile << txtToWrite;
        writeToFile.close();
    }
    */

   readFromFile.open("test.txt", std::ios_base::in);
   if(readFromFile.is_open()){
       while (readFromFile.good())
       {
           std::getline(readFromFile, txtFromFile);
           std::cout << txtFromFile << "\n";
       }
       readFromFile.close();
   }
    
    return 0;
}