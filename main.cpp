#include <iostream>
#include <thread>

int num_threads = 10;

void foo(int n) {
	std::cout << "thread " << n << "\n";
}

int main() {

	std::thread t[num_threads];

	for (int i = 0; i < num_threads; ++i) {
		t[i] = std::thread(foo, i);
	}

	std::cout << "main thread\n";

	for (int i = 0; i < num_threads; ++i) {
		t[i].join();
	}

	return 0;
}