/*
 * XREFs of PopNotifyCsStateExited @ 0x140994E00
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407577FC (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140873100 (PopPowerAggregatorScheduleWorker.c)
 */

void PopNotifyCsStateExited()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_PDC_PHASES_EXITED, 0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
