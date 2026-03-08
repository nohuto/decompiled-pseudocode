/*
 * XREFs of KeRebaselineInterruptTime @ 0x140568AAC
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140A9BEC0 (KiCalibrateTimeAdjustment.c)
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER KeRebaselineInterruptTime()
{
  LARGE_INTEGER result; // rax

  result = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = result;
  KiInterruptTimeErrorAccumulator = 0LL;
  return result;
}
