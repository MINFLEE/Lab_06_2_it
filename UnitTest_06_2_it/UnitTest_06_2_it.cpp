#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_2_it/Lab_06_2_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest062it
{
	TEST_CLASS(UnitTest062it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 13;
			int a[n] = { -32, 4, 7, -6, 3 };
			int expectation = CalculateAverageOfEvenIndices(a, n);
			int actual = 6;
			Assert::AreEqual(expectation, actual);
		}
	};
}
