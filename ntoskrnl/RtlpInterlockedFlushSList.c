/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1404204E0
 * Callers:
 *     EtwpFreeStackWalkApcs @ 0x14028DCA0 (EtwpFreeStackWalkApcs.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14028E24C (EtwpCancelPendingStackWalkApcs.c)
 *     RtlpHpVsContextFree @ 0x1402B6740 (RtlpHpVsContextFree.c)
 *     ExpHpCompactionRoutine @ 0x1402CC0B0 (ExpHpCompactionRoutine.c)
 *     RtlpHpHeapCompact @ 0x1402CC2D4 (RtlpHpHeapCompact.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E7464 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExpFlushGeneralLookaside @ 0x1402EC330 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1402EC3C0 (ExFlushLookasideListEx.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x1402FA7F4 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     RtlpHpFreeHeap @ 0x140313CC0 (RtlpHpFreeHeap.c)
 *     PfFbBufferListFlushStandby @ 0x14035B78C (PfFbBufferListFlushStandby.c)
 *     MiFreePageFileHashPfns @ 0x1403619CC (MiFreePageFileHashPfns.c)
 *     MiDrainZeroLookasides @ 0x1403B6E88 (MiDrainZeroLookasides.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140461BD0 (EtwpCovSampCaptureQueueDpc.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1405BC8E4 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1406014D8 (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     ExpPlProcessNotifications @ 0x1406065B0 (ExpPlProcessNotifications.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406429F8 (MiRemoveNonIdealCachedStacks.c)
 *     MiStoreDeletePartition @ 0x140659A64 (MiStoreDeletePartition.c)
 *     MiInsertPteTracker @ 0x14065EDA4 (MiInsertPteTracker.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14066192C (MiDeleteDeferredCloneDescriptors.c)
 *     PfpFlushEventBuffers @ 0x1407E5B18 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1407E5E50 (PfpFlushBuffers.c)
 *     EtwpFreeStackCache @ 0x1408A39B8 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A3E60 (EtwpCovSampCaptureWorkerThread.c)
 *     ObpInitStackAndObjectTables @ 0x140979F68 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x14097AA20 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x14097C168 (PfTCleanup.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1409EE1B0 (EtwpCovSampCaptureFreeLookasides.c)
 *     CmUnRegisterCallback @ 0x140A0C560 (CmUnRegisterCallback.c)
 *     PfTAccessTracingCleanup @ 0x140A844E0 (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140AD7230 (ViPoolDelayFreeTrimThreadRoutine.c)
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
