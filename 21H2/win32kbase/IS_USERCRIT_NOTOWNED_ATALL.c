/*
 * XREFs of IS_USERCRIT_NOTOWNED_ATALL @ 0x1C00456A8
 * Callers:
 *     ThreadUnlock1 @ 0x1C002E4A0 (ThreadUnlock1.c)
 *     HMUnlockObjectInternal @ 0x1C0045640 (HMUnlockObjectInternal.c)
 *     HMUnlockObjectWorker @ 0x1C0045770 (HMUnlockObjectWorker.c)
 *     ThreadUnlockWorker1 @ 0x1C007DE70 (ThreadUnlockWorker1.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C0113B88 (AddToDeferredUserCritThreadUnlockList.c)
 * Callees:
 *     <none>
 */

__int64 IS_USERCRIT_NOTOWNED_ATALL()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) )
    return ExIsResourceAcquiredSharedLite(gpresUser) == 0;
  return v0;
}
