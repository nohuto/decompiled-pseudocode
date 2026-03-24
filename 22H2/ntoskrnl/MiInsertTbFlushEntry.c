/*
 * XREFs of MiInsertTbFlushEntry @ 0x1402B6400
 * Callers:
 *     MiZeroPage @ 0x140232C80 (MiZeroPage.c)
 *     MiWalkVaRange @ 0x14023BA60 (MiWalkVaRange.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiGetPteFromCopyList @ 0x1402402F0 (MiGetPteFromCopyList.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiOutPageSingleKernelStack @ 0x1402638B0 (MiOutPageSingleKernelStack.c)
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiEmptyWorkingSetHelper @ 0x140286BB4 (MiEmptyWorkingSetHelper.c)
 *     MiTrimPte @ 0x140288F80 (MiTrimPte.c)
 *     MiMakePteClean @ 0x14028FBEC (MiMakePteClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x14028FCC0 (MmSetAddressRangeModifiedEx.c)
 *     MmMapViewInSystemCache @ 0x140291460 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x140292B80 (MiObtainSystemCacheView.c)
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MiWsleFlush @ 0x1402A7B80 (MiWsleFlush.c)
 *     NtUnlockVirtualMemory @ 0x1402AE5C0 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x1402B3300 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x1402B4990 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiFlushTbAsNeeded @ 0x1402B66A0 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x1402B8110 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x1402BA020 (MiAgePteWorker.c)
 *     MiTerminateWsleCluster @ 0x1402BB3B0 (MiTerminateWsleCluster.c)
 *     MiReplenishBitMap @ 0x1402DEAF0 (MiReplenishBitMap.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402E9620 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1402EA5F8 (MiInsertRecursiveTbFlushEntries.c)
 *     MiZeroAndFlushPtes @ 0x1402EA790 (MiZeroAndFlushPtes.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402EC974 (MiReplaceRotateWithDemandZero.c)
 *     MiZeroPageWorkMapping @ 0x1402EDC7C (MiZeroPageWorkMapping.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402EDDE0 (MiInsertLargeTbFlushEntry.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402F908C (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSystemPageTable @ 0x14030E4E0 (MiDeleteSystemPageTable.c)
 *     MiDeletePteWsleCluster @ 0x14031A2EC (MiDeletePteWsleCluster.c)
 *     MiMakeVaRangeNoAccess @ 0x140321CF4 (MiMakeVaRangeNoAccess.c)
 *     MiFlushHyperSpace @ 0x14032BF00 (MiFlushHyperSpace.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiSetPagingOfDriver @ 0x140336B2C (MiSetPagingOfDriver.c)
 *     MiSetSystemCodeProtection @ 0x140357D78 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x140362438 (MmProtectPool.c)
 *     MiReplacePageTablePage @ 0x1403634C0 (MiReplacePageTablePage.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 *     MiRevokeExecutePte @ 0x1403751D0 (MiRevokeExecutePte.c)
 *     MmSetPageProtection @ 0x1403796F0 (MmSetPageProtection.c)
 *     MiDeletePhysmemPte @ 0x14037E1AC (MiDeletePhysmemPte.c)
 *     MiMapMemoryDumpMdl @ 0x140383AF4 (MiMapMemoryDumpMdl.c)
 *     MiClearSystemAccessBits @ 0x1403B9ADC (MiClearSystemAccessBits.c)
 *     MiMapMdlCommon @ 0x1403C8614 (MiMapMdlCommon.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F3AC8 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTable @ 0x1403F4060 (MiDeleteEmptyPageTable.c)
 *     MiZeroWithSystemPtes @ 0x1403F48B8 (MiZeroWithSystemPtes.c)
 *     MiUnmapMdlCommon @ 0x140531664 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1405320F0 (MmProtectMdlSystemAddress.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14053660C (MiDeprioritizeVirtualAddresses.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 *     MiTrimPteWorker @ 0x14053C128 (MiTrimPteWorker.c)
 *     MiDecommitLargePte @ 0x14053CB20 (MiDecommitLargePte.c)
 *     MiClearDriverHotPatchPtes @ 0x14053E368 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053F0DC (MiUnmapPatchTable.c)
 *     MiUnmapRetpolineStubs @ 0x140544188 (MiUnmapRetpolineStubs.c)
 *     MiLargePageFault @ 0x1405489F4 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549968 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x14054A5DC (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x14054AA70 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x14054BE84 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054D2A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E1D8 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x14054F89C (MiDeleteLargeUserPde.c)
 *     MiFlushKernelCfgBitmap @ 0x14055392C (MiFlushKernelCfgBitmap.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 *     MiScrubLargeMappedPage @ 0x1405639C8 (MiScrubLargeMappedPage.c)
 *     MiEliminateZeroPages @ 0x1406BF340 (MiEliminateZeroPages.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A18A0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1408D19B4 (MmDeleteShadowMapping.c)
 *     MmFreeLoaderBlock @ 0x140A4C7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4DC44 (MiMarkBootKernelStack.c)
 *     MiTradeBootImagePage @ 0x140A4FE60 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140A50050 (MiFreeBootDriverPages.c)
 *     MiInitializeTbFlush @ 0x140A55380 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A73CE0 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x1402FBB30 (MiCompressTbFlushList.c)
 *     qsort @ 0x1403D23C0 (qsort.c)
 */

