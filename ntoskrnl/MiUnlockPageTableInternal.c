/*
 * XREFs of MiUnlockPageTableInternal @ 0x140290620
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14020AAF0 (MiSetReadOnlyOnSectionView.c)
 *     MiClearNonPagedPtes @ 0x14020DF88 (MiClearNonPagedPtes.c)
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140211730 (MiCopyToUserVa.c)
 *     MiMakeSystemCacheRangeValid @ 0x140221870 (MiMakeSystemCacheRangeValid.c)
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x140223160 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x140224090 (MiGetNextPageTablePte.c)
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     MiRelockFaultState @ 0x14022853C (MiRelockFaultState.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiCheckProcessShadow @ 0x14025F210 (MiCheckProcessShadow.c)
 *     MiProbeAndLockComplete @ 0x140267C70 (MiProbeAndLockComplete.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 *     MiResolvePageTablePage @ 0x1402689F0 (MiResolvePageTablePage.c)
 *     MiLockPageLeafPageTable @ 0x140269310 (MiLockPageLeafPageTable.c)
 *     MiFastLockLeafPageTable @ 0x140269C50 (MiFastLockLeafPageTable.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14029F4D8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiLockPagedAddress @ 0x1402A1684 (MiLockPagedAddress.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiInitializeWorkingSetList @ 0x1402A6260 (MiInitializeWorkingSetList.c)
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x1402AFF28 (MiSetPagingOfDriver.c)
 *     MiDeleteSystemPagableVm @ 0x1402B04B0 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402CA150 (NtGetWriteWatch.c)
 *     MiWalkVaRange @ 0x1402CECEC (MiWalkVaRange.c)
 *     MiReleaseWalkLocks @ 0x1402D45CC (MiReleaseWalkLocks.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402D4830 (MiFlushDirtyBitsToPfn.c)
 *     MiMakeSystemCachePteValid @ 0x1402DA87C (MiMakeSystemCachePteValid.c)
 *     MiOutPageSingleKernelStack @ 0x1402DB980 (MiOutPageSingleKernelStack.c)
 *     MiFillHyperPtes @ 0x1402DEAE0 (MiFillHyperPtes.c)
 *     MiMarkPteDirty @ 0x1402DFE5C (MiMarkPteDirty.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402E038C (MiUnlockProbePacketWorkingSet.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402E1B88 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDirtySystemCachePte @ 0x1402E46F8 (MiDirtySystemCachePte.c)
 *     MiMakeProtoLeafValid @ 0x1402F70B0 (MiMakeProtoLeafValid.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiSetVaAgeList @ 0x14031AB40 (MiSetVaAgeList.c)
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MiCountSharedPages @ 0x14031DE80 (MiCountSharedPages.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiMakeHyperRangeAccessible @ 0x1403219F0 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 *     MiClearPteAccessed @ 0x140326910 (MiClearPteAccessed.c)
 *     MmSetAddressRangeModifiedEx @ 0x140329510 (MmSetAddressRangeModifiedEx.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiWsleFlush @ 0x14032B4A0 (MiWsleFlush.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiDeleteKernelStack @ 0x14032D7F0 (MiDeleteKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiFillPoolCommitPageTable @ 0x14032F1F0 (MiFillPoolCommitPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x14032F870 (MiMoveDirtyBitsToPfns.c)
 *     MiCommitPoolMemory @ 0x14032FC90 (MiCommitPoolMemory.c)
 *     MiLockPoolCommitPageTable @ 0x14032FF9C (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x1403303A0 (MiUnlockPoolCommitWs.c)
 *     MiCaptureDeleteHierarchy @ 0x140333890 (MiCaptureDeleteHierarchy.c)
 *     MiUnlockFaultPageTable @ 0x140343598 (MiUnlockFaultPageTable.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     MiComputePageCommitment @ 0x140345CE0 (MiComputePageCommitment.c)
 *     MiEvictPageTableLock @ 0x140346460 (MiEvictPageTableLock.c)
 *     MiIsCfgBitMapPageShared @ 0x140346620 (MiIsCfgBitMapPageShared.c)
 *     MiIsPageTableDeletable @ 0x140346AB4 (MiIsPageTableDeletable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140346D60 (MiUnlockNestedPageTableWritePte.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 *     MiSoftFaultMappedView @ 0x14034A9A0 (MiSoftFaultMappedView.c)
 *     MiEncodeProtoFill @ 0x140369074 (MiEncodeProtoFill.c)
 *     MiConvertAndFlushWsleVas @ 0x14036C29C (MiConvertAndFlushWsleVas.c)
 *     MiUnlockPageTable @ 0x140371878 (MiUnlockPageTable.c)
 *     MiMapWithLargePages @ 0x14038A6D4 (MiMapWithLargePages.c)
 *     MiGetNextNonGapPfnPage @ 0x14038AF50 (MiGetNextNonGapPfnPage.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiMapMdlCommon @ 0x1403A2070 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403AC164 (MiGetWsAndMakePageTablesNx.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403CE458 (MiReturnSystemCacheRegionsToKva.c)
 *     MiReacquireWalkLocks @ 0x140463468 (MiReacquireWalkLocks.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406157F0 (MiCheckCommitReleaseFromVad.c)
 *     MiLockDriverPageRange @ 0x1406179F0 (MiLockDriverPageRange.c)
 *     MiUnmapMdlCommon @ 0x14061BD98 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x1406240B0 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062AB70 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062B2BC (MiDeprioritizeVirtualAddresses.c)
 *     MiFaultInPagedPool @ 0x14062E748 (MiFaultInPagedPool.c)
 *     MiInsertViewOfPhysicalSection @ 0x14062E820 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14062EF5C (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x14062F2D4 (MiVadRangeIsIoSpace.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140630618 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
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
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1406465DC (MiWriteEnclavePte.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406469A0 (MiQueryVaPhysicalContiguity.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140646D84 (MiWorkingSetInfoCheckPageTable.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiUnmapLegacyAwePage @ 0x14064992C (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiLockPageTableRange @ 0x14064AAA8 (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x14064AC34 (MiUnlockPageTableRange.c)
 *     MiMakeProtoPrivate @ 0x14064AD28 (MiMakeProtoPrivate.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065B0E0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065BE5C (MiScrubLargeMappedPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065D1F4 (MiReleaseLargePdeMappings.c)
 *     MiComputeIdealLargePage @ 0x140665140 (MiComputeIdealLargePage.c)
 *     MiMapUserLargePages @ 0x1406667E0 (MiMapUserLargePages.c)
 *     MiMarkBootKernelStack @ 0x140B3AD3C (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x140B5C404 (MmFreeLoaderBlock.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetPageTableLockBuffer @ 0x140290838 (MiGetPageTableLockBuffer.c)
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 */

