#include <iostream>
#include <fstream>

using namespace std;

void writeFile(string stringToWrite, string fileName);
string readFile(string fileName);

int main() {
    // 1. Define variables
    string stringToWrite = "Hello There. \n"
        "I hope that whoever is reading this is doing well :) \n"
        "Sincerely, Dominic Pace";
    string fileName = "testFileName";


    // 2. Write lines to a file
    writeFile(stringToWrite, fileName);


    // 3. Read the file and console log the results.
    readFile(fileName);
}

/**
 * Method used to write text to a specified file name.
 *
 * @param stringToWrite - Given string to write to text file
 * @param fileName - Name of the file to write
 */
void writeFile(string stringToWrite, string fileName) {
    // open a new file stream to the specified text doc
    ofstream fout(fileName + ".txt");

    // write the string to the file.
    fout << stringToWrite << endl;

    // close the file.
    fout.close();
}

/**
 * Method used to read text from a specified text file.
 *
 * @param fileName - Name of the file to write
 */
string readFile(string fileName) {
    // open a new file stream for the file name given
    ifstream fin(fileName + ".txt");

    // read each line of the file
    string temporaryLine;
    while(getline(fin, temporaryLine))
        cout << temporaryLine << endl;

    // close the file.
    fin.close();
}
