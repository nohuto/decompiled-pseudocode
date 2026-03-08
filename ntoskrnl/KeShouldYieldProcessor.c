/*
 * XREFs of KeShouldYieldProcessor @ 0x1402C9870
 * Callers:
 *     MiChangePageAttributeBatch @ 0x140211998 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttributeContiguous @ 0x140214270 (MiChangePageAttributeContiguous.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiDispatchFault @ 0x14026A900 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MmPurgeSection @ 0x1402836F0 (MmPurgeSection.c)
 *     MiUnlockMdlWritePages @ 0x140284DD0 (MiUnlockMdlWritePages.c)
 *     MiDereferenceIoPages @ 0x14029B654 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x14029BA60 (MiReferenceIoPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14029F4D8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402CA150 (NtGetWriteWatch.c)
 *     MiWalkVaRange @ 0x1402CECEC (MiWalkVaRange.c)
 *     MiQueryAddressSpan @ 0x14031E2D0 (MiQueryAddressSpan.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiFillPoolCommitPageTable @ 0x14032F1F0 (MiFillPoolCommitPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x14032F870 (MiMoveDirtyBitsToPfns.c)
 *     MiCommitPoolMemory @ 0x14032FC90 (MiCommitPoolMemory.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     MiProbePacketContended @ 0x140347478 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 *     MiSoftFaultMappedView @ 0x14034A9A0 (MiSoftFaultMappedView.c)
 *     MiGetFreeLargePagesSearchTypes @ 0x14034F8C0 (MiGetFreeLargePagesSearchTypes.c)
 *     MiDoGangAssignment @ 0x140386D14 (MiDoGangAssignment.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140386D90 (MiInitializeLargeMdlLeafPfns.c)
 *     MiZeroPageCalibrateDpc @ 0x140389C70 (MiZeroPageCalibrateDpc.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B3040 (MiConvertSmallPageRangeToLarge.c)
 *     MiDemoteSlabEntriesDpc @ 0x1403C7F40 (MiDemoteSlabEntriesDpc.c)
 *     MiWritePageFileHash @ 0x1404670A6 (MiWritePageFileHash.c)
 *     IopMcShouldYield @ 0x14055CFD0 (IopMcShouldYield.c)
 *     MiInitializeDynamicPfns @ 0x140618AB8 (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x14061E158 (MiHugePageOperation.c)
 *     MiSetGraphicsPtes @ 0x1406240B0 (MiSetGraphicsPtes.c)
 *     MiUnlinkBadPages @ 0x1406288F4 (MiUnlinkBadPages.c)
 *     MiDeleteStaleCacheMaps @ 0x14062B5C0 (MiDeleteStaleCacheMaps.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14062C34C (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiInsertViewOfPhysicalSection @ 0x14062E820 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14062EF5C (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x14062F2D4 (MiVadRangeIsIoSpace.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140630618 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDecrementLargeSubsections @ 0x14063A2E8 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14063AA00 (MiEnableLargeSubsection.c)
 *     MiAddPagesToEnclave @ 0x14064445C (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140644C84 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406469A0 (MiQueryVaPhysicalContiguity.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x140648B3C (MiPreparePhysicalPagesMdlForFree.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiArePageContentsZero @ 0x14064AE74 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x140659030 (MiTransferPartitionPageRun.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065B0E0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065BE5C (MiScrubLargeMappedPage.c)
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MiMapUserLargePages @ 0x1406667E0 (MiMapUserLargePages.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405FB09C (EtwTraceShouldYieldProcessor.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rax
  LOGICAL v1; // edi
  int v2; // r8d
  __int64 v3; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // ebp
  _KTHREAD *NextThread; // rcx
  unsigned int v9; // esi
  struct _KPRCB *v10; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v9 = 1;
    v2 = 1;
    if ( DpcTimeCount > 7 )
    {
      if ( CurrentPrcb->QuantumEnd )
        goto LABEL_14;
      goto LABEL_10;
    }
    goto LABEL_6;
  }
  if ( !CurrentPrcb->NestingLevel )
  {
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v9 = 2;
      goto LABEL_14;
    }
    if ( CurrentPrcb->QuantumEnd )
    {
      v9 = 3;
      goto LABEL_14;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v9 = 4;
      goto LABEL_14;
    }
LABEL_6:
    if ( DpcWatchdogCount <= 7 )
      return 0;
    if ( !v2 )
    {
LABEL_21:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      v10 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v10->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v12 = *SchedulerAssist;
        do
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
        }
        while ( v13 != v12 );
        if ( (v12 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
      _enable();
      v9 = 0;
      goto LABEL_14;
    }
    goto LABEL_10;
  }
  v3 = 1LL;
  if ( DpcWatchdogCount <= 7 )
    return 0;
  if ( CurrentPrcb->QuantumEnd )
  {
    v9 = 7;
    goto LABEL_14;
  }
LABEL_10:
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v9 = 5;
    goto LABEL_14;
  }
  if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
    goto LABEL_21;
  v9 = 6;
LABEL_14:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v9, DpcWatchdogCount, DpcTimeCount, v3);
  LOBYTE(v1) = v9 != 0;
  return v1;
}
