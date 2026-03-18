/*
 * XREFs of PopPowerRequestStatsSetActive @ 0x1407A7AF8
 * Callers:
 *     PopPowerRequestCallbackWorker @ 0x14032B9D0 (PopPowerRequestCallbackWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     SleepstudyHelperBlockerActiveDereference @ 0x14032D460 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x14032D550 (SleepstudyHelperBlockerActiveReference.c)
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
    PopReleaseRwLock(&PopPowerRequestStatsLock);
  }
}
