#include <iostream>
#include <string>

int length(std::string string){
    int i=0;
    while (string[i])
    {
        i++;
    }
    return i;
}

bool is_palindrome(std::string string){
    bool is = true;
    int len;
    len = length(string);
    for (int i = 0; i < (int) len/2; i++)
    {
        if(string[i]!=string[len-1-i]){
            is =false;
        }
    }
    return is;
    
}

int main(){
    std::cout << is_palindrome("kayak") << std::endl;
}