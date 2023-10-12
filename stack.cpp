#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == MAX_SIZE - 1) {
            cout << "Error: Stack overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Error: Stack underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Error: Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.peek() << endl; // Output: 3
    s.pop();
    cout << s.peek() << endl; // Output: 2
    s.pop();
    cout << s.peek() << endl; // Output: 1
    s.pop();
    s.pop(); // Output: Error: Stack underflow
    return 0;
}