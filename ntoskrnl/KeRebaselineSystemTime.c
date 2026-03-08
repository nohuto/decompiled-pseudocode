/*
 * XREFs of KeRebaselineSystemTime @ 0x140568ADC
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineSystemTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = result;
  KiSystemTimeErrorAccumulator = 0LL;
  return result;
}
