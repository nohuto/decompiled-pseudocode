/*
 * XREFs of PpmConvertTimeTo @ 0x140387A68
 * Callers:
 *     PpmIdleGetPackageIdleIntervalStats @ 0x1407FBB54 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140806090 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x1408062D4 (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140996A20 (PopDripsWatchdogUpdateMetrics.c)
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x14099BD28 (PopIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
