/*
 * XREFs of PopPowerAggregatorWorker @ 0x1407762E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140776368 (PopPowerAggregatorInvokeStateMachine.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407764F4 (PopPowerAggregatorDiagTraceEvent.c)
 */

void PopPowerAggregatorWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  qword_140C22B40 = (__int64)KeGetCurrentThread();
  while ( (dword_140C217F4 & 2) != 0 )
  {
    dword_140C217F4 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140C22B40 = 0LL;
  dword_140C217F4 &= ~1u;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
