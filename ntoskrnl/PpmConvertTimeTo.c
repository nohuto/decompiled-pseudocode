/*
 * XREFs of PpmConvertTimeTo @ 0x1403A1D04
 * Callers:
 *     PpmIdleGetPackageIdleIntervalStats @ 0x14084C230 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x140997348 (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopIdleWakeNotifyModernStandbyExitWorker @ 0x140997860 (PopIdleWakeNotifyModernStandbyExitWorker.c)
 *     PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x140998098 (PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140999904 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     PpmConvertTime @ 0x140235D70 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
