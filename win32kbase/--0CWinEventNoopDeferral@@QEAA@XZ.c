CWinEventNoopDeferral *__fastcall CWinEventNoopDeferral::CWinEventNoopDeferral(CWinEventNoopDeferral *this)
{
  if ( gdwDeferWinEvent && !AtomicExecutionCheck::GetCount() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 917LL);
  ++gdwDeferWinEvent;
  return this;
}
