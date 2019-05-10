#include <iostream>
using namespace std;
void heapify(int arr[], int n, int i)
{
   int largest = i;
   int l = 2*i + 1;
   int r = 2*i + 2;
   if (l < n && arr[l] > arr[largest])
     largest = l;
   if (r < n && arr[r] > arr[largest])
     largest = r;
   if (largest != i)
   {
     swap(arr[i], arr[largest]);
     heapify(arr, n, largest);
   }
}
void printArray(int arr[], int n)
{
   for (int i=0; i<n; ++i)
     cout << arr[i] << " ";
   cout << "\n";
}
int main()
{
   int arr[] = {1,12,9,5,6,10};
   int n = sizeof(arr)/sizeof(arr[0]);
   for (int i = n / 2 - 1; i >= 0; i--)
     heapify(arr, n, i);
   cout << "Sorted array is \n";
   printArray(arr, n);
}