/*
 * XREFs of PopSleepstudySnapModernStandbySessionData @ 0x140997DE0
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x140995888 (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     PopCalculateIdleInformation @ 0x14039AD4C (PopCalculateIdleInformation.c)
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
  v0 = 13 * ((unsigned int)dword_140C20048 + 2LL);
  PopCalculateIdleInformation((__int64)&v1);
  PopSleepstudySessionContext[v0 + 10] = v2;
  PopSleepstudySessionContext[v0 + 11] = *((_QWORD *)&v1 + 1);
  PopSleepstudySessionContext[v0 + 12] = RtlGetInterruptTimePrecise(&v3);
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
}
