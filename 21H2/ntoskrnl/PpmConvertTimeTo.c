/*
 * XREFs of PpmConvertTimeTo @ 0x1405771D8
 * Callers:
 *     PopDripsWatchdogUpdateMetrics @ 0x1408EF880 (PopDripsWatchdogUpdateMetrics.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x1408F42A4 (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x1408F4740 (PopIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     PpmConvertTime @ 0x14026A1CC (PpmConvertTime.c)
 */

ULONGLONG __fastcall PpmConvertTimeTo(ULONGLONG a1, ULONGLONG a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
