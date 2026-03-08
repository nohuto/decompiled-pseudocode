/*
 * XREFs of PopPowerRequestStatsSetActive @ 0x14073BEE8
 * Callers:
 *     PopPowerRequestCallbackWorker @ 0x1402BC180 (PopPowerRequestCallbackWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     SleepstudyHelperBlockerActiveDereference @ 0x1402F1010 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x1402F1100 (SleepstudyHelperBlockerActiveReference.c)
 */

void __fastcall PopPowerRequestStatsSetActive(__int64 a1, int a2, char a3)
{
  KSPIN_LOCK *v5; // rcx

  if ( *(_QWORD *)(a1 + 160) && ((a2 - 1) & 0xFFFFFFFD) == 0 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerRequestStatsLock);
    v5 = *(KSPIN_LOCK **)(*(_QWORD *)(a1 + 160) + 16LL);
    if ( a3 )
      SleepstudyHelperBlockerActiveReference(v5);
    else
      SleepstudyHelperBlockerActiveDereference(v5);
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestStatsLock);
  }
}
