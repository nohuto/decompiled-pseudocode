/*
 * XREFs of MiInsertTbFlushEntry @ 0x14027F450
 * Callers:
 *     MiInsertLargeTbFlushEntry @ 0x140211C4C (MiInsertLargeTbFlushEntry.c)
 *     MiDeleteNonPagedPoolPte @ 0x140212710 (MiDeleteNonPagedPoolPte.c)
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiCombineWithExisting @ 0x1402179D4 (MiCombineWithExisting.c)
 *     MiOutPageSingleKernelStack @ 0x14021B5A0 (MiOutPageSingleKernelStack.c)
 *     MiDeleteSystemPageTable @ 0x14021DE10 (MiDeleteSystemPageTable.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x140278960 (MiRevertValidPte.c)
 *     MiTerminateWsleCluster @ 0x140279080 (MiTerminateWsleCluster.c)
 *     MiFlushTbAsNeeded @ 0x140279E30 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x14027A4A0 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x14027C0D0 (MiAgePteWorker.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F0B0 (MmSetAddressRangeModifiedEx.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiDeletePteWsleCluster @ 0x140280590 (MiDeletePteWsleCluster.c)
 *     MiWsleFlush @ 0x140280CF0 (MiWsleFlush.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     NtUnlockVirtualMemory @ 0x140283040 (NtUnlockVirtualMemory.c)
 *     MiGetPteFromCopyList @ 0x140283F10 (MiGetPteFromCopyList.c)
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 *     MiMakePteClean @ 0x140285750 (MiMakePteClean.c)
 *     MiSetPagingOfDriver @ 0x140290C64 (MiSetPagingOfDriver.c)
 *     MiWalkVaRange @ 0x140293C34 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiReleaseSmallPteMappings @ 0x1402CBF20 (MiReleaseSmallPteMappings.c)
 *     MiTrimPteWorker @ 0x1402E38D8 (MiTrimPteWorker.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiZeroAndFlushPtes @ 0x140335CBC (MiZeroAndFlushPtes.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D1AC (MiFlushDirtyBitsToPfn.c)
 *     MiEmptyWorkingSetHelper @ 0x140348CFC (MiEmptyWorkingSetHelper.c)
 *     MiDeleteEmptyPageTable @ 0x1403576E0 (MiDeleteEmptyPageTable.c)
 *     MiRevokeExecutePte @ 0x140358590 (MiRevokeExecutePte.c)
 *     MiMakeVaRangeNoAccess @ 0x14035B5CC (MiMakeVaRangeNoAccess.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140367B48 (MiInsertRecursiveTbFlushEntries.c)
 *     MiDeletePhysmemPte @ 0x140368164 (MiDeletePhysmemPte.c)
 *     MiZeroPageWorkMapping @ 0x1403682F4 (MiZeroPageWorkMapping.c)
 *     MiClearSystemAccessBits @ 0x14038E084 (MiClearSystemAccessBits.c)
 *     MiReplacePageTablePage @ 0x1403932CC (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A6DE0 (MiMapMdlCommon.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MmSetPageProtection @ 0x1403C2610 (MmSetPageProtection.c)
 *     MiClearPteAccessedBitRange @ 0x1403C5644 (MiClearPteAccessedBitRange.c)
 *     MiUnmapMdlCommon @ 0x14061E248 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14061EE40 (MmProtectMdlSystemAddress.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062D73C (MiDeprioritizeVirtualAddresses.c)
 *     MiReadyReservedView @ 0x14062EF00 (MiReadyReservedView.c)
 *     MiMapMemoryDumpMdl @ 0x14062FDB8 (MiMapMemoryDumpMdl.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632AA8 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 *     MiDecommitLargePte @ 0x140635940 (MiDecommitLargePte.c)
 *     MiPersistMdl @ 0x14063E684 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063F8DC (MiTransferFileExtent.c)
 *     MiUnmapRetpolineStubs @ 0x140641284 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140641E5C (MiClearDriverHotPatchPtes.c)
 *     MiLargePageFault @ 0x1406464DC (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x14064806C (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x1406482B8 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x14064B414 (MiProtectAweRegion.c)
 *     MiUnmapLegacyAwePage @ 0x14064BF48 (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064C62C (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x14064E500 (MiWritePteHighLevelIsr.c)
 *     MiDeleteLargeUserPde @ 0x1406503D4 (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x14065E4AC (MiScrubLargeMappedPage.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MiEliminateZeroPages @ 0x140696B90 (MiEliminateZeroPages.c)
 *     MiProtectLargeKernelHalRange @ 0x14081F030 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x140A3C840 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A44234 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140B4944C (MiMarkBootKernelStack.c)
 *     MiTradeBootImagePage @ 0x140B4A55C (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140B4A754 (MiFreeBootDriverPages.c)
 *     MmFreeLoaderBlock @ 0x140B5E8D4 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140B5F1FC (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140B703E4 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x14033E1D8 (MiCompressTbFlushList.c)
 *     qsort @ 0x1403D9DD0 (qsort.c)
 */

