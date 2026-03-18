/*
 * XREFs of PopDripsWatchdogInitializeDiagnosticTimer @ 0x140B979A4
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x140849964 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeDiagnosticTimer()
{
  if ( PopDripsWatchdogTimeout )
  {
    dword_140C39B28 = PopDripsWatchdogTimeout;
    PopInitializeTimer(
      (__int64)&unk_140C39A78,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogDiagnosticWorker,
      (__int64)&PopDripsWatchdogContext);
    dword_140C39B2C |= 1u;
  }
  return 0LL;
}
