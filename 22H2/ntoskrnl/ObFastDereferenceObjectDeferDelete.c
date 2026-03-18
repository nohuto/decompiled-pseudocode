/*
 * XREFs of ObFastDereferenceObjectDeferDelete @ 0x1402A23E0
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x140267740 (MiMakeSystemCacheRangeValid.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140287370 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x140297C04 (MiGatherMappedPages.c)
 *     CcUnmapAndPurge @ 0x140299E18 (CcUnmapAndPurge.c)
 *     CcDeleteSharedCacheMap @ 0x140299EA0 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindPostProcess @ 0x14029AF18 (CcWriteBehindPostProcess.c)
 *     MiDereferenceControlAreaFile @ 0x1402A23C0 (MiDereferenceControlAreaFile.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E2E50 (MiCompleteRestrictedImageFault.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F12D4 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x1402F42A8 (CcIsFatalWriteError.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     CcGetDirtyPagesHelper @ 0x1403386A0 (CcGetDirtyPagesHelper.c)
 *     MiMakeSystemCachePteValid @ 0x1403458DC (MiMakeSystemCachePteValid.c)
 *     MiCreateSystemSection @ 0x14035F150 (MiCreateSystemSection.c)
 *     CcUnpinRepinnedBcb @ 0x140392610 (CcUnpinRepinnedBcb.c)
 *     CcPerfLogFlushSection @ 0x140392784 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x14039286C (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403939D4 (CcPerfLogWorkItemEnqueue.c)
 *     MiDeprioritizeVad @ 0x1403C67DC (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x140623BB8 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x14062896C (MiSetPagesModified.c)
 *     CcUnmapVacb @ 0x140721E80 (CcUnmapVacb.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
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
