/*
 * XREFs of MiInsertTbFlushEntry @ 0x1403298B0
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x14020E220 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertLargeTbFlushEntry @ 0x140210194 (MiInsertLargeTbFlushEntry.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiReleaseSmallPteMappings @ 0x14027D4D0 (MiReleaseSmallPteMappings.c)
 *     MiDeleteSystemPageTable @ 0x140299BA0 (MiDeleteSystemPageTable.c)
 *     MiZeroAndFlushPtes @ 0x14029B3BC (MiZeroAndFlushPtes.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiSetPagingOfDriver @ 0x1402AFF28 (MiSetPagingOfDriver.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     MiWalkVaRange @ 0x1402CECEC (MiWalkVaRange.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402D4830 (MiFlushDirtyBitsToPfn.c)
 *     MiOutPageSingleKernelStack @ 0x1402DB980 (MiOutPageSingleKernelStack.c)
 *     MiEmptyWorkingSetHelper @ 0x1402DE91C (MiEmptyWorkingSetHelper.c)
 *     MiDeleteEmptyPageTable @ 0x1402EBB20 (MiDeleteEmptyPageTable.c)
 *     MiRevokeExecutePte @ 0x1402EC9B0 (MiRevokeExecutePte.c)
 *     MiMakeVaRangeNoAccess @ 0x1402EF244 (MiMakeVaRangeNoAccess.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1402FCB78 (MiInsertRecursiveTbFlushEntries.c)
 *     MiDeletePhysmemPte @ 0x1402FCF34 (MiDeletePhysmemPte.c)
 *     MiZeroPageWorkMapping @ 0x1402FD0C4 (MiZeroPageWorkMapping.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x140322DC0 (MiRevertValidPte.c)
 *     MiTerminateWsleCluster @ 0x1403234E0 (MiTerminateWsleCluster.c)
 *     MiFlushTbAsNeeded @ 0x140324290 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x140326530 (MiAgePteWorker.c)
 *     MmSetAddressRangeModifiedEx @ 0x140329510 (MmSetAddressRangeModifiedEx.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiDeletePteWsleCluster @ 0x14032A9F0 (MiDeletePteWsleCluster.c)
 *     MiWsleFlush @ 0x14032B4A0 (MiWsleFlush.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiGetPteFromCopyList @ 0x14032DE90 (MiGetPteFromCopyList.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiMakePteClean @ 0x14032F6D0 (MiMakePteClean.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 *     MiTrimPteWorker @ 0x140349308 (MiTrimPteWorker.c)
 *     MiCombineWithExisting @ 0x14034A4C4 (MiCombineWithExisting.c)
 *     MiClearSystemAccessBits @ 0x14038BBC4 (MiClearSystemAccessBits.c)
 *     MiReplacePageTablePage @ 0x14039164C (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A2070 (MiMapMdlCommon.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MmSetPageProtection @ 0x1403BCCE0 (MmSetPageProtection.c)
 *     MiClearPteAccessedBitRange @ 0x1403BFD84 (MiClearPteAccessedBitRange.c)
 *     MiUnmapMdlCommon @ 0x14061BD98 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14061C990 (MmProtectMdlSystemAddress.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062B2BC (MiDeprioritizeVirtualAddresses.c)
 *     MiReadyReservedView @ 0x14062CA80 (MiReadyReservedView.c)
 *     MiMapMemoryDumpMdl @ 0x14062D938 (MiMapMemoryDumpMdl.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140630618 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiDecommitLargePte @ 0x1406334B0 (MiDecommitLargePte.c)
 *     MiPersistMdl @ 0x14063C214 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063D474 (MiTransferFileExtent.c)
 *     MiUnmapRetpolineStubs @ 0x14063EE24 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14063F9FC (MiClearDriverHotPatchPtes.c)
 *     MiLargePageFault @ 0x140643EB8 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x140645A50 (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiUnmapLegacyAwePage @ 0x14064992C (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x14064BEE0 (MiWritePteHighLevelIsr.c)
 *     MiDeleteLargeUserPde @ 0x14064DD80 (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x14065BE5C (MiScrubLargeMappedPage.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiEliminateZeroPages @ 0x1407F6B10 (MiEliminateZeroPages.c)
 *     MiProtectLargeKernelHalRange @ 0x14080A3F0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x140A39B58 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A41560 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140B3AD3C (MiMarkBootKernelStack.c)
 *     MiTradeBootImagePage @ 0x140B3BE4C (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140B3C044 (MiFreeBootDriverPages.c)
 *     MmFreeLoaderBlock @ 0x140B5C404 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140B5CD2C (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140B6C128 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x1402D6680 (MiCompressTbFlushList.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 */

