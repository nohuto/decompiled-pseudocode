/*
 * XREFs of ObFastDereferenceObjectDeferDelete @ 0x1403441C0
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiGatherMappedPages @ 0x140215150 (MiGatherMappedPages.c)
 *     CcUnmapAndPurge @ 0x140217984 (CcUnmapAndPurge.c)
 *     CcDeleteSharedCacheMap @ 0x140217A10 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindPostProcess @ 0x140219248 (CcWriteBehindPostProcess.c)
 *     MiMakeSystemCacheRangeValid @ 0x140221870 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteRestrictedImageFault @ 0x14028D690 (MiCompleteRestrictedImageFault.c)
 *     CcPurgeAndClearCacheSection @ 0x14029FCE4 (CcPurgeAndClearCacheSection.c)
 *     MiMakeSystemCachePteValid @ 0x1402DA87C (MiMakeSystemCachePteValid.c)
 *     CcIsFatalWriteError @ 0x1402EFE78 (CcIsFatalWriteError.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140333F20 (MmFlushSection.c)
 *     CcGetDirtyPagesHelper @ 0x140336020 (CcGetDirtyPagesHelper.c)
 *     MiDereferenceControlAreaFile @ 0x1403441A0 (MiDereferenceControlAreaFile.c)
 *     MiCreateSystemSection @ 0x14036BD9C (MiCreateSystemSection.c)
 *     CcUnpinRepinnedBcb @ 0x140390990 (CcUnpinRepinnedBcb.c)
 *     CcPerfLogFlushSection @ 0x140390B04 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x140390BEC (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140391D54 (CcPerfLogWorkItemEnqueue.c)
 *     MiDeprioritizeVad @ 0x1403C0F1C (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     CcUnmapVacb @ 0x1406A7150 (CcUnmapVacb.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

void __fastcall ObFastDereferenceObjectDeferDelete(signed __int64 *a1, unsigned __int64 a2, ULONG a3)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  _m_prefetchw(a1);
  v3 = *a1;
  if ( (a2 ^ *a1) >= 0xF )
  {
LABEL_5:
    ObDereferenceObjectDeferDeleteWithTag((PVOID)a2, a3);
  }
  else
  {
    while ( 1 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange64(a1, v3 + 1, v3);
      if ( v4 == v3 )
        break;
      if ( (a2 ^ v3) >= 0xF )
        goto LABEL_5;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo(a2 - 48);
  }
}
