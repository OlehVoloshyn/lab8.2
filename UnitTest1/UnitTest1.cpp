#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool t;
			string str="sd(3(9)3)";
			t = errorBrackets(str);
			Assert::AreEqual( t , true);
		}
	};
}
