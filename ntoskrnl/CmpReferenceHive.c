/*
 * XREFs of CmpReferenceHive @ 0x1407AB230
 * Callers:
 *     CmpGetNextHive @ 0x1406BE36C (CmpGetNextHive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406C01CC (CmpDoQueueLateUnloadWorker.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x14074B1B8 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntryShared @ 0x14074BE4C (CmpLockHashEntryShared.c)
 *     CmpGetLastHive @ 0x14078A7EC (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14078EC04 (CmpTryToLockHashEntryExclusive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1407A898C (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x1407AB0BC (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1407AB174 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpBlockHiveWrites @ 0x140A10B04 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140A10BB8 (CmpBlockTwoHiveWrites.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140A1C82C (CmpLockHashEntryByIndexExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpReferenceHive(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 4232));
  v1 = *(_DWORD *)(a1 + 4232);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4232), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
