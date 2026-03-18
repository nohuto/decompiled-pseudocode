/*
 * XREFs of PopPowerAggregatorWorker @ 0x140808DA0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407F274C (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140808E28 (PopPowerAggregatorInvokeStateMachine.c)
 */

void PopPowerAggregatorWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  qword_140C21D10 = (__int64)KeGetCurrentThread();
  while ( (dword_140C20BC8 & 2) != 0 )
  {
    dword_140C20BC8 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140C21D10 = 0LL;
  dword_140C20BC8 &= ~1u;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
