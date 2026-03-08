/*
 * XREFs of PsGetIoPriorityThread @ 0x1402832C0
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14020D0BC (CcScheduleReadAheadNuma.c)
 *     CcAsyncCopyRead @ 0x140216AA0 (CcAsyncCopyRead.c)
 *     FsRtlpWaitForIoAtEof @ 0x140240CC0 (FsRtlpWaitForIoAtEof.c)
 *     IoSynchronousPageWriteEx @ 0x14024F830 (IoSynchronousPageWriteEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x14024FAC0 (IopBuildDeviceIoControlRequest.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140282B80 (KiAbTryIncrementIoWaiterCounts.c)
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiFinishMdlForMappedFileFault @ 0x14028BD60 (MiFinishMdlForMappedFileFault.c)
 *     MiIssueFlowThroughFault @ 0x1402A2C24 (MiIssueFlowThroughFault.c)
 *     IoRetrievePriorityInfo @ 0x1402AB5C0 (IoRetrievePriorityInfo.c)
 *     PfSnCheckLoggingForThread @ 0x1402EA88C (PfSnCheckLoggingForThread.c)
 *     CcForceWriteThrough @ 0x1402FD990 (CcForceWriteThrough.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140300D74 (CcBoostLowPriorityWorkerThread.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     ExpWorkerThread @ 0x140352200 (ExpWorkerThread.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x140356E2C (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     KiAbSetMinimumThreadPriority @ 0x140357EB4 (KiAbSetMinimumThreadPriority.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14036D3F0 (IopBuildAsynchronousFsdRequest.c)
 *     EtwpTraceThreadRundown @ 0x14036FE60 (EtwpTraceThreadRundown.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1405BDBDC (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x140639EB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 *     MmPrefetchVirtualAddresses @ 0x14067E600 (MmPrefetchVirtualAddresses.c)
 *     NtQueryInformationThread @ 0x1406A7BF0 (NtQueryInformationThread.c)
 *     NtSetInformationVirtualMemory @ 0x14075BCB0 (NtSetInformationVirtualMemory.c)
 *     PfSnBeginScenario @ 0x1407E4764 (PfSnBeginScenario.c)
 *     EtwTraceThread @ 0x1407EBAB0 (EtwTraceThread.c)
 *     MiLogRelocationRva @ 0x1407F4A00 (MiLogRelocationRva.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetIoPriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // edx

  result = (*(_DWORD *)(a1 + 1376) >> 9) & 7;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 1068);
    if ( (int)result >= v4 )
      result = (unsigned int)v4;
  }
  if ( (int)result < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1440) )
      return 2LL;
  }
  return result;
}
