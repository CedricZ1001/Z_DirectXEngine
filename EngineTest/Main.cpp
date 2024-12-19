// Copyright (c) CedricZ1, 2024
// Distributed under the MIT license. See the LICENSE file in the project root for more information.

#pragma comment(lib,"engine.lib")

#include "TestEntityComponents.h"

#define TEST_ENTITY_COMPONENTS 1

#if TEST_ENTITY_COMPONENTS

#else
#error One of the tests need to be enabled
#endif

int main() 
{

#if _DEBUG
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif
	Engine_Test test{};

	if (test.initialize())
	{
		test.run();
	}

	test.shutdown();
};