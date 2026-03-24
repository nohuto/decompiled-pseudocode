/*
 * XREFs of PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140774BE0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x1407761A8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     PopPowerAggregatorStartNextSession @ 0x140774C94 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140776048 (PopPowerAggregatorSetCurrentState.c)
 */

__int64 __fastcall PopPowerAggregatorSystemTransitionExitStateHandler(__int64 a1)
{
  int v1; // eax
  int v3; // eax
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_DWORD *)(a1 + 88);
  if ( v1 )
  {
    if ( v1 == 1 )
      goto LABEL_5;
    if ( (unsigned int)(v1 - 2) > 2 )
      return 0LL;
  }
  KeResetEvent((PRKEVENT)(a1 + 280));
  *(_DWORD *)(a1 + 88) = 1;
LABEL_5:
  v3 = *(_DWORD *)(a1 + 92);
  memset(v5, 0, sizeof(v5));
  LODWORD(v5[0]) = v3;
  PopPowerAggregatorSetCurrentState(a1, v5);
  PopPowerAggregatorStartNextSession(0LL, 11LL);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  if ( qword_140C543E0 )
  {
    qword_140C543E0(2LL);
    if ( qword_140C543E0 )
      qword_140C543E0(3LL);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  return 0LL;
}
