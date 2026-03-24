/*
 * XREFs of HalpTimerWatchdogGeneratedLastReset @ 0x1407D5060
 * Callers:
 *     HalpTimerWatchdogLogReset @ 0x1407D5034 (HalpTimerWatchdogLogReset.c)
 * Callees:
 *     <none>
 */

bool HalpTimerWatchdogGeneratedLastReset()
{
  return HalpWatchdogTimer && (*(_DWORD *)(HalpWatchdogTimer + 224) & 0x40000) != 0;
}
