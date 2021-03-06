#include "test.hpp"
#include "print.hpp"
#include "array.hpp"

using namespace ftl;

int main (int argc, char const *argv[])
{
	TEST_SUITE("Array", {
		TEST_CASE("push", {
			Array<int> a;
			a.push(123);
			
			TEST(a.size() == 1);
			TEST(a[0] == 123);
		});
		
		TEST_CASE("each", {
			Array<int> a;
			for (int i = 0; i < 10; ++i) {
				a.push(i);
			}
			a.each([](int n) { print("{0}\n", n); });
			TEST(true);
		});
	});
	auto str = format("A number: {0}, the same number: {0}, something else: {1}", 123, "hejsa");
	print("{0}\n", str);
	return 0;
}