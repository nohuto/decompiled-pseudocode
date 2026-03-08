/*
 * XREFs of PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140990E50
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140872018 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140879638 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140990B24 (PopPowerAggregatorNotifyCsStateExited.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffActiveToActiveStateHandler(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD v3[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 32);
  v3[0] = 2;
  PopPowerAggregatorSetCurrentState(a1, (__int64)v3);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  PopPowerAggregatorNotifyCsStateExited(v1);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  return 0LL;
}
