#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_1_it/lab_6_1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestSum)
        {           
            int b[21] = { 62,  26,  16,  20,  64,  11,  71,  90,  80,  87,  31,  28,  63,  82,  60,  18,  35,  21,  73,  48,  15 };
            int expected_sum = 62 + 26 + 16 + 20 + 64 + 11 + 71 + 90 + 80 + 31 + 28 + 82 + 60 + 18 + 35 + 73 + 48; 
            int actual_sum = Sum(b, 21);
            Assert::AreEqual(expected_sum, actual_sum);
        }

        TEST_METHOD(TestCount)
        {
            int b[21] = { 62,  26,  16,  20,  64,  11,  71,  90,  80,  87,  31,  28,  63,  82,  60,  18,  35,  21,  73,  48,  15 };
            int expected_count = 17; 
            int actual_count = Count(b, 21);
            Assert::AreEqual(expected_count, actual_count);
        }
	};
}
