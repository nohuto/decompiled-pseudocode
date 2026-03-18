/*
 * XREFs of PopPowerAggregatorNotifySystemWake @ 0x140993EC0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 */

void __fastcall PopPowerAggregatorNotifySystemWake(int a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  dword_140C3ABC4 = a1;
  PopReleaseRwLock(&PopPowerAggregatorLock);
}
