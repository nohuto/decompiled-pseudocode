/*
 * XREFs of PsGetIoPriorityThread @ 0x1402A8A90
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x140250E60 (IoSynchronousPageWriteEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402510F0 (IopBuildDeviceIoControlRequest.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402A8350 (KiAbTryIncrementIoWaiterCounts.c)
 *     ExpApplyPriorityBoost @ 0x1402A8420 (ExpApplyPriorityBoost.c)
 *     ExpWorkerThread @ 0x1402BEB60 (ExpWorkerThread.c)
 *     CcAsyncCopyRead @ 0x1402C1040 (CcAsyncCopyRead.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402E1B40 (MiFinishMdlForMappedFileFault.c)
 *     MiIssueFlowThroughFault @ 0x1402EEEF0 (MiIssueFlowThroughFault.c)
 *     FsRtlpWaitForIoAtEof @ 0x140304990 (FsRtlpWaitForIoAtEof.c)
 *     KiAbSetMinimumThreadPriority @ 0x140318C48 (KiAbSetMinimumThreadPriority.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x14031AF9C (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     CcScheduleReadAheadNuma @ 0x140328DDC (CcScheduleReadAheadNuma.c)
 *     IoRetrievePriorityInfo @ 0x140332710 (IoRetrievePriorityInfo.c)
 *     PfSnCheckLoggingForThread @ 0x14035625C (PfSnCheckLoggingForThread.c)
 *     CcForceWriteThrough @ 0x140368ED0 (CcForceWriteThrough.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14036D094 (CcBoostLowPriorityWorkerThread.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403715A0 (IopBuildAsynchronousFsdRequest.c)
 *     EtwpTraceThreadRundown @ 0x14038C22C (EtwpTraceThreadRundown.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1405C008C (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C334 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 *     MmPrefetchVirtualAddresses @ 0x1406819E0 (MmPrefetchVirtualAddresses.c)
 *     MiLogRelocationRva @ 0x1406ABDA0 (MiLogRelocationRva.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 *     PfSnBeginScenario @ 0x1407508D0 (PfSnBeginScenario.c)
 *     NtQueryInformationThread @ 0x14079FBE0 (NtQueryInformationThread.c)
 *     NtSetInformationVirtualMemory @ 0x1407A4530 (NtSetInformationVirtualMemory.c)
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
