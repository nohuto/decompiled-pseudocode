/*
 * XREFs of KeRebaselineSystemTime @ 0x14056AF7C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineSystemTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = result;
  KiSystemTimeErrorAccumulator = 0LL;
  return result;
}
