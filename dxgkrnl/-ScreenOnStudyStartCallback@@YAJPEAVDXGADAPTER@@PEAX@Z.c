/*
 * XREFs of ?ScreenOnStudyStartCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C001C660
 * Callers:
 *     <none>
 * Callees:
 *     LogMonitorOnOffTelemetry @ 0x1C01E7F70 (LogMonitorOnOffTelemetry.c)
 */

__int64 __fastcall ScreenOnStudyStartCallback(struct DXGADAPTER *a1, void *a2, __int64 a3)
{
  LOBYTE(a3) = 3;
  return LogMonitorOnOffTelemetry(a2, a1, a3);
}
