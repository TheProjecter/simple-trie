/*
 * Copyright (c) 2012, Ranjith TV
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause ("BSD New" or "BSD Simplified") license.
 * You may obtain a copy of the License at
 *
 * http://www.opensource.org/licenses/BSD-3-Clause
 *
 */

#include "trie.h"
#include "trietest.h"

namespace {

void test2() {
    std::cout << "Executing Test Case 2 ... ";

    rtv::Trie<char, std::string, std::less<char>, rtv::VectorItems<char, std::string, std::less<char>, 256> > dictionary('$');
            
    TrieTestCases::instance()->testSuite(dictionary);
    
    std::cout << "Succeeded" << std::endl;
}

bool testCaseAdded = TrieTestCases::instance()->addTestCase(test2);
}