#include "pch.h"
#include "CppUnitTest.h"
#include "..\pr.13.2.1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1321
{
	TEST_CLASS(UnitTest1321)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = max(sqr(-3), 2);
			Assert::AreEqual(a, 9);
		}
	};
}
