/*
 * XREFs of CmpReferenceHive @ 0x1405EC2A8
 * Callers:
 *     CmpLockHashEntrySharedByKcb @ 0x1405EC238 (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x1405EC2D4 (CmpLockHashEntryExclusive.c)
 *     CmpGetLastHive @ 0x140699A30 (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14069B388 (CmpTryToLockHashEntryExclusive.c)
 *     CmpLockHashEntryShared @ 0x14069E03C (CmpLockHashEntryShared.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1406E4F6C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1406E58E4 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpBlockHiveWrites @ 0x1406E8C40 (CmpBlockHiveWrites.c)
 *     CmpGetNextHive @ 0x1406E9BF4 (CmpGetNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1406EB244 (CmpBlockTwoHiveWrites.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406EB3EC (CmpDoQueueLateUnloadWorker.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F224 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpReferenceHive(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 4272));
  v1 = *(_DWORD *)(a1 + 4272);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4272), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
