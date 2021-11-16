#include <iostream>
#include <vector>

using namespace std;
/* Returns the position of the key within the vector.
 * Returns -1 if key not found.
 */
int binarySearchHelper(vector<int> numbers, int key, int start, int end) {

    if (start > end) return -1;
    if (start == end) {
        if (numbers[start] == key) {
            return start;
        }
        else {
            return -1;
        }
    }
    // Search range larger than 1
    int mid = (start + end) / 2;
    if (numbers[mid] == key) {
        return mid;
    } else if (key < numbers[mid]) {
        return binarySearchHelper(numbers, key, start, mid-1);
    } else {
        return binarySearchHelper(numbers, key, mid+1, end);
    }

}


int binarySearch(vector<int> numbers, int key) {

    return binarySearchHelper(numbers, key, 0, numbers.size()-1);

}




int main() {

    cout << "Hello World!" << endl;

    vector<int> myNumbers { 1,2,3,5,7,8 };

    cout << "Position of 1 is: " << binarySearch(myNumbers,1) << endl;
    cout << "Position of 2 is: " << binarySearch(myNumbers,2) << endl;
    cout << "Position of 3 is: " << binarySearch(myNumbers,3) << endl;
    cout << "Position of 5 is: " << binarySearch(myNumbers,5) << endl;
    cout << "Position of 7 is: " << binarySearch(myNumbers,7) << endl;
    cout << "Position of 8 is: " << binarySearch(myNumbers,8) << endl;

}
