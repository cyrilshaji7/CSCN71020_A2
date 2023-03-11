#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Cyril\source\repos\CSCN71020_A2\BCSRec\main.c"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(perimeter_test)
        {
            int expected = 8;

            // running the perimeter function
            int length = 2, width = 2;
            int result = getPerimeter(&length, &width);

            Assert::AreEqual(expected, result);
        }

        TEST_METHOD(area_test)
        {
            int expected = 6;

            // running the area function 
            int length = 2, width = 3;
            int result = getArea(&length, &width);

            Assert::AreEqual(expected, result);
        }

        TEST_METHOD(setlength_test1)
        {
            int input = 0, length = 1, expected = 1;

            // calling the function setLength
            setLength(input, &length);
            Assert::AreEqual(length, expected);
        }

        TEST_METHOD(setlength_test2)
        {
            int input = 15, length = 1, expected = 15;
            // calling the function setLength
            setLength(input, &length);
            Assert::AreEqual(length, expected);
        }

        TEST_METHOD(setlength_test3)
        {
            int input = 102, length = 1, expected = 1;

            // calling the function setLength
            setLength(input, &length);
            Assert::AreEqual(length, expected);
        }

        TEST_METHOD(setwidth_test1)
        {
            int input = 0, width = 1;

            // calling the function setWidth
            setWidth(input, &width);
            Assert::AreNotEqual(input, width);
        }

        TEST_METHOD(setwidth_test2)
        {
            int input = 100, width = 1;

            // calling the function setWidth
            setWidth(input, &width);
            Assert::AreNotEqual(input, width);
        }

        TEST_METHOD(setwidth_test3)
        {
            int input = 34, width = 1;

            // calling the function setWidth
            setWidth(input, &width);
            Assert::AreEqual(input, width);
        }
    };
}