#include "pch.h"
#include "CppUnitTest.h"
#include "../5.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest552
{
	TEST_CLASS(UnitTest552)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			double t;
			 t=func(14, 1, depth);
			Assert::AreEqual(t,5.0);
		}
	};
}
