/*
 * XREFs of PopPowerAggregatorModernStandbyExitStateHandler @ 0x140990AE0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140872018 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x14099057C (PopPowerAggregatorDisengageModernStandby.c)
 *     PdcPoPerfOverride @ 0x1409949A8 (PdcPoPerfOverride.c)
 *     PopPdcDisengagePhases @ 0x140995050 (PopPdcDisengagePhases.c)
 */

__int64 __fastcall PopPowerAggregatorModernStandbyExitStateHandler(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( *(_BYTE *)(a1 + 72) )
  {
    PopPowerAggregatorDisengageModernStandby(a1);
  }
  else
  {
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
    PdcPoPerfOverride(v2, v1, v3, v4);
    PopPdcDisengagePhases(v6, v5, v7, v8);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  }
  return 0LL;
}
