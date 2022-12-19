#include <iostream>
#include <string>
using std::string;

string OnlyPrimeChars (const string &input){
    
    string result;
    
    for (int i =0; i<input.length(); i++){
        bool is_prime = true;
        char one_char = input[i];
        int int_value = static_cast<int>(one_char);

        for (int j = 2; j<int_value; j++){
            if (int_value % j ==0){
                is_prime=false;
                break;
            }
        }
        if (is_prime){
            result.push_back(one_char);
        }
    }
    return result;
}

int main() {
    std::string example = "abcdefghijklmnopqrstuwxyz";
    std::cout << OnlyPrimeChars(example) << std::endl;
    return 0;
}
