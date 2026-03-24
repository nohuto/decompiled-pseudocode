/*
 * XREFs of EditionInitiateMouseEventProcessing @ 0x1C010B9F0
 * Callers:
 *     <none>
 * Callees:
 *     WakeDIT @ 0x1C010BA54 (WakeDIT.c)
 *     WakeRIT @ 0x1C010BAB0 (WakeRIT.c)
 *     UserBeep @ 0x1C02196B8 (UserBeep.c)
 */

__int64 __fastcall EditionInitiateMouseEventProcessing(int a1)
{
  __int64 result; // rax

  if ( _InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
  {
    EtwTraceWakeDIT(1LL);
    result = WakeDIT(1LL);
  }
  else
  {
    EtwTraceWakeRIT(1LL);
    result = WakeRIT(1LL);
  }
  if ( a1 )
    return UserBeep(440LL, 125LL);
  return result;
}
