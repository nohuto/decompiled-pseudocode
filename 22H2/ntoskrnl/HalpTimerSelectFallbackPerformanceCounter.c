/*
 * XREFs of HalpTimerSelectFallbackPerformanceCounter @ 0x1405093E0
 * Callers:
 *     HalpTscFallback @ 0x14050A330 (HalpTscFallback.c)
 * Callees:
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x1403A3B70 (HalpTimerCalculateMaximumAllowableDrift.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
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
