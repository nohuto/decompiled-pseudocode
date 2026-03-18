/*
 * XREFs of PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1408081E0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140808E28 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PopGetPolicyWorker @ 0x1402D6254 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1402D62A8 (PopCheckForWork.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140809310 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionExitStateHandler(struct _KEVENT *a1)
{
  _OWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF

  KeResetEvent(a1 + 11);
  memset(v3, 0, sizeof(v3));
  LODWORD(v3[0]) = 3;
  PopPowerAggregatorSetCurrentState(a1, v3);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(1LL, 20LL);
  KeResetEvent(&PopIdleLoopExecuted);
  PopGetPolicyWorker(128);
  PopCheckForWork();
  KeWaitForSingleObject(&PopIdleLoopExecuted, Executive, 0, 0, 0LL);
  if ( qword_140C5AD70 )
  {
    qword_140C5AD70(2LL);
    if ( qword_140C5AD70 )
      qword_140C5AD70(3LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  return 0LL;
}
