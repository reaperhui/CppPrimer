#include <iostream>

#include <vector>
#include <numeric>

using namespace std;

int main(int argc, char* argv[]){

    vector<int> vec_int{1, 2, 3, 4, 5};

    auto sum_vec = accumulate(vec_int.begin(), vec_int.end(), 0);
    cout << "The sum value of vec_int is: " << sum_vec << endl;

    return 0;
}