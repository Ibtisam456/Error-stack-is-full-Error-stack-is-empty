#include <iostream>
#include <array>

const int MAX_SIZE = 100;

class Stack {
 public:
  Stack() : top_(-1) {}

  bool IsEmpty() {
    return top_ == -1;
  }

  void Push(int x) {
    if (IsFull()) {
      std::cout << "Error: stack is full" << std::endl;
      return;
    }
    top_++;
    data_[top_] = x;
  }

  void Pop() {
    if (IsEmpty()) {
      std::cout << "Error: stack is empty" << std::endl;
      return;
    }
    top_--;
  }

 private:
  std::array<int, MAX_SIZE> data_;
  int top_;
};

int main() {
  Stack s;
  s.Push(5);
  s.Push(10);
  std::cout << s.IsEmpty() << std::endl;  // Outputs: 0
  s.Pop();
  s.Pop();
  std::cout << s.IsEmpty() << std::endl;  // Outputs: 1
  return 0;
}

