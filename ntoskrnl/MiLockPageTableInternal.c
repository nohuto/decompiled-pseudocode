/*
 * XREFs of MiLockPageTableInternal @ 0x14026A0D0
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x140221870 (MiMakeSystemCacheRangeValid.c)
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x140223160 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x140224090 (MiGetNextPageTablePte.c)
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     MiCheckProcessShadow @ 0x14025F210 (MiCheckProcessShadow.c)
 *     MiResolvePageTablePage @ 0x1402689F0 (MiResolvePageTablePage.c)
 *     MiLockPageLeafPageTable @ 0x140269310 (MiLockPageLeafPageTable.c)
 *     MiFastLockLeafPageTable @ 0x140269C50 (MiFastLockLeafPageTable.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiInitializeWorkingSetList @ 0x1402A6260 (MiInitializeWorkingSetList.c)
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiSetPagingOfDriver @ 0x1402AFF28 (MiSetPagingOfDriver.c)
 *     MiOutPageSingleKernelStack @ 0x1402DB980 (MiOutPageSingleKernelStack.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402E1B88 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiSetVaAgeList @ 0x14031AB40 (MiSetVaAgeList.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 *     MiClearPteAccessed @ 0x140326910 (MiClearPteAccessed.c)
 *     MiWsleFlush @ 0x14032B4A0 (MiWsleFlush.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiDeleteKernelStack @ 0x14032D7F0 (MiDeleteKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x14032E170 (MiSetSystemCodeProtection.c)
 *     MiLockWorkingSetOptimal @ 0x14032F7CC (MiLockWorkingSetOptimal.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     MiEvictPageTableLock @ 0x140346460 (MiEvictPageTableLock.c)
 *     MiIsPageTableDeletable @ 0x140346AB4 (MiIsPageTableDeletable.c)
 *     MiRemoveMappedPtes @ 0x1403474D0 (MiRemoveMappedPtes.c)
 *     MiEncodeProtoFill @ 0x140369074 (MiEncodeProtoFill.c)
 *     MiRewritePteWithLockBit @ 0x140371830 (MiRewritePteWithLockBit.c)
 *     MiLockPageTable @ 0x140371890 (MiLockPageTable.c)
 *     MiMapWithLargePages @ 0x14038A6D4 (MiMapWithLargePages.c)
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiMapMdlCommon @ 0x1403A2070 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403AC164 (MiGetWsAndMakePageTablesNx.c)
 *     MiLockDriverPageRange @ 0x1406179F0 (MiLockDriverPageRange.c)
 *     MiUnmapMdlCommon @ 0x14061BD98 (MiUnmapMdlCommon.c)
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062AB70 (MiJumpStackTarget.c)
 *     MiFaultInPagedPool @ 0x14062E748 (MiFaultInPagedPool.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140630618 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiMapRetpolineStubs @ 0x14063E2EC (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14063EE24 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14063F9FC (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x140640C8C (MmMapHotPatchTablePage.c)
 *     MiDeleteKernelShadowStack @ 0x140641FD4 (MiDeleteKernelShadowStack.c)
 *     MiUnmapLegacyAwePage @ 0x14064992C (MiUnmapLegacyAwePage.c)
 *     MiUnlockPageTableRange @ 0x14064AC34 (MiUnlockPageTableRange.c)
 *     MiReleaseLargePdeMappings @ 0x14065D1F4 (MiReleaseLargePdeMappings.c)
 *     MiMarkBootKernelStack @ 0x140B3AD3C (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x140B5C404 (MmFreeLoaderBlock.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiGetPageTableLockBuffer @ 0x140290838 (MiGetPageTableLockBuffer.c)
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402DE844 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140305AB0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiLockPageTableInternal(__int64 a1, unsigned __int64 a2, char a3)
{
  char v3; // al
  unsigned int v5; // esi
  char v6; // dl
  signed __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdx
  int v11; // ebp
  unsigned __int64 v12; // rdx
  bool v13; // zf
  signed __int64 v14; // rax
  __int64 v16; // rcx
  volatile signed __int32 *PageTableLockBuffer; // rbx
  int v18; // ebp
  unsigned __int32 v19; // r8d
  char v20; // cl
  signed __int32 v21; // eax
  volatile __int64 *v22; // r8
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  signed __int64 v24; // rdx
  signed __int64 v25; // rax
  char v26; // al
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v28; // edx
  signed __int32 v29; // eax
  volatile LONG *v30; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // [rsp+78h] [rbp+10h] BYREF
  int v35; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a1 + 184);
  v5 = 0;
  v6 = v3 & 7;
  v34 = 0;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v6 )
    {
      v26 = v3 & 7;
      if ( v26 == 7 )
      {
        v22 = (volatile __int64 *)&unk_140C66E80;
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v26 == 5 )
        {
          v22 = (volatile __int64 *)&unk_140C66E78;
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        }
        else
        {
          v22 = (volatile __int64 *)&unk_140C66E90;
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
        }
      }
    }
    else
    {
      v22 = (volatile __int64 *)(a1 + 176);
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    if ( (a3 & 1) != 0 )
      return KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(v22, SelfmapLockHandle);
    SelfmapLockHandle->LockQueue.Lock = (unsigned __int64 *volatile)v22;
    SelfmapLockHandle->LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v22);
      return 1LL;
    }
    if ( _InterlockedExchange64(v22, (__int64)SelfmapLockHandle) )
    {
      KxWaitForLockOwnerShip(SelfmapLockHandle);
      return 1LL;
    }
    return 1LL;
  }
  if ( a2 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_3;
  if ( v6 )
  {
    if ( a2 > 0xFFFFF6FB7DBEDFFFuLL )
      goto LABEL_3;
    v35 = 0;
    PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v34);
    v18 = a3 & 1;
    v19 = *PageTableLockBuffer;
LABEL_18:
    while ( 1 )
    {
      v20 = v34;
      while ( ((v19 >> v20) & 1) != 0 )
      {
        if ( v18 )
          return 0LL;
        if ( ((v19 >> v20) & 2) == 0 )
        {
          v28 = v19 | (2 << v20);
          v29 = _InterlockedCompareExchange(PageTableLockBuffer, v28, v19);
          v13 = v19 == v29;
          v19 = v29;
          if ( v13 )
            v19 = v28;
          goto LABEL_18;
        }
        do
        {
          KeYieldProcessorEx(&v35);
          v19 = *PageTableLockBuffer;
          v20 = v34;
        }
        while ( (((unsigned __int32)*PageTableLockBuffer >> v34) & 1) != 0 );
      }
      v21 = _InterlockedCompareExchange(PageTableLockBuffer, ~(2 << v20) & (v19 | (1 << v20)), v19);
      v13 = v19 == v21;
      v19 = v21;
      if ( v13 )
        return 1LL;
      if ( v18 )
        return 0LL;
    }
  }
  if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v16 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624);
    if ( v16 )
    {
      v30 = (volatile LONG *)(v16 + 4 * ((a2 >> 3) & 0x1FF));
      if ( (a3 & 4) != 0 )
      {
        ExAcquireSpinLockSharedAtDpcLevel(v30);
      }
      else if ( (a3 & 1) != 0 )
      {
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v30) )
          return 0LL;
      }
      else
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v30);
      }
      return 1LL;
    }
  }
LABEL_3:
  v8 = *(_QWORD *)a2;
  v9 = 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v32 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v33 = v8 | 0x20;
      if ( (v32 & 0x20) == 0 )
        v33 = *(_QWORD *)a2;
      v8 = v33;
      if ( (v32 & 0x42) != 0 )
        v8 = v33 | 0x42;
    }
  }
  v10 = v8;
  if ( (v8 & 1) != 0 )
  {
    v11 = a3 & 1;
    do
    {
      if ( (v10 & 0x1000000000000000LL) != 0 )
      {
        if ( v11 )
          return v5;
        if ( ((v10 >> 60) & 2) != 0 )
        {
          do
          {
            if ( (++v9 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
            {
              HvlNotifyLongSpinWait(v9);
            }
            else
            {
              _mm_pause();
            }
            v8 = *(_QWORD *)a2;
          }
          while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
        }
        else
        {
          v24 = v10 | 0x2000000000000000LL;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v25 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v24, v8);
          v13 = v8 == v25;
          v8 = v25;
          if ( v13 )
            v8 = v24;
        }
      }
      else
      {
        v12 = v10 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v12, v8);
        v13 = v8 == v14;
        v8 = v14;
        if ( v13 )
          return 1;
        if ( v11 )
          return v5;
      }
      v10 = v8;
    }
    while ( (v8 & 1) != 0 );
  }
  return v5;
}
