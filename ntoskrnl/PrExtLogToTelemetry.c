/*
 * XREFs of PrExtLogToTelemetry @ 0x1403AFBD8
 * Callers:
 *     HalpProcInitSystem @ 0x140A878D0 (HalpProcInitSystem.c)
 * Callees:
 *     PrpWriteTraceLoggingEvent @ 0x1403AC2B8 (PrpWriteTraceLoggingEvent.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14080F6BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 PrExtLogToTelemetry()
{
  unsigned int v0; // ebx

  v0 = -1073741637;
  if ( IsTraceloggingEnabled
    || (IsTraceloggingEnabled = (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C06798) >= 0) != 0 )
  {
    PrpWriteTraceLoggingEvent();
    return 0;
  }
  return v0;
}
