/*
 * XREFs of MiLockWorkingSetShared @ 0x14032DAF0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14020AAF0 (MiSetReadOnlyOnSectionView.c)
 *     MiClearNonPagedPtes @ 0x14020DF88 (MiClearNonPagedPtes.c)
 *     MiMakeZeroedPageTablesEx @ 0x14020F130 (MiMakeZeroedPageTablesEx.c)
 *     MiDeleteSystemPageTables @ 0x14020F540 (MiDeleteSystemPageTables.c)
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140211730 (MiCopyToUserVa.c)
 *     MiWalkPageTablesRecursively @ 0x140223160 (MiWalkPageTablesRecursively.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402245D0 (MiTrimOrAgeWorkingSet.c)
 *     MiRelockFaultState @ 0x14022853C (MiRelockFaultState.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MmQueryWorkingSetInformation @ 0x140299640 (MmQueryWorkingSetInformation.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14029F4D8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiLockPagedAddress @ 0x1402A1684 (MiLockPagedAddress.c)
 *     MiTranslatePageForCopy @ 0x1402A1FD4 (MiTranslatePageForCopy.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiLockProtoPage @ 0x1402A4008 (MiLockProtoPage.c)
 *     MiInitializeWorkingSetList @ 0x1402A6260 (MiInitializeWorkingSetList.c)
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x1402AFF28 (MiSetPagingOfDriver.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402CA150 (NtGetWriteWatch.c)
 *     MiWalkVaRange @ 0x1402CECEC (MiWalkVaRange.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1402D426C (MiDeleteEmptyPageTableCommit.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402D4830 (MiFlushDirtyBitsToPfn.c)
 *     MiOutPageSingleKernelStack @ 0x1402DB980 (MiOutPageSingleKernelStack.c)
 *     MiComparePteProtections @ 0x1402DE51C (MiComparePteProtections.c)
 *     MiLockProbePacketWorkingSet @ 0x1402E0344 (MiLockProbePacketWorkingSet.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402E1B88 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDeleteEmptyPageTables @ 0x1402EB5E0 (MiDeleteEmptyPageTables.c)
 *     MiMakeProtoLeafValid @ 0x1402F70B0 (MiMakeProtoLeafValid.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1402F71FC (MmQuerySystemWorkingSetInformation.c)
 *     MiGetWorkingSetInfoEx @ 0x1402F7DFC (MiGetWorkingSetInfoEx.c)
 *     MmQueryCommitReleaseState @ 0x1402FB050 (MmQueryCommitReleaseState.c)
 *     MiEmptyWorkingSetInitiate @ 0x140301814 (MiEmptyWorkingSetInitiate.c)
 *     MmRemoveExecuteGrants @ 0x14030213C (MmRemoveExecuteGrants.c)
 *     MmProtectDriverSection @ 0x140302930 (MmProtectDriverSection.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MiCountSharedPages @ 0x14031DE80 (MiCountSharedPages.c)
 *     MiQueryAddressSpan @ 0x14031E2D0 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiMakeHyperRangeAccessible @ 0x1403219F0 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiDeleteKernelStack @ 0x14032D7F0 (MiDeleteKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiFillPoolCommitPageTable @ 0x14032F1F0 (MiFillPoolCommitPageTable.c)
 *     MiLockWorkingSetOptimal @ 0x14032F7CC (MiLockWorkingSetOptimal.c)
 *     MiMoveDirtyBitsToPfns @ 0x14032F870 (MiMoveDirtyBitsToPfns.c)
 *     MiCommitPoolMemory @ 0x14032FC90 (MiCommitPoolMemory.c)
 *     MiRemoveVad @ 0x140333090 (MiRemoveVad.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 *     MiIsCfgBitMapPageShared @ 0x140346620 (MiIsCfgBitMapPageShared.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 *     MiSoftFaultMappedView @ 0x14034A9A0 (MiSoftFaultMappedView.c)
 *     MiAllowProtectionChange @ 0x140367C88 (MiAllowProtectionChange.c)
 *     MiEncodeProtoFill @ 0x140369074 (MiEncodeProtoFill.c)
 *     MiConvertAndFlushWsleVas @ 0x14036C29C (MiConvertAndFlushWsleVas.c)
 *     MiMapWithLargePages @ 0x14038A6D4 (MiMapWithLargePages.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiMapMdlCommon @ 0x1403A2070 (MiMapMdlCommon.c)
 *     MiCopyWorkingSetFields @ 0x1403A93E4 (MiCopyWorkingSetFields.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403AC164 (MiGetWsAndMakePageTablesNx.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 *     MmCheckProcessShadow @ 0x1403CA630 (MmCheckProcessShadow.c)
 *     MiReacquireWalkLocks @ 0x140463468 (MiReacquireWalkLocks.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406157F0 (MiCheckCommitReleaseFromVad.c)
 *     MiWalkResetCommitPages @ 0x140617208 (MiWalkResetCommitPages.c)
 *     MiLockDriverPageRange @ 0x1406179F0 (MiLockDriverPageRange.c)
 *     MiGetFileOnlyRanges @ 0x140618854 (MiGetFileOnlyRanges.c)
 *     MiUnmapMdlCommon @ 0x14061BD98 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x1406240B0 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062AB70 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062B2BC (MiDeprioritizeVirtualAddresses.c)
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x14062E2CC (MmRemoveSystemCacheFromDump.c)
 *     MiExceptionForMappedVa @ 0x14062E6B0 (MiExceptionForMappedVa.c)
 *     MiFaultInPagedPool @ 0x14062E748 (MiFaultInPagedPool.c)
 *     MiInsertViewOfPhysicalSection @ 0x14062E820 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14062EF5C (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x14062F2D4 (MiVadRangeIsIoSpace.c)
 *     MiObtainRotateProtectionRanges @ 0x1406304A8 (MiObtainRotateProtectionRanges.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140630618 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiHandleForceTrimWorkingSets @ 0x1406326A0 (MiHandleForceTrimWorkingSets.c)
 *     MmUpdateOldWorkingSetPages @ 0x1406332BC (MmUpdateOldWorkingSetPages.c)
 *     MiMapRetpolineStubs @ 0x14063E2EC (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14063EE24 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14063F9FC (MiClearDriverHotPatchPtes.c)
 *     MiCommitHotPatchTable @ 0x14063FEB8 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406404D8 (MiPrepareImagePagesForHotPatch.c)
 *     MmMapHotPatchTablePage @ 0x140640C8C (MmMapHotPatchTablePage.c)
 *     MiDeleteKernelShadowStack @ 0x140641FD4 (MiDeleteKernelShadowStack.c)
 *     MmUpdateUserShadowStackValue @ 0x1406441CC (MmUpdateUserShadowStackValue.c)
 *     MiAddPagesToEnclave @ 0x14064445C (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140644C84 (MiCommitEnclavePages.c)
 *     MiCountCommittedPages @ 0x140644EA8 (MiCountCommittedPages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1406465DC (MiWriteEnclavePte.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406469A0 (MiQueryVaPhysicalContiguity.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiUnmapLegacyAwePage @ 0x14064992C (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiLockPageTableRange @ 0x14064AAA8 (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x14064AC34 (MiUnlockPageTableRange.c)
 *     MiCombineWorkingSet @ 0x140650E28 (MiCombineWorkingSet.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065B0E0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065BE5C (MiScrubLargeMappedPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065D1F4 (MiReleaseLargePdeMappings.c)
 *     MiComputeIdealLargePage @ 0x140665140 (MiComputeIdealLargePage.c)
 *     MiMapUserLargePages @ 0x1406667E0 (MiMapUserLargePages.c)
 *     MiInitializeDynamicBitmap @ 0x14080A0E4 (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x14080A3F0 (MiProtectLargeKernelHalRange.c)
 *     MmUnlockPhysicalPagesByVa @ 0x140A2AB10 (MmUnlockPhysicalPagesByVa.c)
 *     MiAddLoaderHalIoMappings @ 0x140B39B80 (MiAddLoaderHalIoMappings.c)
 *     MiMarkBootKernelStack @ 0x140B3AD3C (MiMarkBootKernelStack.c)
 *     MiMarkLargePageMappings @ 0x140B4F638 (MiMarkLargePageMappings.c)
 *     MmFreeLoaderBlock @ 0x140B5C404 (MmFreeLoaderBlock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockWorkingSetShared(__int64 a1)
{
  unsigned __int8 v1; // al
  volatile __int32 *v2; // rbx
  unsigned __int8 v3; // di
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r8
  signed __int32 v10; // [rsp+30h] [rbp+8h]
  signed __int32 v11; // [rsp+30h] [rbp+8h]
  signed __int32 v12; // [rsp+38h] [rbp+10h]

  v1 = *(_BYTE *)(a1 + 184) & 7;
  if ( v1 > 4u )
  {
    if ( v1 != 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v7) = 4;
        else
          v7 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v7;
      }
      return CurrentIrql;
    }
    goto LABEL_3;
  }
  if ( v1 != 2 )
  {
LABEL_3:
    v2 = (volatile __int32 *)(a1 + 192);
    goto LABEL_4;
  }
  v2 = (volatile __int32 *)&unk_140C69E00;
LABEL_4:
  v3 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v3 <= 0xFu )
  {
    v8 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v3 == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << (v3 + 1)) & 4;
    v8[5] |= v9;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, v3);
  }
  else
  {
    _m_prefetchw((const void *)v2);
    v10 = *v2 & 0x7FFFFFFF;
    v12 = _InterlockedCompareExchange(v2, v10 + 1, v10);
    if ( v12 != v10 )
    {
      while ( v12 >= 0 )
      {
        v11 = v12;
        v12 = _InterlockedCompareExchange(v2, v12 + 1, v12);
        if ( v12 == v11 )
          goto LABEL_7;
      }
      ExpWaitForSpinLockSharedAndAcquire((unsigned __int64)v2, v3);
    }
  }
LABEL_7:
  if ( *((_DWORD *)v2 + 1) )
    _InterlockedExchange(v2 + 1, 0);
  return v3;
}
