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
