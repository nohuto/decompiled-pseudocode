/*
 * XREFs of PsGetIoPriorityThread @ 0x14033D760
 * Callers:
 *     CcBoostLowPriorityWorkerThread @ 0x14023C3B4 (CcBoostLowPriorityWorkerThread.c)
 *     MiIssueFlowThroughFault @ 0x14023ECD8 (MiIssueFlowThroughFault.c)
 *     CcForceWriteThrough @ 0x140253510 (CcForceWriteThrough.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14029BAD0 (IopBuildAsynchronousFsdRequest.c)
 *     CcScheduleReadAheadNuma @ 0x14029CC2C (CcScheduleReadAheadNuma.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     ExpApplyPrewaitBoost @ 0x14033B6F0 (ExpApplyPrewaitBoost.c)
 *     ExpWorkerThread @ 0x14033CBF0 (ExpWorkerThread.c)
 *     MiFinishMdlForMappedFileFault @ 0x14033DC30 (MiFinishMdlForMappedFileFault.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14033E1B0 (KiAbTryIncrementIoWaiterCounts.c)
 *     IoRetrievePriorityInfo @ 0x14033FD80 (IoRetrievePriorityInfo.c)
 *     IoSynchronousPageWriteEx @ 0x140340130 (IoSynchronousPageWriteEx.c)
 *     KiAbSetMinimumThreadPriority @ 0x14035A424 (KiAbSetMinimumThreadPriority.c)
 *     FsRtlpWaitForIoAtEof @ 0x14035D3E0 (FsRtlpWaitForIoAtEof.c)
 *     PfSnCheckLoggingForThread @ 0x140366BE8 (PfSnCheckLoggingForThread.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14037CFB8 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     EtwpTraceThreadRundown @ 0x1403AB344 (EtwpTraceThreadRundown.c)
 *     IopSetIrpPriorityHintFromFileObject @ 0x140557078 (IopSetIrpPriorityHintFromFileObject.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14059DB28 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     PspBoostJobIoPriorityCallback @ 0x1406CA810 (PspBoostJobIoPriorityCallback.c)
 *     MmPrefetchVirtualAddresses @ 0x1406EBFB0 (MmPrefetchVirtualAddresses.c)
 *     EtwTraceThread @ 0x1406F653C (EtwTraceThread.c)
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 *     PfSnBeginScenario @ 0x1407DCF7C (PfSnBeginScenario.c)
 *     MiLogRelocationRva @ 0x1407E5148 (MiLogRelocationRva.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1376) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1124LL) & 0x100000) != 0 )
  {
    result = 0LL;
  }
  else if ( (unsigned int)result >= 2 )
  {
    return result;
  }
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1440) )
      return 2LL;
  }
  return result;
}
