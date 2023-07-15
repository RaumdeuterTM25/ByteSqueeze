#include <iostream>
#include "huffman.hpp"
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Failed to detect Files";
		exit(1);
	}
    
    // by default the argv[0] is program name itself (./main) in this case , which will be made after g++ encode.cpp huffman.cpp -o main
    
    huffman f(argv[1], argv[2]);
    f.compress();
    cout << "Compressed successfully" << endl;
    
    return 0;
}