/*
 * XREFs of MiFlushTbList @ 0x140323BC0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14020AAF0 (MiSetReadOnlyOnSectionView.c)
 *     MiDecommitLargePoolVa @ 0x14020FF88 (MiDecommitLargePoolVa.c)
 *     MiGetNextPageTablePte @ 0x140224090 (MiGetNextPageTablePte.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiFlushTbListEarly @ 0x140229404 (MiFlushTbListEarly.c)
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiReleaseSmallPteMappings @ 0x14027D4D0 (MiReleaseSmallPteMappings.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x14029B3BC (MiZeroAndFlushPtes.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MmOutPageKernelStack @ 0x1402A7980 (MmOutPageKernelStack.c)
 *     MiSetPagingOfDriver @ 0x1402AFF28 (MiSetPagingOfDriver.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402CA150 (NtGetWriteWatch.c)
 *     MiWalkVaRange @ 0x1402CECEC (MiWalkVaRange.c)
 *     MiDeleteEmptyPageTableTail @ 0x1402D3FC0 (MiDeleteEmptyPageTableTail.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402D4830 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSystemPageTableTail @ 0x1402D8B30 (MiDeleteSystemPageTableTail.c)
 *     MiResetAccessBitsTail @ 0x1402DDE40 (MiResetAccessBitsTail.c)
 *     MiDeleteNonPagedPoolTail @ 0x1402EAD40 (MiDeleteNonPagedPoolTail.c)
 *     MiCreateSystemPageTableTail @ 0x1402EB3A0 (MiCreateSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x1402EC2D0 (MiGetNextPageTableTail.c)
 *     MiZeroPageWorkMapping @ 0x1402FD0C4 (MiZeroPageWorkMapping.c)
 *     MmRemoveExecuteGrants @ 0x14030213C (MmRemoveExecuteGrants.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiDeleteVaTail @ 0x140323460 (MiDeleteVaTail.c)
 *     MiTerminateWsleCluster @ 0x1403234E0 (MiTerminateWsleCluster.c)
 *     MiFlushTbAsNeeded @ 0x140324290 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiResetAccessBitPte @ 0x140325D60 (MiResetAccessBitPte.c)
 *     MiAgePteWorker @ 0x140326530 (MiAgePteWorker.c)
 *     MmSetAddressRangeModifiedEx @ 0x140329510 (MmSetAddressRangeModifiedEx.c)
 *     MiFreeWsleList @ 0x14032B2B0 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x14032B4A0 (MiWsleFlush.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiGetPteFromCopyList @ 0x14032DE90 (MiGetPteFromCopyList.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiMoveDirtyBitsToPfns @ 0x14032F870 (MiMoveDirtyBitsToPfns.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     MiCreateSystemPageTable @ 0x140348960 (MiCreateSystemPageTable.c)
 *     MiFlushValidPteFromTb @ 0x140387768 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x14038B4B8 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038B664 (MiDemoteValidLargePageOneLevel.c)
 *     MiClearSystemAccessBits @ 0x14038BBC4 (MiClearSystemAccessBits.c)
 *     MiReplacePageTablePage @ 0x14039164C (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A2070 (MiMapMdlCommon.c)
 *     MmSetPageProtection @ 0x1403BCCE0 (MmSetPageProtection.c)
 *     MiClearPteAccessedBitRange @ 0x1403BFD84 (MiClearPteAccessedBitRange.c)
 *     MiSimpleAgeWorkingSetTail @ 0x140463CB0 (MiSimpleAgeWorkingSetTail.c)
 *     MiUnmapMdlCommon @ 0x14061BD98 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14061C990 (MmProtectMdlSystemAddress.c)
 *     MiReadyReservedView @ 0x14062CA80 (MiReadyReservedView.c)
 *     MiMapMemoryDumpMdl @ 0x14062D938 (MiMapMemoryDumpMdl.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140630618 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiPersistMdl @ 0x14063C214 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063D474 (MiTransferFileExtent.c)
 *     MiUnmapRetpolineStubs @ 0x14063EE24 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14063F9FC (MiClearDriverHotPatchPtes.c)
 *     MiLargePageFault @ 0x140643EB8 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x140645A50 (MiFlushEnclaveTb.c)
 *     MiFreePhysicalPages @ 0x140647F94 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x14064BEE0 (MiWritePteHighLevelIsr.c)
 *     MiScrubLargeMappedPage @ 0x14065BE5C (MiScrubLargeMappedPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065D1F4 (MiReleaseLargePdeMappings.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 *     MiProtectLargeKernelHalRange @ 0x14080A3F0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x140A39B58 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A41560 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140B3AD3C (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x140B3B9BC (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x140B3BE4C (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140B3C044 (MiFreeBootDriverPages.c)
 *     MmFreeLoaderBlock @ 0x140B5C404 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140B5CD2C (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140B6C128 (MiProtectSharedUserPage.c)
 * Callees:
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140387610 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403876F4 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeTb @ 0x14038C374 (KeFlushMultipleRangeTb.c)
 */

void __fastcall MiFlushTbList(int *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  _KPROCESS *Process; // rdx
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 *v8; // rdi

  v2 = (unsigned int)a1[3];
  if ( !(_DWORD)v2 )
    return;
  v3 = *((unsigned __int8 *)a1 + 4);
  v4 = qword_140C65810;
  if ( (v3 & 2) != 0 || *a1 != 1 )
  {
    v6 = *a1;
    if ( *a1 != 1 )
    {
      if ( (v3 & 8) != 0 )
        v7 = 2LL;
      else
        v7 = 1LL;
      goto LABEL_8;
    }
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].Affinity.StaticBitmap[5] || Process->SecureState.SecureHandle )
    {
      v6 = *a1;
      v4 = -1LL;
    }
    else
    {
      v6 = *a1;
    }
  }
  v7 = 0LL;
LABEL_8:
  v8 = (unsigned __int64 *)(a1 + 4);
  if ( *((_BYTE *)a1 + 5) || *v8 > v4 )
  {
    if ( (v3 & 1) != 0 )
      KeFlushCurrentTbOnly(v6, v7, v3, v4);
    else
      KeFlushTb(v6, v7);
    *((_BYTE *)a1 + 5) = 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    KeFlushMultipleRangeCurrentTb(v2, a1 + 6, v6);
  }
  else
  {
    KeFlushMultipleRangeTb(v2, a1 + 6, v6, (unsigned int)v7);
  }
  *((_BYTE *)a1 + 4) &= ~8u;
  *v8 = 0LL;
  a1[3] = 0;
}
