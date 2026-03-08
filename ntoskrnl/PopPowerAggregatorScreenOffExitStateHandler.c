/*
 * XREFs of PopPowerAggregatorScreenOffExitStateHandler @ 0x140990EA0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140872018 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140879524 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140879638 (PopPowerAggregatorSetCurrentState.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x14087F0C8 (PopPdcAreAllPhasesDisengaged.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffExitStateHandler(__int64 a1)
{
  char v2; // bl
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(a1 + 32) )
  {
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
    v2 = PopPdcAreAllPhasesDisengaged();
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
    if ( v2 )
    {
      memset(v4, 0, sizeof(v4));
      LODWORD(v4[0]) = 3;
      PopPowerAggregatorSetCurrentState(a1, (__int64)v4);
    }
  }
  else
  {
    PopPowerAggregatorEnterScreenOff(a1);
  }
  return 0LL;
}
