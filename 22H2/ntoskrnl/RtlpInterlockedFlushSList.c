/*
 * XREFs of RtlpInterlockedFlushSList @ 0x140407030
 * Callers:
 *     PfFbBufferListFlushStandby @ 0x14026E8B0 (PfFbBufferListFlushStandby.c)
 *     ExpHpCompactionRoutine @ 0x14027B0D0 (ExpHpCompactionRoutine.c)
 *     RtlpHpVsContextFree @ 0x1402C1E90 (RtlpHpVsContextFree.c)
 *     MiDrainZeroLookasides @ 0x140310AE0 (MiDrainZeroLookasides.c)
 *     ExpFlushGeneralLookaside @ 0x140317790 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x140317820 (ExFlushLookasideListEx.c)
 *     RtlpHpHeapCompact @ 0x14031D368 (RtlpHpHeapCompact.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x140325354 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140328250 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     MiFreePageFileHashPfns @ 0x14033C274 (MiFreePageFileHashPfns.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14034F67C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14055A000 (MiDeleteDeferredCloneDescriptors.c)
 *     MiInsertPteTracker @ 0x14055ED20 (MiInsertPteTracker.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1405AF010 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1405AF2AC (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     PfpFlushEventBuffers @ 0x140631270 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1406315B0 (PfpFlushBuffers.c)
 *     CmUnRegisterCallback @ 0x140869C60 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x1408DE9C0 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1408DF434 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1408E040C (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x140941E38 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140942958 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140942B10 (EtwpCovSampCaptureWorkerThread.c)
 *     PfTAccessTracingCleanup @ 0x14099A9EC (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1409E0350 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0
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
