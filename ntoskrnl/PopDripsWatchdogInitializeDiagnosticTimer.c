/*
 * XREFs of PopDripsWatchdogInitializeDiagnosticTimer @ 0x140B93794
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x14084747C (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeDiagnosticTimer()
{
  if ( PopDripsWatchdogTimeout )
  {
    dword_140C39728 = PopDripsWatchdogTimeout;
    PopInitializeTimer(
      (__int64)&unk_140C39678,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopDripsWatchdogContext,
      (__int64)PopDripsWatchdogDiagnosticWorker,
      (__int64)&PopDripsWatchdogContext);
    dword_140C3972C |= 1u;
  }
  return 0LL;
}
