/*
 * XREFs of ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x1C00ADC54
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0036A38 (xxxInitProcessInfo.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004FAF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CWinEventNoopDeferral *__fastcall CWinEventNoopDeferral::CWinEventNoopDeferral(CWinEventNoopDeferral *this)
{
  if ( gdwDeferWinEvent && !(unsigned int)AtomicExecutionCheck::GetCount() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 861LL);
  ++gdwDeferWinEvent;
  return this;
}
