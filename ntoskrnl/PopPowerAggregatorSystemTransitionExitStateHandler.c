/*
 * XREFs of PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140991090
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140872018 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopGetPolicyWorker @ 0x1402BCB34 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1402BCB88 (PopCheckForWork.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140879638 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x1408797E4 (PopSleepstudyStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionExitStateHandler(struct _KEVENT *a1)
{
  _OWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF

  KeResetEvent(a1 + 11);
  memset(v3, 0, sizeof(v3));
  LODWORD(v3[0]) = 3;
  PopPowerAggregatorSetCurrentState((__int64)a1, (__int64)v3);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(1, 0x14u);
  if ( PopIdleScanInterval )
  {
    KeResetEvent(&PopIdleLoopExecuted);
    PopGetPolicyWorker(128);
    PopCheckForWork();
    KeWaitForSingleObject(&PopIdleLoopExecuted, Executive, 0, 0, 0LL);
  }
  if ( qword_140C6ABC0 )
  {
    qword_140C6ABC0(2LL);
    if ( qword_140C6ABC0 )
      qword_140C6ABC0(3LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  return 0LL;
}
