/*
 * XREFs of PopPowerAggregatorWorker @ 0x140776120
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x1407761A8 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140776334 (PopPowerAggregatorDiagTraceEvent.c)
 */

void PopPowerAggregatorWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  qword_140C22AE0 = (__int64)KeGetCurrentThread();
  while ( (dword_140C21794 & 2) != 0 )
  {
    dword_140C21794 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140C22AE0 = 0LL;
  dword_140C21794 &= ~1u;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
