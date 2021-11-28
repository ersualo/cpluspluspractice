/*Print parameter and num of parameters pass from operating system*/
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    cout<<"Arguments num: "<<argc - 1<<endl;
    for (int i = 1; i < argc; ++i) {
        cout<<"argument "<<i<<" is "<<argv[i]<<endl;
    }
}