void __fastcall MiUnlockPageTableInternal(__int64 a1, unsigned __int64 a2)
{
  char v2; // al
  char v4; // dl
  signed __int64 v5; // rdx
  bool v6; // zf
  signed __int64 v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *PageTableLockBuffer; // r8
  signed __int32 v10; // eax
  int v11; // edx
  signed __int32 v12; // ett
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rdi
  __int64 Next; // rax
  __int64 Lock; // rcx
  char v16; // al
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v18; // r9
  int v19; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  signed __int32 v23[8]; // [rsp+0h] [rbp-38h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v25; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v4 = v2 & 7;
  v25 = 0;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v4 )
    {
      v16 = v2 & 7;
      if ( v16 == 7 )
      {
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v16 == 5 )
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        else
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
      }
    }
    else
    {
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(SelfmapLockHandle, retaddr);
      return;
    }
    _m_prefetchw(SelfmapLockHandle);
    Next = (__int64)SelfmapLockHandle->LockQueue.Next;
    if ( !SelfmapLockHandle->LockQueue.Next )
    {
      if ( SelfmapLockHandle == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                         (volatile signed __int64 *)SelfmapLockHandle->LockQueue.Lock,
                                                         0LL,
                                                         (signed __int64)SelfmapLockHandle) )
        return;
      Next = KxWaitForLockChainValid(SelfmapLockHandle);
    }
    SelfmapLockHandle->LockQueue.Next = 0LL;
    Lock = (__int64)SelfmapLockHandle->LockQueue.Lock;
    if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(Next + 8), Lock)) & 4) != 0 )
    {
      _InterlockedOr(v23, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(Next + 8) >> 5) & 0x7F], 0LL));
    }
  }
  else
  {
    if ( a2 < 0xFFFFF6FB7DBED000uLL )
      goto LABEL_3;
    if ( v4 )
    {
      if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v25);
        v10 = *PageTableLockBuffer;
        v11 = ~(3 << v25);
        do
        {
          v12 = v10;
          v10 = _InterlockedCompareExchange(PageTableLockBuffer, v10 & v11, v10);
        }
        while ( v12 != v10 );
        return;
      }
      goto LABEL_3;
    }
    if ( a2 > 0xFFFFF6FB7DBEDFFFuLL
      || (v8 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624)) == 0 )
    {
LABEL_3:
      v5 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v5 & 1) != 0
        && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v21 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
          v22 = v5 | 0x20;
          if ( (v21 & 0x20) == 0 )
            v22 = *(_QWORD *)a2;
          v5 = v22;
          if ( (v21 & 0x42) != 0 )
            v5 = v22 | 0x42;
        }
      }
      do
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v5 & 0xCFFFFFFFFFFFFFFFuLL, v5);
        v6 = v5 == v7;
        v5 = v7;
      }
      while ( !v6 );
      return;
    }
    v18 = (a2 >> 3) & 0x1FF;
    v19 = *(_DWORD *)(v8 + 4 * v18);
    if ( (v19 & 0x3FFFFFFF) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 4 * v18));
    }
    else
    {
      if ( v19 >= 0 )
        KeBugCheckEx(0x10u, v8 + 4 * v18, 0x100uLL, 0LL, 0LL);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 4 * v18));
    }
  }
}
