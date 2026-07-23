/*
 * XREFs of PsGetIoPriorityThread @ 0x1402E7060
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiIssueFlowThroughFault @ 0x14020923C (MiIssueFlowThroughFault.c)
 *     FsRtlpWaitForIoAtEof @ 0x14020E99C (FsRtlpWaitForIoAtEof.c)
 *     ExpApplyPrewaitBoost @ 0x140235590 (ExpApplyPrewaitBoost.c)
 *     CcForceWriteThrough @ 0x14024B03C (CcForceWriteThrough.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14024ECCC (CcBoostLowPriorityWorkerThread.c)
 *     IoRetrievePriorityInfo @ 0x140277F40 (IoRetrievePriorityInfo.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14028A5B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140298BE0 (IopBuildAsynchronousFsdRequest.c)
 *     PfSnCheckLoggingForThread @ 0x1402A3B5C (PfSnCheckLoggingForThread.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     ExpWorkerThread @ 0x1402E66D0 (ExpWorkerThread.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402FCAD4 (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402FD488 (KiAbTryIncrementIoWaiterCounts.c)
 *     CcScheduleReadAheadEx @ 0x140303B50 (CcScheduleReadAheadEx.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403251BC (MiFinishMdlForMappedFileFault.c)
 *     IoSynchronousPageWriteEx @ 0x140326B5C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140326E80 (IoPageReadEx.c)
 *     EtwpTraceThreadRundown @ 0x1403AE970 (EtwpTraceThreadRundown.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FFB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540374 (MiCopyImageExtentContents.c)
 *     PspBoostJobIoPriorityCallback @ 0x14060A390 (PspBoostJobIoPriorityCallback.c)
 *     PfSnBeginScenario @ 0x14067A4B4 (PfSnBeginScenario.c)
 *     EtwTraceThread @ 0x14068FC44 (EtwTraceThread.c)
 *     NtSetInformationVirtualMemory @ 0x1406BD8D0 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1406BEEB0 (MmPrefetchVirtualAddresses.c)
 *     MiLogRelocationRva @ 0x1406C1F24 (MiLogRelocationRva.c)
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
