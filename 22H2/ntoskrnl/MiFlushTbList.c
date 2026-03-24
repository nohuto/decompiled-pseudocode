/*
 * XREFs of MiFlushTbList @ 0x1402BBBB0
 * Callers:
 *     MiGetNextPageTablePte @ 0x14020CD70 (MiGetNextPageTablePte.c)
 *     MiDeletePteList @ 0x140231190 (MiDeletePteList.c)
 *     MiZeroPage @ 0x140232C80 (MiZeroPage.c)
 *     MiWalkVaRange @ 0x14023BA60 (MiWalkVaRange.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiGetPteFromCopyList @ 0x1402402F0 (MiGetPteFromCopyList.c)
 *     MiSetReadOnlyOnSectionView @ 0x140240500 (MiSetReadOnlyOnSectionView.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiProtectPrivateMemory @ 0x14028E080 (MiProtectPrivateMemory.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MmSetAddressRangeModifiedEx @ 0x14028FCC0 (MmSetAddressRangeModifiedEx.c)
 *     MmMapViewInSystemCache @ 0x140291460 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x140292B80 (MiObtainSystemCacheView.c)
 *     MiMoveDirtyBitsToPfns @ 0x140297B10 (MiMoveDirtyBitsToPfns.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MiFreeWsleList @ 0x1402A79B0 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x1402A7B80 (MiWsleFlush.c)
 *     NtGetWriteWatch @ 0x1402ACCE0 (NtGetWriteWatch.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     MiFlushTbAsNeeded @ 0x1402B66A0 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x1402B8110 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x1402BA020 (MiAgePteWorker.c)
 *     MiTerminateWsleCluster @ 0x1402BB3B0 (MiTerminateWsleCluster.c)
 *     MiReplenishBitMap @ 0x1402DEAF0 (MiReplenishBitMap.c)
 *     MiFlushTbListEarly @ 0x1402DF198 (MiFlushTbListEarly.c)
 *     MiDeleteNonPagedPoolTail @ 0x1402E99A0 (MiDeleteNonPagedPoolTail.c)
 *     MmUnmapIoSpace @ 0x1402EA680 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1402EA790 (MiZeroAndFlushPtes.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402EC974 (MiReplaceRotateWithDemandZero.c)
 *     MiZeroPageWorkMapping @ 0x1402EDC7C (MiZeroPageWorkMapping.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402F908C (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSystemPageTableTail @ 0x140311190 (MiDeleteSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x140314400 (MiGetNextPageTableTail.c)
 *     MiCreateSystemPageTableTail @ 0x14031A2A0 (MiCreateSystemPageTableTail.c)
 *     MiFlushHyperSpace @ 0x14032BF00 (MiFlushHyperSpace.c)
 *     MiSetPagingOfDriver @ 0x140336B2C (MiSetPagingOfDriver.c)
 *     MmOutPageKernelStack @ 0x140355EB4 (MmOutPageKernelStack.c)
 *     MiCreateSystemPageTable @ 0x140356770 (MiCreateSystemPageTable.c)
 *     MiSetSystemCodeProtection @ 0x140357D78 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x140362438 (MmProtectPool.c)
 *     MiReplacePageTablePage @ 0x1403634C0 (MiReplacePageTablePage.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiDecommitLargePoolVa @ 0x1403714C0 (MiDecommitLargePoolVa.c)
 *     MiFlushValidPteFromTb @ 0x140378B6C (MiFlushValidPteFromTb.c)
 *     MmSetPageProtection @ 0x1403796F0 (MmSetPageProtection.c)
 *     MmRemoveExecuteGrants @ 0x14037E690 (MmRemoveExecuteGrants.c)
 *     MiMapMemoryDumpMdl @ 0x140383AF4 (MiMapMemoryDumpMdl.c)
 *     MiResetAccessBitPte @ 0x14039B0F0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitsTail @ 0x14039CE80 (MiResetAccessBitsTail.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B98EC (MiReplacePfnWithGapMapping.c)
 *     MiClearSystemAccessBits @ 0x1403B9ADC (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9BC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiMapMdlCommon @ 0x1403C8614 (MiMapMdlCommon.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F3AC8 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTableTail @ 0x1403F44C0 (MiDeleteEmptyPageTableTail.c)
 *     MiZeroWithSystemPtes @ 0x1403F48B8 (MiZeroWithSystemPtes.c)
 *     MiReplicatePfnDatabaseMappings @ 0x14052EE6C (MiReplicatePfnDatabaseMappings.c)
 *     MiUnmapMdlCommon @ 0x140531664 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1405320F0 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14053BF10 (MiSimpleAgeWorkingSetTail.c)
 *     MiClearDriverHotPatchPtes @ 0x14053E368 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053F0DC (MiUnmapPatchTable.c)
 *     MiUnmapRetpolineStubs @ 0x140544188 (MiUnmapRetpolineStubs.c)
 *     MiLargePageFault @ 0x1405489F4 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549968 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x14054A5DC (MiFlushEnclaveTb.c)
 *     MiFreePhysicalPages @ 0x14054BE84 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054D2A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E1D8 (MiWriteAwePtes.c)
 *     MiFlushKernelCfgBitmap @ 0x14055392C (MiFlushKernelCfgBitmap.c)
 *     MiReleaseLargePteMappings @ 0x140553EFC (MiReleaseLargePteMappings.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140559268 (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x14055A9A4 (MiHandleForkTransitionPte.c)
 *     MiScrubLargeMappedPage @ 0x1405639C8 (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A18A0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1408D19B4 (MmDeleteShadowMapping.c)
 *     MmFreeLoaderBlock @ 0x140A4C7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4DC44 (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4F9F0 (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x140A4FE60 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140A50050 (MiFreeBootDriverPages.c)
 *     MiInitializeTbFlush @ 0x140A55380 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A73CE0 (MiProtectSharedUserPage.c)
 * Callees:
 *     KeFlushTb @ 0x14022FA90 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x1402BBCB0 (KeFlushMultipleRangeTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B6E38 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C8E4C (KeFlushMultipleRangeCurrentTb.c)
 */

void __fastcall MiFlushTbList(__int64 a1, _KPROCESS *Process)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int64 v5; // r10
  unsigned int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx

  v3 = *(unsigned int *)(a1 + 12);
  if ( !(_DWORD)v3 )
    return;
  v4 = *(unsigned __int8 *)(a1 + 4);
  v5 = qword_140C4DF90;
  if ( (v4 & 2) == 0 )
  {
    v6 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 != 1 )
      goto LABEL_17;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].Affinity.Bitmap[5] || Process->SecureState.SecureHandle )
      v5 = -1LL;
  }
  v6 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 1 )
  {
    v7 = 0LL;
    goto LABEL_8;
  }
LABEL_17:
  v7 = (unsigned int)((v4 & 8) != 0) + 1;
LABEL_8:
  if ( *(_BYTE *)(a1 + 5) || *(_QWORD *)(a1 + 16) > v5 )
  {
    if ( (v4 & 1) != 0 )
      KeFlushCurrentTbOnly(v6, Process, v4, v7);
    else
      KeFlushTb(v6, v7);
    *(_BYTE *)(a1 + 5) = 0;
  }
  else
  {
    v8 = a1 + 24;
    if ( (v4 & 1) != 0 )
      KeFlushMultipleRangeCurrentTb(v3, v8, v6);
    else
      KeFlushMultipleRangeTb(v3, v8, v6, v7);
  }
  *(_BYTE *)(a1 + 4) &= ~8u;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
}
