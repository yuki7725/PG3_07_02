#include <stdio.h>
#include <thread>

static void thread1() {
	printf("thread1\n");
};

static void thread2() {
	printf("thread2\n");
};

static void thread3() {
	printf("thread3\n");
}

int main() {

	std::thread th1(thread1);
	th1.join();
	std::thread th2(thread2);
	th2.join();
	std::thread th3(thread3);
	th3.join();

	return 0;
}