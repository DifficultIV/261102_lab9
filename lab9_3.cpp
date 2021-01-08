//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
    int count = 0;
    float sum,mean,std,sum2;
    string text;
    ifstream source;
    source.open("score.txt");
    while(getline(source,text)){
    sum += atof(text.c_str());
    count++;
    }
    mean = sum/count;
    source.close();
    source.open("score.txt");
    while(getline(source,text)){
    sum2 += atof(text.c_str()) * atof(text.c_str());
    }
    std = sqrt((sum2/count)-pow(mean,2));
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << std;
}