#include <stdio.h>
#include <iostream>

using namespace std;

class heap {
  private:
    int size;
    int d;
    int* arr;
    int n;
  public:
    int min_child(int i);
    void up(int i);
    void down(int i);
    heap(int _size, int _d);
    ~heap();
    void hilling();
    void print();
    void insert(int key);
    int deletemin();
    void swap(int i, int p);
};
