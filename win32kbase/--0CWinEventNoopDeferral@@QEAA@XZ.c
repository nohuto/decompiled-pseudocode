/*
 * XREFs of ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x1C00BD94C
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0070EFC (xxxInitProcessInfo.c)
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004F93C (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CWinEventNoopDeferral *__fastcall CWinEventNoopDeferral::CWinEventNoopDeferral(CWinEventNoopDeferral *this)
{
  if ( gdwDeferWinEvent && !AtomicExecutionCheck::GetCount() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 917LL);
  ++gdwDeferWinEvent;
  return this;
}
