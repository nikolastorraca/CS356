#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int blockCipher();
int streamCipher();
uint8_t readData();

int main(int argc, char *argv[]) {
    //DELOG
    cout << "Entering Main\n";

    /*if(6 != argc) {
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
    myKeyfile.open(keyfile);
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
    */


    //int enc = encript();
    //int dec = decrypt();
    uint8_t size = readData();
    //DELOG
    cout << "Exiting Main\n";
    return 0;
}

uint8_t readData() {
    // block mode
    // read file into buffer with 16-byte boundary
    // pad buffer
    // return buffer



    // stream mode
    // read one byte
    // return one byte

}

int blockCipher() {
    //DELOG
    cout << "Entering blockCipher()\n";

    // read data

    // assumptions about arrays (the arrays are type 'byte' or 'u8' or 'unsigned char'):
    //  data is a multiple of 16 bytes and padded with 0x81 (endianness?)
    //  key is 16 bytes
    //  output is a multiple of 16 bytes
    // for i 0 to 16:
    //    outputByte[i] = keyByte[i] ^ dataByte[i]
    
    // in block mode, the file will be on an 8-bit boundary. you have to pad to the next 16-byte boundary with 0x81
    // for example, if the file is 20 bytes, it should look like this:
    // 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 11 12 13
    // |---------------------------------------------| BLOCK 1
    //                                                 |---------| BLOCK 2, but this needs to be padded
    //                                                 10 11 12 13 81 81 81 81 81 81 81 81 81 81 81 81
    //                                                 |---------------------------------------------| BLOCK 2 for real
    // return the array of data and make sure it is % 16 == 0
    //DELOG
    cout << "Exiting blockCipher()\n";
    return 1;
}

int streamCipher() {
    //DELOG
    cout << "Entering decript()\n";

    // in stream mode, the input stream will be 8 bits at a time per the instructions, but this isn't always true with stream ciphers FYI
    // bitNum = 0; (or start at 7? then you would have to shift right)
    // byte data
    // while (bitNum < 8) // you may have to check for >= 0, but make sure to use a signed counter type
    //    wait for bits
    //    inputBit = ? (should be a 0x00 or 0x01) read up to 8 bits at a time
    //    data = data | (inputBit << bitNum++) // you may have to shift right (>>) and post decrement (--)
    //
    //    data = 0x51       inputBit is 0x01        bitNum = 7
    //    data = 01010001   inputBit = 00000001     bitNUm = 7
    //    shifted           inputBit = 10000000
    //    bitwise OR        data     = 11010001 (0xD1)
    //    bitNum++ = 8
    // return data (0xD1)

    //DELOG
    cout << "Exiting encript()\n";
    return 2;
}
