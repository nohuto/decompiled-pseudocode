/*
 * XREFs of PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408EE280
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140776368 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopThermalCsExit @ 0x14056FA30 (PopThermalCsExit.c)
 *     PopPowerAggregatorStartNextSession @ 0x140774E54 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140776208 (PopPowerAggregatorSetCurrentState.c)
 *     PopTransitionTelemetryOsState @ 0x140798C44 (PopTransitionTelemetryOsState.c)
 */

__int64 __fastcall PopPowerAggregatorDisplayPoweringOnStateHandler(__int64 a1)
{
  unsigned int v2; // edx
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 88) )
  {
    memset(v4, 0, sizeof(v4));
    PopPowerAggregatorSetCurrentState(a1, (__int64)v4);
    v2 = *(_DWORD *)(a1 + 32);
    PoModernStandbyActionInProgress = 0;
    PopPowerAggregatorStartNextSession(0, v2);
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
    PopTransitionTelemetryOsState(4, 6);
    PopThermalCsExit();
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  }
  return 0LL;
}
