/*
 * XREFs of PopClearTransitionCheckpoints @ 0x140980868
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140AA6A10 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void PopClearTransitionCheckpoints()
{
  PVOID v0; // rcx
  __int64 v1; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTransitionCheckpointLock);
  while ( 1 )
  {
    v0 = PopTransitionCheckpoints;
    if ( PopTransitionCheckpoints == &PopTransitionCheckpoints )
      break;
    if ( *((PVOID **)PopTransitionCheckpoints + 1) != &PopTransitionCheckpoints
      || (v1 = *(_QWORD *)PopTransitionCheckpoints,
          *(PVOID *)(*(_QWORD *)PopTransitionCheckpoints + 8LL) != PopTransitionCheckpoints) )
    {
      __fastfail(3u);
    }
    PopTransitionCheckpoints = *(PVOID *)PopTransitionCheckpoints;
    *(_QWORD *)(v1 + 8) = &PopTransitionCheckpoints;
    ExFreePoolWithTag(v0, 0x50434B50u);
  }
  PopReleaseRwLock(&PopTransitionCheckpointLock);
}
