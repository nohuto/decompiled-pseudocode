/*
 * XREFs of PopPowerAggregatorWorker @ 0x140871F90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x1407577FC (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140872018 (PopPowerAggregatorInvokeStateMachine.c)
 */

void PopPowerAggregatorWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  qword_140C3B850 = (__int64)KeGetCurrentThread();
  while ( (dword_140C3A708 & 2) != 0 )
  {
    dword_140C3A708 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140C3B850 = 0LL;
  dword_140C3A708 &= ~1u;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
