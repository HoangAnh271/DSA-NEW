#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <cstring>

using namespace std;

template <class T>
void HoanVi(T &a, T &b);
void GenerateRandomData(int a[], int n);
void GenerateSortedData(int a[], int n);
void GenerateReverseData(int a[], int n);
void GenerateNearlySortedData(int a[], int n);
void GenerateData(int a[], int n, int dataType);

int algorithmNameToNumber(char *argv);
int dataOrderToNumber(char *argv);
int outParameterToNumber(char *argv);
int *copyArray(int *a, int n);
void readInputFile(int *&array, int &n, string file_name);
void print_output_compare_mode(float running_time1, float running_time2, unsigned long long comparison1, unsigned long long comparison2);
void print_output_paramenter(int output_paramenter, float running_time, unsigned long long comparison);
void writeFile(int array[], int n, string file_name);
void sortWithAlgorithm(int array[], int n, int algorithm);
void countComparisonAlgorithm(int array[], int n, int algorithm, unsigned long long &count_comparison);
bool checkStringIsNumber(string str);

/*
    1 - Selection sort
    2 - Insertion sort
    3 - Bubble sort
    4 - Heap sort
    5 - Merge sort
    6 - Quick sort
    7 - Radix sort
    8 - Shaker sort
    9 - Shell sort
    10 - Counting sort
    11  - Flash sort
    */

void swap(int *a, int *b);
void selectionSort(int a[], int n);
void insertionSort(int array[], int n);
void bubbleSort(int a[], int n);
void merge(int arr[], int p, int q, int r);
void mergeSort(int arr[], int l, int r);
void heapify(int a[], int n, int i);
void heapSort(int a[], int n);
int partition(int array[], int low, int high);
void quickSort(int array[], int low, int high);
void countRadix(int a[], int n, int exp);
void radixSort(int a[], int n);
void shakerSort(int a[], int n);
void shellSort(int a[], int n);
void countSort(int a[], int n);
void flashSort(int a[], int n);

void countComparisonSelectionSort(int a[], int n, unsigned long long &count_comaprison);
void countComparisonInsertionSort(int array[], int n, unsigned long long &countComparison);
void countComparisonBubbleSort(int a[], int n, unsigned long long &count_compare);
void countComparisonMerge(int arr[], int p, int q, int r, unsigned long long &count_comparison);
void countComparisonMergeSort(int arr[], int l, int r, unsigned long long &count_comparison);
int countComparisonPartition(int array[], int low, int high, unsigned long long &count_comaprison);
void countComparisonQuickSort(int array[], int low, int high, unsigned long long &count_comaprison);
void countComparisonHeapify(int a[], int n, int i, unsigned long long &count_comaprison);
void countComparisonHeapSort(int a[], int n, unsigned long long &count_comaprison);
void countComparisonRadix(int a[], int n, int exp, unsigned long long &count_compare);
void countComparisonRadixSort(int a[], int n, unsigned long long &count_compare);
void countComparisonShakerSort(int a[], int n, unsigned long long &count_compare);
void countComparisonShellSort(int a[], int n, unsigned long long &count_compare);
void countComparisonCountSort(int a[], int n, unsigned long long &count_compare);
void countComparisonFlashSort(int a[], int n, unsigned long long &count_comaprison);

void command_line1(int argc, char *argv[]);
void command_line2(int argc, char *argv[]);
void command_line3(int argc, char *argv[]);
void command_line4(int argc, char *argv[]);
void command_line5(int argc, char *argv[]);
