/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x140343320
 * Callers:
 *     CcUnmapAndPurge @ 0x140217984 (CcUnmapAndPurge.c)
 *     CcWriteBehindPostProcess @ 0x140219248 (CcWriteBehindPostProcess.c)
 *     CcPurgeAndClearCacheSection @ 0x14029FCE4 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x1402EFE78 (CcIsFatalWriteError.c)
 *     CcGetDirtyPagesHelper @ 0x140336020 (CcGetDirtyPagesHelper.c)
 *     CcUnpinRepinnedBcb @ 0x140390990 (CcUnpinRepinnedBcb.c)
 *     CcPerfLogFlushSection @ 0x140390B04 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x140390BEC (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140391D54 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnmapVacb @ 0x1406A7150 (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x1403434A0 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140343968 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

__int64 __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  __int64 result; // rax

  result = ObFastReferenceObject(a1 + 96, 1666409283LL);
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}
