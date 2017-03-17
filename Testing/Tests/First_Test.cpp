extern "C"
{
// include c header files for the modules you will be testing

//#include "ExampleModule.h"
}
#include "CppUTest/TestHarness.h"

TEST_GROUP(ExampleTest)
{
  //your first test group
  // put the objects here that you will be testing

  // ExampleModule exampleModule;
	void setup()
	{
    // gets called at the beginning of every test

    //ExampleModule_Init(&exampleModule);
	}

  void helperMethod()
  {
    // put as much functionality in helper methods as you can so your tests are crowded with code
  }

  void teardown()
  {
    //get called at the end of every test
  }
};

TEST(ExampleTest, Fail)
{
  //add some stuff to make this pass
  FAIL("Congrats! You failed your first test. To make me, pass head to /Testing/Tests/First_Test.cpp");
}
