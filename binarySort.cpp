int BinarySearch(int numbers[], int numbersSize, int key) {
   int mid;
   int low;
   int high;
   
   low = 0;
   high = numbersSize - 1;
   
   while (high >= low) {
      mid = (high + low) / 2;
      if (numbers[mid] < key) {
         low = mid + 1;
      }
      else if (numbers[mid] > key) {
         high = mid - 1;
      }
      else {
         return mid;
      }
   }
   
   return -1; // n
  
  //call the function in main 
  keyIndex = BinarySearch(numbers, NUMBERS_SIZE, key);
/* 
Binary search is an algorithm used to find the position of a specified input value within a sorted array. 
It works by repeatedly dividing in half the portion of the array that could contain the value, until the 
value is found or the remaining portion of the array is empty.

Binary search is best used when you have a sorted array and need to quickly find a specific value within that array.
Because binary search has a time complexity of O(log n), it is very efficient for large arrays, since the search time 
increases logarithmically with the size of the array. In contrast, linear search has a time complexity of O(n), making it much slower for large arrays.

So, if you have a large sorted array and need to search for a specific value within it, binary search is likely the best algorithm to use.
However, if the array is unsorted or the values are frequently changing, other algorithms may be more appropriate.
*/
