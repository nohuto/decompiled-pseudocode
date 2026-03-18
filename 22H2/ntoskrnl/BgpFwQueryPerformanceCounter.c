/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x140384170
 * Callers:
 *     LogFwReport @ 0x140AED0B8 (LogFwReport.c)
 *     AnFwpProgressIndicatorTimer @ 0x140AEE6D0 (AnFwpProgressIndicatorTimer.c)
 *     LogFwStat @ 0x140AEE81C (LogFwStat.c)
 *     AnFwpProgressAnimationManual @ 0x140AF32AC (AnFwpProgressAnimationManual.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
