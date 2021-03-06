/*
 * Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
 * or more contributor license agreements. Licensed under the Elastic License;
 * you may not use this file except in compliance with the Elastic License.
 */

#ifndef INCLUDED_CDecayRateControllerTest_h
#define INCLUDED_CDecayRateControllerTest_h

#include <cppunit/extensions/HelperMacros.h>

class CDecayRateControllerTest : public CppUnit::TestFixture {
public:
    void testLowCov();
    void testOrderedErrors();
    void testPersist();

    static CppUnit::Test* suite();
};

#endif // INCLUDED_CDecayRateControllerTest_h
