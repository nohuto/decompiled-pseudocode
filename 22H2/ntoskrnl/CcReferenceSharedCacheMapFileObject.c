/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x140275E50
 * Callers:
 *     CcWriteBehindInternal @ 0x14022D3E0 (CcWriteBehindInternal.c)
 *     CcPurgeAndClearCacheSection @ 0x14026F814 (CcPurgeAndClearCacheSection.c)
 *     CcUnmapAndPurge @ 0x1402746F0 (CcUnmapAndPurge.c)
 *     CcGetDirtyPagesHelper @ 0x140274880 (CcGetDirtyPagesHelper.c)
 *     CcIsFatalWriteError @ 0x14031B100 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1403BCA38 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403BCB3C (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BCF4C (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA6A0 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x140637A98 (CcUnmapVacb.c)
 * Callees:
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140275E80 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ObFastReferenceObject @ 0x1403456F0 (ObFastReferenceObject.c)
 */

__int64 __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  __int64 result; // rax

  result = ObFastReferenceObject(a1 + 96);
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}
