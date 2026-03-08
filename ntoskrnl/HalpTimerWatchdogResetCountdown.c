/*
 * XREFs of HalpTimerWatchdogResetCountdown @ 0x1403CE870
 * Callers:
 *     HalpTimerWatchdogPreResetInterrupt @ 0x14051C6D0 (HalpTimerWatchdogPreResetInterrupt.c)
 * Callees:
 *     HalpSetTimer @ 0x1402CBEE0 (HalpSetTimer.c)
 *     HalpTimerWatchdogWakeSetDueTime @ 0x1403CE8CC (HalpTimerWatchdogWakeSetDueTime.c)
 */

__int64 HalpTimerWatchdogResetCountdown()
{
  __int64 result; // rax
  unsigned __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  if ( HalpWatchdogTimer )
  {
    if ( HalpTimerWatchdogArmed )
    {
      HalpSetTimer(HalpWatchdogTimer, 3, HalpTimerWatchdogTimeout, 1, &v1);
      HalpTimerWatchdogLastReset = MEMORY[0xFFFFF78000000008];
      return HalpTimerWatchdogWakeSetDueTime();
    }
  }
  return result;
}
