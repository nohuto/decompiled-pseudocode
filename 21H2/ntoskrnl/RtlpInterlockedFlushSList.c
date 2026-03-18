/*
 * XREFs of RtlpInterlockedFlushSList @ 0x140429900
 * Callers:
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140238294 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDrainZeroLookasides @ 0x1402416A4 (MiDrainZeroLookasides.c)
 *     ExpFlushGeneralLookaside @ 0x140245FE0 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x140246070 (ExFlushLookasideListEx.c)
 *     EtwpFreeStackWalkApcs @ 0x14024DFE4 (EtwpFreeStackWalkApcs.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14024E07C (EtwpCancelPendingStackWalkApcs.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x140255720 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140258C54 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     MiFreePageFileHashPfns @ 0x140268C20 (MiFreePageFileHashPfns.c)
 *     RtlpHpVsContextFree @ 0x14034CEB0 (RtlpHpVsContextFree.c)
 *     PfFbBufferListFlushStandby @ 0x14035FB90 (PfFbBufferListFlushStandby.c)
 *     ExpHpCompactionRoutine @ 0x140363EF0 (ExpHpCompactionRoutine.c)
 *     RtlpHpHeapCompact @ 0x14036DC90 (RtlpHpHeapCompact.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140460D60 (EtwpCovSampCaptureQueueDpc.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1405A57F0 (MiRemoveNonIdealCachedStacks.c)
 *     MiInsertPteTracker @ 0x1405B6C18 (MiInsertPteTracker.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1405BA6F0 (MiDeleteDeferredCloneDescriptors.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1406366B8 (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     ExpPlProcessNotifications @ 0x14063BB20 (ExpPlProcessNotifications.c)
 *     PfpFlushEventBuffers @ 0x1407D9BE8 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1407D9F00 (PfpFlushBuffers.c)
 *     EtwpFreeStackCache @ 0x140883876 (EtwpFreeStackCache.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x140985FBC (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x140986A7C (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1409882B4 (PfTCleanup.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1409EF0D4 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409EF190 (EtwpCovSampCaptureWorkerThread.c)
 *     PfTAccessTracingCleanup @ 0x140A483FC (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140A9A410 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  union _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  union _SLIST_HEADER v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(ListHead);
  v1 = *ListHead;
  do
  {
    Alignment = v1.Alignment;
    LOWORD(Alignment) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)ListHead, 0LL, Alignment, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  v1.Alignment = v1.Region;
  LOBYTE(v1.Alignment) = *((_BYTE *)&v1.HeaderX64 + 8) & 0xF0;
  return (PSLIST_ENTRY)v1.Alignment;
}
