/*
 * XREFs of PopDripsWatchdogInitializeCallbackTimer @ 0x140B9791C
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x140849964 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeCallbackTimer()
{
  unsigned int v0; // ebx

  v0 = PopDripsCallbackInterval;
  if ( PopDripsCallbackInterval || (v0 = PopDirectedDripsTimeout) != 0 )
  {
    dword_140C39A20 = v0;
    PopInitializeTimer(
      (__int64)&unk_140C39970,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogCallbackWorker,
      (__int64)&PopDripsWatchdogContext);
    if ( PopDripsWatchdogDebounceInterval )
      PopDripsWatchdogDebounceTickInterval = (PopDripsWatchdogDebounceInterval - 1) / v0 + 1;
    if ( PopDripsWatchdogDebounceTickInterval == 1 )
      PopDripsWatchdogDebounceTickInterval = 2;
    dword_140C39A24 |= 1u;
  }
  return 0LL;
}
