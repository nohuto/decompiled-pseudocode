/*
 * XREFs of KeQueryPriorityThread @ 0x140304B70
 * Callers:
 *     MiZeroInParallel @ 0x140304230 (MiZeroInParallel.c)
 *     FsRtlpWaitForIoAtEof @ 0x140304990 (FsRtlpWaitForIoAtEof.c)
 *     LZNT1DecompressChunkNewThread @ 0x140304D34 (LZNT1DecompressChunkNewThread.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140344B84 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     PoNotifyMediaBuffering @ 0x1403AEF50 (PoNotifyMediaBuffering.c)
 *     MiModifiedPageWriter @ 0x1403B20D0 (MiModifiedPageWriter.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1405C008C (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1405C2644 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1405C2910 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiSetIdealProcessorThread @ 0x1406670DC (MiSetIdealProcessorThread.c)
 *     MiInSwapStore @ 0x1406816C4 (MiInSwapStore.c)
 *     PfSnPrefetchSections @ 0x14074D088 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x14074D354 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchScenario @ 0x1407DB6B0 (PfSnPrefetchScenario.c)
 *     MiZeroHugeRangeCore @ 0x140A2DF6C (MiZeroHugeRangeCore.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140AD2EB0 (ViPendingQueuePassiveLevelCompletion.c)
 * Callees:
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x14056EB4C (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 */

KPRIORITY __stdcall KeQueryPriorityThread(PKTHREAD Thread)
{
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  if ( (*((_DWORD *)&Thread->0 + 1) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityOnPriorityQuery((ULONG_PTR)Thread);
  return Thread->Priority;
}
