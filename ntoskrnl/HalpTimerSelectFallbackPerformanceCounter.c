/*
 * XREFs of HalpTimerSelectFallbackPerformanceCounter @ 0x140507300
 * Callers:
 *     HalpTscFallback @ 0x140508250 (HalpTscFallback.c)
 * Callees:
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x1403A087C (HalpTimerCalculateMaximumAllowableDrift.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

unsigned __int64 HalpTimerSelectFallbackPerformanceCounter()
{
  unsigned __int64 result; // rax

  result = HalpFallbackPerformanceCounter;
  if ( !HalpFallbackPerformanceCounter )
    KeBugCheckEx(
      0x5Cu,
      0x1000uLL,
      HalpPerformanceCounter,
      (ULONG_PTR)&HalpRegisteredTimers,
      (unsigned int)HalpRegisteredTimerCount);
  HalpPerformanceCounter = HalpFallbackPerformanceCounter;
  if ( HalpAlwaysOnCounter )
  {
    result = HalpTimerCalculateMaximumAllowableDrift();
    HalpTimerMaximumAllowableDrift = result;
  }
  return result;
}