unsigned __int64 __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned int v8; // r8d
  int v9; // r10d
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r11
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  size_t v15; // rcx
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rax

  v6 = 4096LL << (9 * (unsigned __int8)a4);
  v7 = a2;
  if ( *(_DWORD *)a1 != 1 )
  {
    v17 = *(_BYTE *)(a1 + 4);
    if ( (v17 & 8) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a1 + 4) = v17 | 8;
  }
  v8 = *(_DWORD *)(a1 + 12);
  v9 = 1;
  if ( !v8 || (*(_BYTE *)(a1 + 4) & 4) != 0 )
  {
    result = 0LL;
  }
  else
  {
    result = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24);
    if ( ((result >> 10) & 3) != a4 )
      goto LABEL_11;
    result &= 0xFFFFFFFFFFFFF000uLL;
    v11 = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24) & 0x3FFLL;
    if ( result + v6 * (v11 + 1) != v7 )
      goto LABEL_11;
    result = v11 + a3;
    if ( v11 + a3 > 0x3FF || result <= v11 )
      goto LABEL_11;
    result = 1LL;
  }
  if ( (_DWORD)result )
  {
    v16 = a1 + 8LL * (v8 - 1);
    result = *(_QWORD *)(v16 + 24);
    *(_QWORD *)(a1 + 16) += a3;
    *(_QWORD *)(v16 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
    return result;
  }
LABEL_11:
  if ( !v8 || (*(_BYTE *)(a1 + 4) & 4) != 0 )
  {
    v9 = 0;
    v12 = v6 * a3;
  }
  else
  {
    result = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24);
    if ( ((result >> 10) & 3) != a4 )
      goto LABEL_14;
    v12 = a3 * v6;
    if ( (result & 0xFFFFFFFFFFFFF000uLL) != a3 * v6 + v7 )
      goto LABEL_14;
    result &= 0x3FFu;
    if ( result + a3 <= result || result + a3 > 0x3FF )
      goto LABEL_14;
  }
  if ( v9 )
  {
    v18 = a1 + 8LL * (v8 - 1);
    v19 = *(_QWORD *)(v18 + 24);
    *(_QWORD *)(a1 + 16) += a3;
    result = v19 - v12;
    *(_QWORD *)(v18 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
    return result;
  }
LABEL_14:
  if ( v8 >= *(_DWORD *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 5) = 1;
  }
  else if ( a3 )
  {
    v13 = (unsigned __int64)(a4 & 3) << 10;
    while ( 1 )
    {
      v14 = 1024LL;
      if ( (unsigned __int64)(a3 - 1) <= 0x3FF )
        v14 = a3;
      a3 -= v14;
      result = v13 | v7 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v14 - 1) & 0x3FF;
      v7 += v14 * v6;
      *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 12))++ + 24) = result;
      v15 = *(unsigned int *)(a1 + 12);
      *(_QWORD *)(a1 + 16) += v14;
      if ( (_DWORD)v15 == *(_DWORD *)(a1 + 8) && (*(_BYTE *)(a1 + 4) & 4) == 0 )
      {
        qsort((void *)(a1 + 24), v15, 8uLL, MiTbFlushSort);
        MiCompressTbFlushList(a1);
        result = *(unsigned int *)(a1 + 12);
        if ( (_DWORD)result == *(_DWORD *)(a1 + 8) )
          break;
      }
      if ( !a3 )
        return result;
    }
    if ( a3 )
    {
      *(_BYTE *)(a1 + 5) = 1;
      *(_QWORD *)(a1 + 16) = result;
    }
  }
  return result;
}
