/*
 * XREFs of ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x1C00C53B0
 * Callers:
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01A6140 (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A6710 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C01A76D0 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C01A7A54 (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 */

void PTPTelemetry::Usage::HandlePTPTelemetry(void)
{
  if ( dword_1C0257C2C )
  {
    TraceLoggingPTPGestureUsageEvent((const struct tagTPTELEMSTATE *)&PTPTelemetry::Usage::gTPTelemState);
    if ( qword_1C0257C30 > 0 || qword_1C0257C48 > 0 || dword_1C0257BE0 || dword_1C0257BE8 )
      TraceLoggingPTPUsageDetailsEvent(
        (const struct tagTPTELEMSTATE *)&PTPTelemetry::Usage::gTPTelemState,
        gliQpcFreq.QuadPart);
    memset(&PTPTelemetry::Usage::gTPTelemState, 0, 0x90uLL);
  }
}
