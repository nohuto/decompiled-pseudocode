/*
 * XREFs of MiLockWorkingSetShared @ 0x140219C70
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14020BD60 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x14021B4A0 (MiMakeHyperRangeAccessible.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     MiWalkVaRange @ 0x14023BA60 (MiWalkVaRange.c)
 *     MiAllocateKernelStackPages @ 0x14023E170 (MiAllocateKernelStackPages.c)
 *     MiSetReadOnlyOnSectionView @ 0x140240500 (MiSetReadOnlyOnSectionView.c)
 *     MiQueryAddressSpan @ 0x14025AC30 (MiQueryAddressSpan.c)
 *     MiComparePteProtections @ 0x14025B2B8 (MiComparePteProtections.c)
 *     MmQueryWorkingSetInformation @ 0x14025BFB0 (MmQueryWorkingSetInformation.c)
 *     MiAllowProtectionChange @ 0x14025EEF8 (MiAllowProtectionChange.c)
 *     MiOutPageSingleKernelStack @ 0x1402638B0 (MiOutPageSingleKernelStack.c)
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 *     MiMakeZeroedPageTablesEx @ 0x14027D47C (MiMakeZeroedPageTablesEx.c)
 *     MiDeleteSystemPageTables @ 0x14027DDDC (MiDeleteSystemPageTables.c)
 *     MiRelockFaultState @ 0x140285928 (MiRelockFaultState.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140288B80 (MiRemoveMappedPtes.c)
 *     MiLockPoolCommitWs @ 0x14028BED8 (MiLockPoolCommitWs.c)
 *     MiInPagePageTable @ 0x14028C440 (MiInPagePageTable.c)
 *     MiSplitPrivatePage @ 0x14028D630 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x14028DCEC (MiIsCfgBitMapPageShared.c)
 *     MiProtectPrivateMemory @ 0x14028E080 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiCopyToUserVa @ 0x14028EBB8 (MiCopyToUserVa.c)
 *     MiLockWorkingSetOptimal @ 0x140290314 (MiLockWorkingSetOptimal.c)
 *     MiMoveDirtyBitsToPfns @ 0x140297B10 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     NtGetWriteWatch @ 0x1402ACCE0 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x1402AE5C0 (NtUnlockVirtualMemory.c)
 *     MiQueryAddressState @ 0x1402AFDC0 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiCountSharedPages @ 0x1402E2400 (MiCountSharedPages.c)
 *     MiSoftFaultMappedView @ 0x1402E3540 (MiSoftFaultMappedView.c)
 *     MiClearNonPagedPtes @ 0x1402E9388 (MiClearNonPagedPtes.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402EB224 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402EC974 (MiReplaceRotateWithDemandZero.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402F908C (MiFlushDirtyBitsToPfn.c)
 *     MiTranslatePageForCopy @ 0x14030C534 (MiTranslatePageForCopy.c)
 *     MiLockProbePacketWorkingSet @ 0x14030F1D8 (MiLockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x140311C9C (MiEncodeProtoFill.c)
 *     MiMakeProtoLeafValid @ 0x140315C64 (MiMakeProtoLeafValid.c)
 *     MiEmptyWorkingSetInitiate @ 0x140317DA0 (MiEmptyWorkingSetInitiate.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14031AE60 (MmQuerySystemWorkingSetInformation.c)
 *     MmQueryCommitReleaseState @ 0x14031D238 (MmQueryCommitReleaseState.c)
 *     MiLockProtoPage @ 0x14031D6D4 (MiLockProtoPage.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiLockPageTableRange @ 0x1403220FC (MiLockPageTableRange.c)
 *     MmCheckProcessShadow @ 0x140323C20 (MmCheckProcessShadow.c)
 *     MiUnlockPageTableRange @ 0x14032A12C (MiUnlockPageTableRange.c)
 *     MmStoreDecommitVirtualMemory @ 0x14032B734 (MmStoreDecommitVirtualMemory.c)
 *     MiLockStealUserVm @ 0x140333FE4 (MiLockStealUserVm.c)
 *     MiSetPagingOfDriver @ 0x140336B2C (MiSetPagingOfDriver.c)
 *     MiGetWorkingSetInfoList @ 0x1403378AC (MiGetWorkingSetInfoList.c)
 *     NtLockVirtualMemory @ 0x140339070 (NtLockVirtualMemory.c)
 *     MiConvertAndFlushWsleVas @ 0x140339AFC (MiConvertAndFlushWsleVas.c)
 *     MiDeleteKernelStack @ 0x14033B750 (MiDeleteKernelStack.c)
 *     MiInitializeWorkingSetList @ 0x1403526E4 (MiInitializeWorkingSetList.c)
 *     MiSetSystemCodeProtection @ 0x140357D78 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140358454 (MiMakeDriverPagesPrivate.c)
 *     MmProtectPool @ 0x140362438 (MmProtectPool.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiLockPagedAddress @ 0x14036B274 (MiLockPagedAddress.c)
 *     MiLeapPrefetch @ 0x14037BA1C (MiLeapPrefetch.c)
 *     MmRemoveExecuteGrants @ 0x14037E690 (MmRemoveExecuteGrants.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140396E8C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiMapWithLargePages @ 0x1403B848C (MiMapWithLargePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6798 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1403C8614 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403CC4D0 (MiGetWsAndMakePageTablesNx.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F3CA8 (MmUpdateUserShadowStackValue.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4610 (MiDeleteEmptyPageTables.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B04C (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x14052CA38 (MiWalkResetCommitPages.c)
 *     MiExceptionForMappedVa @ 0x14052CF68 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x14052D054 (MiFaultInPagedPool.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052D2D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiLockDriverPageRange @ 0x14052D944 (MiLockDriverPageRange.c)
 *     MiGetFileOnlyRanges @ 0x14052E254 (MiGetFileOnlyRanges.c)
 *     MiReacquireWalkLocks @ 0x140530620 (MiReacquireWalkLocks.c)
 *     MiUnmapMdlCommon @ 0x140531664 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x14053457C (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x140534FF0 (MiSetPagesModified.c)
 *     MmReplaceImportEntry @ 0x14053585C (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140535F90 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14053660C (MiDeprioritizeVirtualAddresses.c)
 *     MmRemoveSystemCacheFromDump @ 0x140538ACC (MmRemoveSystemCacheFromDump.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053C92C (MmUpdateOldWorkingSetPages.c)
 *     MiCommitHotPatchTable @ 0x14053E800 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EB0C (MiPrepareImagePagesForHotPatch.c)
 *     MiUnmapPatchTable @ 0x14053F0DC (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x140543F7C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140544188 (MiUnmapRetpolineStubs.c)
 *     MiGetWorkingSetInfoEx @ 0x140546D20 (MiGetWorkingSetInfoEx.c)
 *     MiQueryVaPhysicalContiguity @ 0x140547194 (MiQueryVaPhysicalContiguity.c)
 *     MiAddPagesToEnclave @ 0x140549044 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405496C4 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x1405498E8 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549968 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x14054AA70 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x14054B4DC (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x14054BE84 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054D2A4 (MiProtectAweRegion.c)
 *     MiScrubAwePage @ 0x14054DC7C (MiScrubAwePage.c)
 *     MiWriteAwePtes @ 0x14054E1D8 (MiWriteAwePtes.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x140551EB4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiReleaseLargePteMappings @ 0x140553EFC (MiReleaseLargePteMappings.c)
 *     MiCombineWorkingSet @ 0x14055CB64 (MiCombineWorkingSet.c)
 *     MiMapUserLargePages @ 0x14055E670 (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x1405639C8 (MiScrubLargeMappedPage.c)
 *     MiInitializeDynamicBitmap @ 0x1407867DC (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A18A0 (MiProtectLargeKernelHalRange.c)
 *     MiMarkLargePageMappings @ 0x140A42100 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140A4C7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4DC44 (MiMarkBootKernelStack.c)
 *     MiAddLoaderHalIoMappings @ 0x140A543A4 (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402F3E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5BA4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockWorkingSetShared(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int8 v4; // al
  LONG *v5; // rbx
  unsigned __int8 v6; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v8; // rcx
  signed __int32 v9; // ett
  unsigned __int8 CurrentIrql; // r10
  _DWORD *v12; // rcx
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  int v15; // eax

  v4 = *(_BYTE *)(a1 + 184) & 7;
  if ( v4 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    return CurrentIrql;
  }
  else
  {
    if ( v4 == 2 )
      v5 = &dword_140C4F780;
    else
      v5 = (LONG *)(a1 + 192);
    v6 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v6 <= 0xFu )
    {
      a4 = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (-1 << (v6 + 1)) & 4u | a4[5];
      a4[5] = a3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v5, v6, a3, a4);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v8[6];
          v8[6] = v14 + 1;
          if ( v14 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v5);
      v9 = *v5 & 0x7FFFFFFF;
      if ( v9 != _InterlockedCompareExchange(v5, v9 + 1, v9) )
      {
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v15 = v12[6] - 1;
            v12[6] = v15;
            if ( !v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v5, v6);
      }
    }
    if ( v5[1] )
      _InterlockedExchange(v5 + 1, 0);
    return v6;
  }
}
