/*
 * XREFs of PopPowerAggregatorModernStandbyExitStateHandler @ 0x140995D10
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140808E28 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PdcPoPerfOverride @ 0x14080877C (PdcPoPerfOverride.c)
 *     PopPdcDisengagePhases @ 0x140808BE8 (PopPdcDisengagePhases.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x140995888 (PopPowerAggregatorDisengageModernStandby.c)
 */

__int64 __fastcall PopPowerAggregatorModernStandbyExitStateHandler(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 72) )
  {
    PopPowerAggregatorDisengageModernStandby(a1);
  }
  else
  {
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
    PdcPoPerfOverride();
    PopPdcDisengagePhases();
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  }
  return 0LL;
}
