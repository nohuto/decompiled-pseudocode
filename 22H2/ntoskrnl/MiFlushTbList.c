/*
 * XREFs of MiFlushTbList @ 0x140279760
 * Callers:
 *     MiDeleteNonPagedPoolTail @ 0x140210A00 (MiDeleteNonPagedPoolTail.c)
 *     MiDecommitLargePoolVa @ 0x140211A40 (MiDecommitLargePoolVa.c)
 *     MiSetReadOnlyOnSectionView @ 0x140215318 (MiSetReadOnlyOnSectionView.c)
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiFlushTbListEarly @ 0x140216C44 (MiFlushTbListEarly.c)
 *     MmOutPageKernelStack @ 0x140222E70 (MmOutPageKernelStack.c)
 *     MiGetNextPageTablePte @ 0x14025CF80 (MiGetNextPageTablePte.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiMakeSystemAddressValid @ 0x140277310 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiDeleteVaTail @ 0x140279000 (MiDeleteVaTail.c)
 *     MiTerminateWsleCluster @ 0x140279080 (MiTerminateWsleCluster.c)
 *     MiFlushTbAsNeeded @ 0x140279E30 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x14027A4A0 (MiDeleteVa.c)
 *     MiResetAccessBitPte @ 0x14027B900 (MiResetAccessBitPte.c)
 *     MiAgePteWorker @ 0x14027C0D0 (MiAgePteWorker.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F0B0 (MmSetAddressRangeModifiedEx.c)
 *     MiFreeWsleList @ 0x140280B00 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x140280CF0 (MiWsleFlush.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     MiGetPteFromCopyList @ 0x140283F10 (MiGetPteFromCopyList.c)
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402858F0 (MiMoveDirtyBitsToPfns.c)
 *     MiSetPagingOfDriver @ 0x140290C64 (MiSetPagingOfDriver.c)
 *     MiWalkVaRange @ 0x140293C34 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MiProtectPrivateMemory @ 0x1402A2760 (MiProtectPrivateMemory.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiReleaseSmallPteMappings @ 0x1402CBF20 (MiReleaseSmallPteMappings.c)
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiCreateSystemPageTable @ 0x1402E4410 (MiCreateSystemPageTable.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MmUnmapIoSpace @ 0x140335B30 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x140335CBC (MiZeroAndFlushPtes.c)
 *     MiDeleteEmptyPageTableTail @ 0x14033CA90 (MiDeleteEmptyPageTableTail.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D1AC (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSystemPageTableTail @ 0x1403403B0 (MiDeleteSystemPageTableTail.c)
 *     MiResetAccessBitsTail @ 0x140348160 (MiResetAccessBitsTail.c)
 *     MiCreateSystemPageTableTail @ 0x140356E60 (MiCreateSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x140357EB0 (MiGetNextPageTableTail.c)
 *     MiZeroPageWorkMapping @ 0x1403682F4 (MiZeroPageWorkMapping.c)
 *     MmRemoveExecuteGrants @ 0x14036DA1C (MmRemoveExecuteGrants.c)
 *     MiFlushValidPteFromTb @ 0x14038A3A4 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x14038D978 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038DB24 (MiDemoteValidLargePageOneLevel.c)
 *     MiClearSystemAccessBits @ 0x14038E084 (MiClearSystemAccessBits.c)
 *     MiReplacePageTablePage @ 0x1403932CC (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A6DE0 (MiMapMdlCommon.c)
 *     MmSetPageProtection @ 0x1403C2610 (MmSetPageProtection.c)
 *     MiClearPteAccessedBitRange @ 0x1403C5644 (MiClearPteAccessedBitRange.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14046BBB0 (MiSimpleAgeWorkingSetTail.c)
 *     MiUnmapMdlCommon @ 0x14061E248 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14061EE40 (MmProtectMdlSystemAddress.c)
 *     MiReadyReservedView @ 0x14062EF00 (MiReadyReservedView.c)
 *     MiMapMemoryDumpMdl @ 0x14062FDB8 (MiMapMemoryDumpMdl.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632AA8 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 *     MiPersistMdl @ 0x14063E684 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063F8DC (MiTransferFileExtent.c)
 *     MiUnmapRetpolineStubs @ 0x140641284 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140641E5C (MiClearDriverHotPatchPtes.c)
 *     MiLargePageFault @ 0x1406464DC (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x14064806C (MiFlushEnclaveTb.c)
 *     MiFreePhysicalPages @ 0x14064A5B0 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14064B414 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064C62C (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x14064E500 (MiWritePteHighLevelIsr.c)
 *     MiScrubLargeMappedPage @ 0x14065E4AC (MiScrubLargeMappedPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065F844 (MiReleaseLargePdeMappings.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x1406649B8 (MiHandleForkTransitionPte.c)
 *     MiProtectLargeKernelHalRange @ 0x14081F030 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x140A3C840 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A44234 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140B4944C (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x140B4A0CC (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x140B4A55C (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140B4A754 (MiFreeBootDriverPages.c)
 *     MmFreeLoaderBlock @ 0x140B5E8D4 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140B5F1FC (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140B703E4 (MiProtectSharedUserPage.c)
 * Callees:
 *     KeFlushTb @ 0x140279850 (KeFlushTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14038A24C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x14038A330 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeTb @ 0x14038E834 (KeFlushMultipleRangeTb.c)
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
  v4 = qword_140C65C90;
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
      KeFlushTb(v6, v7, v3, v4);
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
