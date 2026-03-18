/*
 * XREFs of HalpTimerWatchdogGeneratedLastReset @ 0x140866040
 * Callers:
 *     HalpTimerWatchdogLogReset @ 0x140866018 (HalpTimerWatchdogLogReset.c)
 * Callees:
 *     <none>
 */

char HalpTimerWatchdogGeneratedLastReset()
{
  char result; // al

  result = HalpWatchdogTimer;
  if ( HalpWatchdogTimer )
    return (*(_DWORD *)(HalpWatchdogTimer + 224) & 0x40000) != 0;
  return result;
}
