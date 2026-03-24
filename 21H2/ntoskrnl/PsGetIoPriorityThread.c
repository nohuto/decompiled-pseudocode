/*
 * XREFs of PsGetIoPriorityThread @ 0x140242810
 * Callers:
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     ExpWorkerThread @ 0x140241E80 (ExpWorkerThread.c)
 *     IoRetrievePriorityInfo @ 0x1402569D0 (IoRetrievePriorityInfo.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiIssueFlowThroughFault @ 0x14028C09C (MiIssueFlowThroughFault.c)
 *     FsRtlpWaitForIoAtEof @ 0x140290A2C (FsRtlpWaitForIoAtEof.c)
 *     ExpApplyPrewaitBoost @ 0x1402B73B0 (ExpApplyPrewaitBoost.c)
 *     CcForceWriteThrough @ 0x1402CC9DC (CcForceWriteThrough.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1402D083C (CcBoostLowPriorityWorkerThread.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402D9260 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1402E7890 (IopBuildAsynchronousFsdRequest.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402F1D84 (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402F2738 (KiAbTryIncrementIoWaiterCounts.c)
 *     CcScheduleReadAheadEx @ 0x1402F8E00 (CcScheduleReadAheadEx.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14031A46C (MiFinishMdlForMappedFileFault.c)
 *     IoSynchronousPageWriteEx @ 0x14031BE0C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14031C130 (IoPageReadEx.c)
 *     PfSnCheckLoggingForThread @ 0x14035EC2C (PfSnCheckLoggingForThread.c)
 *     EtwpTraceThreadRundown @ 0x1403AE820 (EtwpTraceThreadRundown.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FD78 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540134 (MiCopyImageExtentContents.c)
 *     EtwTraceThread @ 0x14062955C (EtwTraceThread.c)
 *     PspBoostJobIoPriorityCallback @ 0x1406ABCA0 (PspBoostJobIoPriorityCallback.c)
 *     PfSnBeginScenario @ 0x1406CBBC4 (PfSnBeginScenario.c)
 *     NtSetInformationVirtualMemory @ 0x14070F280 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x140710860 (MmPrefetchVirtualAddresses.c)
 *     MiLogRelocationRva @ 0x1407138D4 (MiLogRelocationRva.c)
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
