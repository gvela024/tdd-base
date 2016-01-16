extern "C"
{
// C headers
}
#include "CppUTest/TestHarness.h"

TEST_GROUP(Test)
{
	void setup()
	{

	}
};

TEST(Test, Fail)
{
	FAIL("ME");
}
