/*
 * XREFs of PopSleepstudySnapModernStandbySessionData @ 0x140990418
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x14099057C (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022C9C0 (RtlGetInterruptTimePrecise.c)
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopCalculateIdleInformation @ 0x1403C2C3C (PopCalculateIdleInformation.c)
 */

void PopSleepstudySnapModernStandbySessionData()
{
  __int64 v0; // rbx
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  __int128 v2; // [rsp+30h] [rbp-18h]
  LARGE_INTEGER v3; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  v0 = 13 * ((unsigned int)dword_140C3B928 + 2LL);
  PopCalculateIdleInformation((__int64)&v1);
  PopSleepstudySessionContext[v0 + 10] = v2;
  PopSleepstudySessionContext[v0 + 11] = *((_QWORD *)&v1 + 1);
  PopSleepstudySessionContext[v0 + 12] = RtlGetInterruptTimePrecise(&v3);
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
}
