/*
 * XREFs of PopPowerAggregatorNotifySystemWake @ 0x140990E10
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopPowerAggregatorNotifySystemWake(int a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  dword_140C3A824 = a1;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
