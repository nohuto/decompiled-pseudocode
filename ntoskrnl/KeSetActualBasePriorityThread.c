/*
 * XREFs of KeSetActualBasePriorityThread @ 0x140357730
 * Callers:
 *     MiReadyToZeroNextLargePage @ 0x140274AB0 (MiReadyToZeroNextLargePage.c)
 *     MiWakeZeroingThreads @ 0x1402A7E98 (MiWakeZeroingThreads.c)
 *     PopCreatePowerThread @ 0x140300AA4 (PopCreatePowerThread.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403561BC (MiStoreUpdateMemoryConditions.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140356474 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403565C0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403567C4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140356AC0 (SmKmStoreHelperWorker.c)
 *     CmpSetPriorityThread @ 0x140357508 (CmpSetPriorityThread.c)
 *     MiSetZeroPageThreadPriority @ 0x140357538 (MiSetZeroPageThreadPriority.c)
 *     IoApplyPriorityInfoThread @ 0x1403575F0 (IoApplyPriorityInfoThread.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140358728 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiMappedPageWriter @ 0x14038D570 (MiMappedPageWriter.c)
 *     MiZeroNodePages @ 0x14038FAA0 (MiZeroNodePages.c)
 *     MiModifiedPageWriter @ 0x1403AD2B0 (MiModifiedPageWriter.c)
 *     PopFxStaticWorkPoolThread @ 0x1403AD910 (PopFxStaticWorkPoolThread.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403ADDE0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B07D0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KeSetThreadSchedulerAssist @ 0x14056AE2C (KeSetThreadSchedulerAssist.c)
 *     PfpServiceMainThreadBoost @ 0x140580930 (PfpServiceMainThreadBoost.c)
 *     PfpServiceMainThreadUnboost @ 0x140580A80 (PfpServiceMainThreadUnboost.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1405C0194 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1405C0460 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiFlushAllStoreSwapPages @ 0x1406379DC (MiFlushAllStoreSwapPages.c)
 *     MiWakeModifiedPageWriter @ 0x14063982C (MiWakeModifiedPageWriter.c)
 *     EtwpLogger @ 0x1406926A0 (EtwpLogger.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     ExpWorkQueueManagerThread @ 0x140839860 (ExpWorkQueueManagerThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x140853088 (IopCreatePassiveInterruptRealtimeThreads.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140226BD0 (KiProcessDeferredReadyList.c)
 *     KiSetQuantumTargetThread @ 0x1402270C0 (KiSetQuantumTargetThread.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14033FBD0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAdjustRealtimePriorityFloor @ 0x14033FCCC (KiAdjustRealtimePriorityFloor.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1403578B0 (KiPriQueueThreadPriorityChanged.c)
 *     EtwTracePriority @ 0x14045EE2A (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(ULONG_PTR BugCheckParameter1, int a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  char v5; // r15
  unsigned int v6; // edi
  _BYTE *v7; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v12 = a2;
  if ( *(_UNKNOWN **)(BugCheckParameter1 + 544) == &KiInitialProcess )
    return 1LL;
  v13 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v10) = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (_KTHREAD *)BugCheckParameter1 == CurrentPrcb->CurrentThread;
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v11);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  v6 = *(char *)(BugCheckParameter1 + 563);
  *(_BYTE *)(BugCheckParameter1 + 645) = 0;
  KiSetBasePriorityAndClearDecrement(BugCheckParameter1, &v12, 0);
  KiAdjustRealtimePriorityFloor(BugCheckParameter1, v12);
  if ( v12 != *(char *)(BugCheckParameter1 + 195) )
  {
    KiSetQuantumTargetThread(BugCheckParameter1, (__int64)CurrentPrcb, v5);
    KiSetPriorityThread(BugCheckParameter1, (unsigned __int64)&v13, v12);
  }
  v7 = *(_BYTE **)(BugCheckParameter1 + 232);
  if ( v7 && (*v7 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v7, BugCheckParameter1);
  else
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v13, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(BugCheckParameter1, 1329, v6, v12, (__int64)&v12);
  return v6;
}