void __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // r8
  _BYTE *v9; // r15
  __int64 v10; // r10
  __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  int v18; // r8d
  unsigned __int64 v19; // rax
  __int64 v20; // r10
  char v21; // al
  unsigned __int64 v22; // rcx

  v6 = 4096LL << (9 * (unsigned __int8)a4);
  v7 = a2;
  if ( *(_DWORD *)a1 != 1 )
  {
    v21 = *(_BYTE *)(a1 + 4);
    if ( (v21 & 8) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a1 + 4) = v21 | 8;
  }
  LODWORD(v8) = *(_DWORD *)(a1 + 12);
  v9 = (_BYTE *)(a1 + 4);
  if ( !(_DWORD)v8 || (*v9 & 4) != 0 )
  {
    v11 = a4;
    v10 = (unsigned int)(v8 - 1);
    v14 = (_BYTE *)(a1 + 4);
    if ( !(_DWORD)v8 )
      goto LABEL_10;
  }
  else
  {
    v10 = (unsigned int)(v8 - 1);
    v11 = a4;
    if ( ((*(_QWORD *)(a1 + 8 * v10 + 24) >> 10) & 3LL) == a4 )
    {
      v12 = *(_QWORD *)(a1 + 8 * v10 + 24) & 0x3FFLL;
      if ( (*(_QWORD *)(a1 + 8 * v10 + 24) & 0xFFFFFFFFFFFFF000uLL) + v6 * (v12 + 1) == v7
        && v12 + a3 > v12
        && v12 + a3 <= 0x3FF )
      {
        v13 = *(_QWORD *)(a1 + 8 * v10 + 24);
        *(_QWORD *)(a1 + 16) += a3;
        *(_QWORD *)(a1 + 8 * v10 + 24) = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)(v13 + a3)) & 0x3FF;
        return;
      }
      v14 = (_BYTE *)(a1 + 4);
    }
    else
    {
      v14 = (_BYTE *)(a1 + 4);
    }
  }
  if ( (*v14 & 4) == 0 )
  {
    v19 = *(_QWORD *)(a1 + 8 * v10 + 24);
    v20 = a1 + 8 * v10;
    if ( ((v19 >> 10) & 3) == v11 && (v19 & 0xFFFFFFFFFFFFF000uLL) == a3 * v6 + v7 )
    {
      v22 = v19 & 0x3FF;
      if ( v22 + a3 > v22 && v22 + a3 <= 0x3FF )
      {
        *(_QWORD *)(a1 + 16) += a3;
        *(_QWORD *)(v20 + 24) = (v19 - a3 * v6) ^ ((unsigned __int16)(v19 - a3 * v6) ^ (unsigned __int16)(v19 - a3 * v6 + a3)) & 0x3FF;
        return;
      }
    }
  }
LABEL_10:
  if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 8) )
  {
LABEL_31:
    *(_BYTE *)(a1 + 5) = 1;
    return;
  }
  if ( a3 )
  {
    v15 = (unsigned __int64)(v11 & 3) << 10;
    while ( 1 )
    {
      v16 = 1024LL;
      if ( (unsigned __int64)(a3 - 1) <= 0x3FF )
        v16 = a3;
      a3 -= v16;
      v17 = v15 | v7 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v16 - 1) & 0x3FF;
      v7 += v16 * v6;
      *(_QWORD *)(a1 + 8LL * (unsigned int)v8 + 24) = v17;
      v18 = *(_DWORD *)(a1 + 12);
      *(_QWORD *)(a1 + 16) += v16;
      LODWORD(v8) = v18 + 1;
      *(_DWORD *)(a1 + 12) = v8;
      if ( (_DWORD)v8 == *(_DWORD *)(a1 + 8) && (*v9 & 4) == 0 )
      {
        qsort((void *)(a1 + 24), (unsigned int)v8, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
        MiCompressTbFlushList(a1);
        v8 = *(unsigned int *)(a1 + 12);
        if ( (_DWORD)v8 == *(_DWORD *)(a1 + 8) )
          break;
      }
      if ( !a3 )
        return;
    }
    if ( a3 )
    {
      *(_QWORD *)(a1 + 16) = v8;
      goto LABEL_31;
    }
  }
}
