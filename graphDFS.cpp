#include "solution.hpp"

int main(){
    Solution solution;
    std::vector<std::vector<int>> input={{1,1,0},{1,1,0},{0,0,1}};
    int output=solution.findCircleNum(input);
    std::cout<<"The Answer is: "<<output<<std::endl;
    return 0;
}