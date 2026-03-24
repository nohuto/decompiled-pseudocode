/*
 * XREFs of MiUnlockWorkingSetShared @ 0x14020F750
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A820 (MiProbeAndLockPages.c)
 *     MiWalkPageTablesRecursively @ 0x14020BD60 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiUserFault @ 0x14020D730 (MiUserFault.c)
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
 *     MiMarkPteDirty @ 0x14027ABCC (MiMarkPteDirty.c)
 *     MiMakeZeroedPageTablesEx @ 0x14027D47C (MiMakeZeroedPageTablesEx.c)
 *     MiDeleteSystemPageTables @ 0x14027DDDC (MiDeleteSystemPageTables.c)
 *     MiRelockFaultState @ 0x140285928 (MiRelockFaultState.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x140288B80 (MiRemoveMappedPtes.c)
 *     MiUnlockPoolCommitWs @ 0x14028BE88 (MiUnlockPoolCommitWs.c)
 *     MiSplitPrivatePage @ 0x14028D630 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x14028DCEC (MiIsCfgBitMapPageShared.c)
 *     MiProtectPrivateMemory @ 0x14028E080 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiCopyToUserVa @ 0x14028EBB8 (MiCopyToUserVa.c)
 *     MiReleaseFaultState @ 0x14028FB74 (MiReleaseFaultState.c)
 *     MmSetAddressRangeModifiedEx @ 0x14028FCC0 (MmSetAddressRangeModifiedEx.c)
 *     MiReleaseSystemCacheView @ 0x14029037C (MiReleaseSystemCacheView.c)
 *     MiUnlockSystemVa @ 0x14029277C (MiUnlockSystemVa.c)
 *     MmUnmapViewInSystemCache @ 0x140294160 (MmUnmapViewInSystemCache.c)
 *     MiMoveDirtyBitsToPfns @ 0x140297B10 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeSystemCacheRangeValid @ 0x14029F220 (MiMakeSystemCacheRangeValid.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     NtGetWriteWatch @ 0x1402ACCE0 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x1402AE5C0 (NtUnlockVirtualMemory.c)
 *     MiQueryAddressState @ 0x1402AFDC0 (MiQueryAddressState.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiCountSharedPages @ 0x1402E2400 (MiCountSharedPages.c)
 *     MiUnlockFaultWorkingSet @ 0x1402E3CBC (MiUnlockFaultWorkingSet.c)
 *     MiClearNonPagedPtes @ 0x1402E9388 (MiClearNonPagedPtes.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402EB224 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402EC974 (MiReplaceRotateWithDemandZero.c)
 *     MiMakeSystemCachePteValid @ 0x1402F3648 (MiMakeSystemCachePteValid.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402F908C (MiFlushDirtyBitsToPfn.c)
 *     MiReleaseWalkLocks @ 0x140302EB0 (MiReleaseWalkLocks.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14030F220 (MiUnlockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x140311C9C (MiEncodeProtoFill.c)
 *     MiDirtySystemCachePte @ 0x1403159C8 (MiDirtySystemCachePte.c)
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
 *     MiMakeProtoPrivate @ 0x140547924 (MiMakeProtoPrivate.c)
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
 *     MiCheckProcessShadow @ 0x14020F840 (MiCheckProcessShadow.c)
 *     MiPreUnlockWorkingSetShared @ 0x14036BB60 (MiPreUnlockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5CFC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUnlockWorkingSetShared(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v3; // rsi
  int v4; // eax
  volatile signed __int32 *v5; // rbx
  struct _KPRCB *v6; // rcx
  _DWORD *v7; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  bool v11; // zf
  int v12; // eax
  _DWORD *v13; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2;
  if ( (*(_BYTE *)(a1 + 184) & 7u) >= 6 )
  {
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && a2 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (a2 + 1));
          v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v11 )
LABEL_31:
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 184);
    if ( (v4 & 0x8000000) != 0 || (v4 & 0x4000000) != 0 || (v4 & 0x10000000) != 0 )
    {
      MiPreUnlockWorkingSetShared(a1, a2);
      LOBYTE(v4) = *(_BYTE *)(a1 + 184);
    }
    if ( (v4 & 7) == 2 )
      v5 = &dword_140C4F780;
    else
      v5 = (volatile signed __int32 *)(a1 + 192);
    MiCheckProcessShadow(a1, 1LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v5, retaddr);
    }
    else
    {
      _InterlockedAnd(v5, 0xBFFFFFFF);
      _InterlockedDecrement(v5);
    }
    v6 = KeGetCurrentPrcb();
    v7 = v6->SchedulerAssist;
    if ( v7 )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v12 = v7[6] - 1;
        v7[6] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v11 = ((unsigned int)result & v13[5]) == 0;
          v13[5] &= result;
          if ( v11 )
            goto LABEL_31;
        }
      }
    }
  }
  __writecr8(v3);
  return result;
}
