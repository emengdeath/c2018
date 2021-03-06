#include<bits/stdc++.h>
#pragma comment(linker, "/STACK:102400000,102400000")
using namespace std;
struct SNeuronLayer// 神经层
{
    vector<double>w;
    SNeuronLayer(int Numvec=0);
    SNeuronLayer(vector<double>d);
    void change(vector<double>&d);
};
struct CNeuralNet// 神经网络对象
{
    vector<SNeuronLayer>Layer;
    vector<vector<double> >Output;
    double loss;
    void addLayer(int Numvec);
    void forward(vector<double> Input);
    void backward(vector<double> RealOutput);
    void load(string&filename);
    void save(string&filename);
    vector<double> loadData(string&filename,int sum);
    void train(string&list,string&model,bool sig,bool sig1);
    void work(string&list,string&model,bool sig);
};

