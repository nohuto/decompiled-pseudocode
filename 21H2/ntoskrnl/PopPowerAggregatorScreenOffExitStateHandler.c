/*
 * XREFs of PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EE9A0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x1407761A8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140776048 (PopPowerAggregatorSetCurrentState.c)
 *     PdcPoPerfOverride @ 0x1408EF908 (PdcPoPerfOverride.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x1408EFDD8 (PopPdcAreAllPhasesDisengaged.c)
 *     PopPdcDisengagePhases @ 0x1408F0020 (PopPdcDisengagePhases.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffExitStateHandler(__int64 a1)
{
  int v1; // eax
  char v3; // bl
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_DWORD *)(a1 + 88);
  if ( !v1 )
    goto LABEL_7;
  if ( v1 == 1 )
  {
LABEL_10:
    memset(v5, 0, sizeof(v5));
    LODWORD(v5[0]) = 3;
    PopPowerAggregatorSetCurrentState(a1, (__int64)v5);
    return 0LL;
  }
  if ( v1 > 1 )
  {
    if ( v1 > 3 )
    {
      if ( v1 != 4 )
        return 0LL;
LABEL_8:
      PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
      PopPdcDisengagePhases();
      v3 = PopPdcAreAllPhasesDisengaged();
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
      if ( v3 )
      {
        *(_DWORD *)(a1 + 88) = 1;
        goto LABEL_10;
      }
      return 0LL;
    }
LABEL_7:
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
    PdcPoPerfOverride();
    PopPdcDisengagePhases();
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
    *(_DWORD *)(a1 + 88) = 4;
    goto LABEL_8;
  }
  return 0LL;
}
