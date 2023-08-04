#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::fstream words;
    words.open("C:\\Users\\Rhan\\CLionProjects\\untitled2\\words.txt");

    std::string word_user, word;
    int count=0;
    std::cout<<"What word to find?"<<std::endl;
    std::cin>>word_user;

    while (!words.eof()) {
        words>>word;
        if (word_user==word) {
            count++;
        }
    }

    std::cout<<"Number of words in the file - "<<count;
    words.close();
}
