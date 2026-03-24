/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1404079B0
 * Callers:
 *     MiFreePageFileHashPfns @ 0x140273264 (MiFreePageFileHashPfns.c)
 *     MiDrainZeroLookasides @ 0x1402B93C0 (MiDrainZeroLookasides.c)
 *     ExpFlushGeneralLookaside @ 0x1402BE810 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1402BE8A0 (ExFlushLookasideListEx.c)
 *     RtlpHpHeapCompact @ 0x1402C3FF8 (RtlpHpHeapCompact.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x1402CBED4 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1402CEE50 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     PfFbBufferListFlushStandby @ 0x1402D4738 (PfFbBufferListFlushStandby.c)
 *     ExpHpCompactionRoutine @ 0x1402FAA50 (ExpHpCompactionRoutine.c)
 *     RtlpHpVsContextFree @ 0x140341800 (RtlpHpVsContextFree.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14035B378 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14055A0C0 (MiDeleteDeferredCloneDescriptors.c)
 *     MiInsertPteTracker @ 0x14055EDE0 (MiInsertPteTracker.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1405AF0D0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1405AF36C (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     PfpFlushEventBuffers @ 0x1406CA380 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1406CA6C0 (PfpFlushBuffers.c)
 *     CmUnRegisterCallback @ 0x140869C10 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x1408DE970 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1408DF3E4 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1408E03BC (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x140941DE8 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140942908 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140942AC0 (EtwpCovSampCaptureWorkerThread.c)
 *     PfTAccessTracingCleanup @ 0x14099A9FC (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1409E0340 (ViPoolDelayFreeTrimThreadRoutine.c)
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