unsigned __int64 __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // r8
  _BYTE *v9; // r15
  __int64 v10; // r10
  __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // r10
  char v18; // al
  unsigned __int64 v19; // rcx

  v6 = 4096LL << (9 * (unsigned __int8)a4);
  v7 = a2;
  if ( *(_DWORD *)a1 != 1 )
  {
    v18 = *(_BYTE *)(a1 + 4);
    if ( (v18 & 8) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a1 + 4) = v18 | 8;
  }
  LODWORD(v8) = *(_DWORD *)(a1 + 12);
  v9 = (_BYTE *)(a1 + 4);
  if ( !(_DWORD)v8 || (*v9 & 4) != 0 )
  {
    v11 = a4;
    v10 = (unsigned int)(v8 - 1);
    result = a1 + 4;
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
        result = *(_QWORD *)(a1 + 8 * v10 + 24);
        *(_QWORD *)(a1 + 16) += a3;
        *(_QWORD *)(a1 + 8 * v10 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
        return result;
      }
      result = a1 + 4;
    }
    else
    {
      result = a1 + 4;
    }
  }
  if ( (*(_BYTE *)result & 4) == 0 )
  {
    result = *(_QWORD *)(a1 + 8 * v10 + 24);
    v17 = a1 + 8 * v10;
    if ( ((result >> 10) & 3) == v11 && (result & 0xFFFFFFFFFFFFF000uLL) == a3 * v6 + v7 )
    {
      v19 = result & 0x3FF;
      if ( v19 + a3 > v19 && v19 + a3 <= 0x3FF )
      {
        *(_QWORD *)(a1 + 16) += a3;
        result -= a3 * v6;
        *(_QWORD *)(v17 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
        return result;
      }
    }
  }
LABEL_10:
  if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 8) )
  {
LABEL_31:
    *(_BYTE *)(a1 + 5) = 1;
    return result;
  }
  if ( a3 )
  {
    v14 = (unsigned __int64)(v11 & 3) << 10;
    while ( 1 )
    {
      v15 = 1024LL;
      if ( (unsigned __int64)(a3 - 1) <= 0x3FF )
        v15 = a3;
      a3 -= v15;
      result = v14 | v7 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v15 - 1) & 0x3FF;
      v7 += v15 * v6;
      *(_QWORD *)(a1 + 8LL * (unsigned int)v8 + 24) = result;
      v16 = *(_DWORD *)(a1 + 12);
      *(_QWORD *)(a1 + 16) += v15;
      LODWORD(v8) = v16 + 1;
      *(_DWORD *)(a1 + 12) = v8;
      if ( (_DWORD)v8 == *(_DWORD *)(a1 + 8) && (*v9 & 4) == 0 )
      {
        qsort((void *)(a1 + 24), (unsigned int)v8, 8uLL, MiTbFlushSort);
        result = MiCompressTbFlushList(a1);
        v8 = *(unsigned int *)(a1 + 12);
        if ( (_DWORD)v8 == *(_DWORD *)(a1 + 8) )
          break;
      }
      if ( !a3 )
        return result;
    }
    if ( a3 )
    {
      *(_QWORD *)(a1 + 16) = v8;
      goto LABEL_31;
    }
  }
  return result;
}
