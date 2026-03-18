/*
 * XREFs of PopPowerAggregatorWorker @ 0x140874E50
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407A9EF0 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140874ED8 (PopPowerAggregatorInvokeStateMachine.c)
 */

void PopPowerAggregatorWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  qword_140C3BBF0 = (__int64)KeGetCurrentThread();
  while ( (dword_140C3AAA8 & 2) != 0 )
  {
    dword_140C3AAA8 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140C3BBF0 = 0LL;
  dword_140C3AAA8 &= ~1u;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  PopReleaseRwLock(&PopPowerAggregatorLock);
}
