/*
 * XREFs of RtlpInterlockedFlushSList @ 0x140407B90
 * Callers:
 *     MiDrainZeroLookasides @ 0x1402375D0 (MiDrainZeroLookasides.c)
 *     ExpFlushGeneralLookaside @ 0x14023CE50 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x14023CEE0 (ExFlushLookasideListEx.c)
 *     RtlpHpHeapCompact @ 0x140242578 (RtlpHpHeapCompact.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x14024A624 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14024D350 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     MiFreePageFileHashPfns @ 0x140261204 (MiFreePageFileHashPfns.c)
 *     PfFbBufferListFlushStandby @ 0x140273418 (PfFbBufferListFlushStandby.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402A0118 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExpHpCompactionRoutine @ 0x1403057A0 (ExpHpCompactionRoutine.c)
 *     RtlpHpVsContextFree @ 0x14034C550 (RtlpHpVsContextFree.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14055A300 (MiDeleteDeferredCloneDescriptors.c)
 *     MiInsertPteTracker @ 0x14055F020 (MiInsertPteTracker.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1405AF300 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1405AF59C (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     PfpFlushEventBuffers @ 0x140678C70 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x140678FB0 (PfpFlushBuffers.c)
 *     CmUnRegisterCallback @ 0x140869D70 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x1408DEAD0 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1408DF544 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1408E051C (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x140941FB8 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140942AD8 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x140942C90 (EtwpCovSampCaptureWorkerThread.c)
 *     PfTAccessTracingCleanup @ 0x14099B9FC (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1409E1340 (ViPoolDelayFreeTrimThreadRoutine.c)
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
