// MathLibTest.mm
// MathLibTest
//
// Copyright (c) 2022 Paul Godavari. All rights reserved. 


#import <XCTest/XCTest.h>


#include "math_lib/math_lib.h"


//--------------------------------------------------------------------------------------------------
// Utility functions

static const float kErrorMargin = 0.000001;

bool WithinMarginOfError(float test_value, float expected_value)
{
    bool result = false;
    if ((test_value >= (expected_value - kErrorMargin)) &&
        (test_value <= (expected_value + kErrorMargin))) {
        result = true;
    }
    return result;
}


@interface MathLibTest : XCTestCase
@end


@implementation MathLibTest

- (void) setUp
{
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void) tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void) testExample
{
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
}

- (void) testVector3UnitVectorMagnitude
{
    v3 p = { 2.0, 2.0, 2.0 };
    v3 unit = UnitVector(p);
    float magnitude = unit.Magnitude();
    XCTAssertTrue(WithinMarginOfError(magnitude, 1.0));
}

// - (void) testPerformanceExample
// {
//     // This is an example of a performance test case.
//     [self measureBlock:^{
//         // Put the code you want to measure the time of here.
//     }];
// }

@end
