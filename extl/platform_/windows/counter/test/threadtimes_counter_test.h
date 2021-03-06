/* ///////////////////////////////////////////////////////////////////////
 * File:		threadtimes_counter_test.h		
 *
 * Created:		08.02.17				
 * Updated:		08.05.06
 *
 * Brief: Unit-testing
 *
 * [<Home>]
 * Copyright (c) 2008-2020, Waruqi All rights reserved.
 * //////////////////////////////////////////////////////////////////// */
#ifndef EXTL_PLATFORM_WINDOWS_THREAD_TIMES_COUNTER_TEST_H
#define EXTL_PLATFORM_WINDOWS_THREAD_TIMES_COUNTER_TEST_H

/* ///////////////////////////////////////////////////////////////////////
 * test namespace
 */
EXTL_WINDOWS_BEGIN_WHOLE_NAMESPACE
EXTL_TEST_NAME_BEGIN_NAMESPACE(threadtimes_counter_test)

/* ///////////////////////////////////////////////////////////////////////
 * Unit-testing 
 */
struct threadtimes_counter_test
{
	threadtimes_counter_test()
	{
		threadtimes_counter counter;
		counter.start();
		Sleep(100);
		counter.end();
		EXTL_TEST_TRACE(_T("/* //////////////////////////////////////////////////////////////////// */"));
		EXTL_TEST_TRACE(_T("threadtimes_counter Test(100ms):\n"));
		EXTL_TEST_TRACE(_T("Count:   %u"), static_cast<e_uint32_t>(counter.count()));
		EXTL_TEST_TRACE(_T("Seconds: %u"), static_cast<e_uint32_t>(counter.s()));
		EXTL_TEST_TRACE(_T("MS:      %u"), static_cast<e_uint32_t>(counter.ms()));
		EXTL_TEST_TRACE(_T("US:      %u\n"), static_cast<e_uint32_t>(counter.us()));

		EXTL_TEST_TRACE(_T("Kernel Count:   %u"), static_cast<e_uint32_t>(counter.kernel_count()));
		EXTL_TEST_TRACE(_T("Kernel Seconds: %u"), static_cast<e_uint32_t>(counter.kernel_s()));
		EXTL_TEST_TRACE(_T("Kernel MS:      %u"), static_cast<e_uint32_t>(counter.kernel_ms()));
		EXTL_TEST_TRACE(_T("Kernel US:      %u\n"), static_cast<e_uint32_t>(counter.kernel_us()));

		EXTL_TEST_TRACE(_T("User Count:   %u"), static_cast<e_uint32_t>(counter.user_count()));
		EXTL_TEST_TRACE(_T("User Seconds: %u"), static_cast<e_uint32_t>(counter.user_s()));
		EXTL_TEST_TRACE(_T("User MS:      %u"), static_cast<e_uint32_t>(counter.user_ms()));
		EXTL_TEST_TRACE(_T("User US:      %u"), static_cast<e_uint32_t>(counter.user_us()));
	}
};

threadtimes_counter_test g_threadtimes_counter_test;

/* ///////////////////////////////////////////////////////////////////////
 * test namespace
 */
EXTL_TEST_NAME_END_NAMESPACE(threadtimes_counter_test)
EXTL_WINDOWS_END_WHOLE_NAMESPACE

/* //////////////////////////////////////////////////////////////////// */
#endif /* EXTL_PLATFORM_WINDOWS_THREAD_TIMES_COUNTER_TEST_H */
/* //////////////////////////////////////////////////////////////////// */

