/*
 * XREFs of PsGetIoPriorityThread @ 0x140242180
 * Callers:
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 *     ExpWorkerThread @ 0x1402417F0 (ExpWorkerThread.c)
 *     IoRetrievePriorityInfo @ 0x140256230 (IoRetrievePriorityInfo.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402670B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     KiAbSetMinimumThreadPriority @ 0x140272404 (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140272DB8 (KiAbTryIncrementIoWaiterCounts.c)
 *     CcScheduleReadAheadEx @ 0x140279480 (CcScheduleReadAheadEx.c)
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiCopyDataPageToImagePage @ 0x140284A68 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14029AAFC (MiFinishMdlForMappedFileFault.c)
 *     IoSynchronousPageWriteEx @ 0x14029C49C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14029C7C0 (IoPageReadEx.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiIssueFlowThroughFault @ 0x1402E203C (MiIssueFlowThroughFault.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402EE2CC (FsRtlpWaitForIoAtEof.c)
 *     PfSnCheckLoggingForThread @ 0x1402F3958 (PfSnCheckLoggingForThread.c)
 *     ExpApplyPrewaitBoost @ 0x14030EAD0 (ExpApplyPrewaitBoost.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1403116A8 (CcBoostLowPriorityWorkerThread.c)
 *     CcForceWriteThrough @ 0x140325D4C (CcForceWriteThrough.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140358DF0 (IopBuildAsynchronousFsdRequest.c)
 *     EtwpTraceThreadRundown @ 0x1403A9640 (EtwpTraceThreadRundown.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FCB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540074 (MiCopyImageExtentContents.c)
 *     EtwTraceThread @ 0x14062997C (EtwTraceThread.c)
 *     PfSnBeginScenario @ 0x140630458 (PfSnBeginScenario.c)
 *     MiLogRelocationRva @ 0x1406632A4 (MiLogRelocationRva.c)
 *     PspBoostJobIoPriorityCallback @ 0x14068EC50 (PspBoostJobIoPriorityCallback.c)
 *     NtSetInformationVirtualMemory @ 0x1406FA310 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1406FB400 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1296) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1124LL) & 0x100000) != 0 )
    result = 0LL;
  if ( (unsigned int)result < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1360) )
      return 2LL;
  }
  return result;
}
