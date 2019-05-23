#include <Arduino.h>
#include "car.h"
#include "unity.h"


#ifdef UNIT_TEST

Car car;

// void setUp(void) {
// // set stuff up here
// }

// void tearDown(void) {
// // clean stuff up here
// }

void test_function_car_forward(void) {
    TEST_ASSERT_EQUAL(0, car.forward());
}

/*
void test_function_calculator_subtraction(void) {
    TEST_ASSERT_EQUAL(20, calc.sub(23, 3));
}

void test_function_calculator_multiplication(void) {
    TEST_ASSERT_EQUAL(50, calc.mul(25, 2));
}

void test_function_calculator_division(void) {
    TEST_ASSERT_EQUAL(32, calc.div(100, 3));
}
*/
void setup() {
    UNITY_BEGIN();
    RUN_TEST(test_function_car_forward);
    /*RUN_TEST(test_function_calculator_subtraction);
    RUN_TEST(test_function_calculator_multiplication);
    RUN_TEST(test_function_calculator_division);
    */
    UNITY_END();
}

void loop() {
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(500);
}

#endif