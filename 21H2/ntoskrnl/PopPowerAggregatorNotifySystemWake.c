/*
 * XREFs of PopPowerAggregatorNotifySystemWake @ 0x140808BB4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopPowerAggregatorNotifySystemWake(int a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  dword_140C20CE4 = a1;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
