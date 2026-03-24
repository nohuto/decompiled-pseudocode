/*
 * XREFs of IS_USERCRIT_NOTOWNED_ATALL @ 0x1C0046B18
 * Callers:
 *     ThreadUnlock1 @ 0x1C002F910 (ThreadUnlock1.c)
 *     HMUnlockObjectInternal @ 0x1C0046AB0 (HMUnlockObjectInternal.c)
 *     HMUnlockObjectWorker @ 0x1C0046BE0 (HMUnlockObjectWorker.c)
 *     ThreadUnlockWorker1 @ 0x1C007F100 (ThreadUnlockWorker1.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C0113E58 (AddToDeferredUserCritThreadUnlockList.c)
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
