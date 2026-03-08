/*
 * XREFs of HalpTimerWatchdogQueryDueTime @ 0x1403CA5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerWatchdogQueryDueTime(char a1)
{
  if ( a1 && HalpWatchdogTimer && *(_DWORD *)(HalpWatchdogTimer + 228) == 7 )
    return 0LL;
  else
    return HalpWatchdogWakeDueTime;
}
