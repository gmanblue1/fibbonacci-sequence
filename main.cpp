#include <iostream>
#include <vector>

int main(){
    std::vector<int> sequence;
    sequence.push_back(0);
    sequence.push_back(1);

    for(int i = 1; i <= 18; i++){
        int current = sequence[i];
        int below = sequence[i - 1];

        sequence.push_back(current + below);
    }

    for(int i = 0; i <= sequence.size() - 1; i++){
        std::cout << i + 1 << ": " << sequence[i] << std::endl;
    }
}