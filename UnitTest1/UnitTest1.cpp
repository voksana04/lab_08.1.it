#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\Project_8.1.it\Project_8.1.it\lab_8.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestCountPairs)
		{
			char s1[] = "nonono";
			Assert::AreEqual(5, CountPairs(s1));

			char s2[] = "hello";
			Assert::AreEqual(0, CountPairs(s2));

			char s3[] = "onon";
			Assert::AreEqual(3, CountPairs(s3));
		}


		TEST_METHOD(TestReplacePairsNoReplacement)
		{
			char s[] = "hello";
			char expected[] = "hello";
			ReplacePairs(s);
			Assert::IsTrue(strcmp(expected, s) == 0);
		}
	};
}
