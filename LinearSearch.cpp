// one dimension array, rcm when work with the small amount of database
int LinearSearch(int numbers[], int numbersSize, int key) {
   int i;
   
   for (i = 0; i < numbersSize; ++i) {
      if (numbers[i] == key) {
         return i;
      }
   }
   
   return -1; /* not found */
}
