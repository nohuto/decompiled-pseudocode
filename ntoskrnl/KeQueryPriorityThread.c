/*
 * XREFs of KeQueryPriorityThread @ 0x140240EA0
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x140240CC0 (FsRtlpWaitForIoAtEof.c)
 *     MiZeroInParallel @ 0x140242EB8 (MiZeroInParallel.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402EDF30 (LZNT1DecompressChunkNewThread.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140356474 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     PoNotifyMediaBuffering @ 0x1403AA200 (PoNotifyMediaBuffering.c)
 *     MiModifiedPageWriter @ 0x1403AD2B0 (MiModifiedPageWriter.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1405BDBDC (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1405C0194 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1405C0460 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiSetIdealProcessorThread @ 0x140664A8C (MiSetIdealProcessorThread.c)
 *     MiInSwapStore @ 0x14067E2E4 (MiInSwapStore.c)
 *     PfSnPrefetchScenario @ 0x1407E1578 (PfSnPrefetchScenario.c)
 *     PfSnPrefetchSections @ 0x1407E16A0 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1407E196C (PfSnPrefetchSectionsCleanup.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140ACEEB0 (ViPendingQueuePassiveLevelCompletion.c)
 * Callees:
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x14056C4D8 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 */

KPRIORITY __stdcall KeQueryPriorityThread(PKTHREAD Thread)
{
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  if ( (*((_DWORD *)&Thread->0 + 1) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityOnPriorityQuery((ULONG_PTR)Thread);
  return Thread->Priority;
}
