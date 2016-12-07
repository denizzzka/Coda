/**
 *
 * .. invisible:
 *     _   _ _____ _     _____ _____
 *
 *    | | | |  ___| |   |  ___/  ___|
 *
 *    | | | | |__ | |   | |__ \ `--.
 *
 *    | | | |  __|| |   |  __| `--. \
 *
 *    \ \_/ / |___| |___| |___/\__/ /
 *
 *     \___/\____/\_____|____/\____/
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *   http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License
 *
 */

#ifndef DISAMBIGUATOR_TESTER
#define DISAMBIGUATOR_TESTER

#include "DisambiguatorSettingsHolder.h"
#include "ITokenizer.h"

namespace Disambiguation
{

using Tokenization::ITokenizer;

class DisambiguatorTester
{
public:
    DisambiguatorTester(
        shared_ptr<DisambiguatorSettingsHolder> settings
        , shared_ptr<ITokenizer> tokenizer);

    void TestFromFile(const string& outputFile, bool testOnlyOnTest = true);

    void Test(size_t numberOfHypothesis, double percentage);

    void Test(int numberOfHypothesis);

    void Test();

    void TestLemmatizing();
private:
    shared_ptr<DisambiguatorSettingsHolder> settings;
    shared_ptr<ITokenizer> tokenizer;
};

}

#endif // DISAMBIGUATOR_TESTER
