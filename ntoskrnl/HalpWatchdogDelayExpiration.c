/*
 * XREFs of HalpWatchdogDelayExpiration @ 0x1405099B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     HalpSetTimer @ 0x1402CBEE0 (HalpSetTimer.c)
 */

__int64 __fastcall HalpWatchdogDelayExpiration(_QWORD *a1)
{
  __int64 v1; // rbx
  LARGE_INTEGER v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = HalpWatchdogTimer;
  if ( a1 )
    *a1 = HalpTimerWatchdogResetCount;
  if ( !v1 || !HalpTimerWatchdogArmed )
    return 0LL;
  if ( HalpTimerProcessorsFrozen
    && HalpTimerWatchdogLastReset + 3000000000LL >= (unsigned __int64)RtlGetInterruptTimePrecise(&v3) )
  {
    return HalpSetTimer(v1, 3, HalpTimerWatchdogTimeout, 1, (unsigned __int64 *)&v3.QuadPart);
  }
  return 3221225473LL;
}
