#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-6.3.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int B[4] = { -3,4,1,-2 };
			int S = NeSumArr(B, 4);
			Assert::AreEqual(S, -5);
		}
	};
}