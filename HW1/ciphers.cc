#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int encript();
int decrypt();

int main(int argc, char *argv[]) {
    //DELOG
    cout << "Entering Main\n";

    if(6 != argc) {
        cout << "Incorrect number of arguments. Please use 5 arguments.\n";
        return -1;
    }

    string cipherType = argv[1];
    string inputFileName = argv[2];
    string outputFileName = argv[3];
    string keyfile = argv[4];
    string modeOfOperation = argv[5];

    if("B" != cipherType && "S" != cipherType && "b" != cipherType && "s" != cipherType) {
        cout << "Your first argument should either be 'B' for block cipher or 'S' for stream cipher. Please try again.\n";
    }

    ifstream myInputFile;
    ifstream myKeyfile;
    myInputFile.open(inputFileName);
    if(myInputFile){
        cout << "Input File exists.\n";
    }
    else {
        cout << "Input File doesn't exist.\n";
    }
    if(myKeyfile) {
        cout << "keyfile exists.\n";
    }
    else {
        cout << "keyfile doesn't exist.\n";
    }

    if("E" != modeOfOperation && "D" != modeOfOperation && "e" != modeOfOperation && "d" != modeOfOperation) {
        cout << "Your 5th argument should either be 'E' for encryption or 'D' for decryption. Please try again.\n";
    }




    int enc = encript();
    int dec = decrypt();

    //DELOG
    cout << "Exiting Main\n";
    return 0;
}

int encript() {
    //DELOG
    cout << "Entering encript()\n";

    //DELOG
    cout << "Exiting encript()\n";
    return 1;
}

int decrypt() {
    //DELOG
    cout << "Entering decript()\n";

    //DELOG
    cout << "Exiting encript()\n";
    return 2;
}
