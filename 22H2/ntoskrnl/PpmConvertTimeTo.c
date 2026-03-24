/*
 * XREFs of PpmConvertTimeTo @ 0x140576ED8
 * Callers:
 *     PopDripsWatchdogUpdateMetrics @ 0x1408EF770 (PopDripsWatchdogUpdateMetrics.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x1408F4194 (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x1408F4630 (PopIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     PpmConvertTime @ 0x14034523C (PpmConvertTime.c)
 */

ULONGLONG __fastcall PpmConvertTimeTo(ULONGLONG a1, ULONGLONG a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
