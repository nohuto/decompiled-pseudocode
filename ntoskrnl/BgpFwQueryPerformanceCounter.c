/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x140381520
 * Callers:
 *     LogFwReport @ 0x140AE90F4 (LogFwReport.c)
 *     AnFwpProgressIndicatorTimer @ 0x140AEA710 (AnFwpProgressIndicatorTimer.c)
 *     LogFwStat @ 0x140AEA85C (LogFwStat.c)
 *     AnFwpProgressAnimationManual @ 0x140AEF2AC (AnFwpProgressAnimationManual.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
