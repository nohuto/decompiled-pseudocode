/*
 * XREFs of MiSwapStackPage @ 0x14039604C
 * Callers:
 *     MiTradePage @ 0x1403B5640 (MiTradePage.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiSetPfnTbFlushStamp @ 0x14028A3A0 (MiSetPfnTbFlushStamp.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140315620 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiGetPfnChannel @ 0x140334470 (MiGetPfnChannel.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiGetLeafPfnBuddy @ 0x140386E8C (MiGetLeafPfnBuddy.c)
 *     MiCanStealKernelStack @ 0x14039634C (MiCanStealKernelStack.c)
 *     MiSwapStackPageNoDpc @ 0x1403963DC (MiSwapStackPageNoDpc.c)
 *     KeGenericCallDpcEx @ 0x1403C07D0 (KeGenericCallDpcEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeTryToFreezeThreadStack @ 0x14056CB08 (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x14062A6D0 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x14062B268 (MiSwitchKstackPages.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5, _DWORD *a6)
{
  unsigned __int64 *Pool; // rax
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  int SystemRegionType; // eax
  int v14; // ecx
  char *AnyMultiplexedVm; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // r13
  int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // r8d
  __int64 Page; // rax
  __int64 v22; // rbx
  __int64 v23; // r12
  unsigned __int8 v24; // r15
  int v25; // eax
  char v26; // dl
  unsigned __int64 v27; // rbp
  __int64 v28; // r14
  unsigned __int64 LeafPfnBuddy; // rax
  struct _KTHREAD *v31; // r15
  unsigned __int64 v32; // rbx
  char v33; // al
  int v34; // eax
  __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  int v40; // eax
  bool v41; // zf
  unsigned __int64 v42; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v46; // eax
  unsigned __int8 v47; // dl
  unsigned __int8 v48; // [rsp+30h] [rbp-68h]
  int v49; // [rsp+34h] [rbp-64h] BYREF
  int v50; // [rsp+38h] [rbp-60h]
  __int64 v51; // [rsp+40h] [rbp-58h]
  __int64 v52; // [rsp+48h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  __int64 v54[8]; // [rsp+58h] [rbp-40h] BYREF

  v52 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Pool = (unsigned __int64 *)MiAllocatePool(64, 0x48uLL, 0x734B694Du);
  v10 = Pool;
  if ( !Pool )
    return 0LL;
  Pool[3] = a1;
  v11 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v12 = (__int64)(v11 << 25) >> 16;
  Pool[5] = v12;
  SystemRegionType = MiGetSystemRegionType(v12);
  v50 = SystemRegionType;
  if ( SystemRegionType == 14 )
  {
    v14 = 4;
  }
  else
  {
    if ( SystemRegionType != 12 )
    {
LABEL_22:
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    v14 = 1;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v14);
  v10[7] = (unsigned __int64)AnyMultiplexedVm;
  v16 = (__int64)AnyMultiplexedVm;
  if ( !byte_140C69564 )
    goto LABEL_22;
  v17 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  if ( a3 == -1 )
  {
    v18 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) + 2);
    v19 = ((unsigned int)MiGetPfnChannel(a2) << byte_140C6570E) | dword_140C65778 & v17 | (v18 << byte_140C6570D);
    v20 = (a4 & 0x1000000 | 0x20000u) >> 8;
    if ( (a4 & 0x2000000) != 0 )
      v20 |= 0x20000u;
  }
  else
  {
    v20 = 560;
    v19 = dword_140C65778 & v17 | a3 & ~dword_140C65778;
  }
  Page = MiGetPage(a1, v19, v20);
  v51 = Page;
  v22 = Page;
  if ( Page == -1 )
    goto LABEL_22;
  v23 = 48 * Page - 0x220000000000LL;
  MiSetPfnTbFlushStamp(v23, 0, 0);
  v10[6] = 0LL;
  v49 = 0;
  v24 = MiLockWorkingSetShared(v16);
  v48 = v24;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v49);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  if ( *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL)) != a1
    || v11 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || (v25 = MiGetSystemRegionType(v10[5]), v50 != v25)
    || !(unsigned int)MiCanStealKernelStack(a2, 1LL)
    || (v27 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, !(unsigned int)MiLockPageTableInternal(v16, v27, v26)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v47 = v24;
LABEL_64:
    MiUnlockWorkingSetShared(v16, v47);
    MiReleaseFreshPage(v23);
    goto LABEL_22;
  }
  if ( (byte_140C6570F & 1) == 0 || !(unsigned int)MiSwapStackPageNoDpc(a2, v23) )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy((_QWORD *)a2);
    v31 = (struct _KTHREAD *)LeafPfnBuddy;
    if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      if ( LeafPfnBuddy != -16LL && (struct _KTHREAD *)LeafPfnBuddy != CurrentThread )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(LeafPfnBuddy, &v52) )
        {
          v32 = MiMapPageInHyperSpaceWorker(v22, 0LL, 0x80000000);
          MiCopyKstack(v23, a2, ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          MiUnmapPageInHyperSpaceWorker(v32, 0x11u);
          MiLockNestedPageAtDpcInline(v23);
          MiSwitchKstackPages(v23, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v33 = *(_BYTE *)(a2 + 34);
          *(_QWORD *)(a2 + 40) &= ~0x8000000000000000uLL;
          *(_BYTE *)(a2 + 34) = v33 & 0xC7;
          *(_BYTE *)(a2 + 35) &= ~0x20u;
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(v10[5], 0, 2u);
          v54[0] = v52;
          if ( v52 && (v52 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            KiReleasePrcbLocksForIsolationUnit(v54);
          v31->ThreadLock = 0LL;
          MiUnlockPageTableInternal(v16, v27);
          MiUnlockWorkingSetShared(v16, v48);
          v28 = v51;
          *a6 = 1;
          goto LABEL_19;
        }
        goto LABEL_39;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a2, 0) )
      {
        v10[6] = a2;
LABEL_39:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v16, v27);
        MiUnlockWorkingSetShared(v16, v48);
        v28 = v51;
        *v10 = v17;
        v10[1] = v28;
        v10[2] = 0LL;
        *((_DWORD *)v10 + 8) = 0;
        if ( v31 == (struct _KTHREAD *)-16LL || v31 == CurrentThread )
        {
          v34 = KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(ULONG_PTR))MiJumpStack,
                  (ULONG_PTR)v10,
                  24576,
                  1,
                  0LL);
          if ( v34 < 0 )
            *((_DWORD *)v10 + 8) = v34;
        }
        else
        {
          KeGenericCallDpcEx(MiDoStackCopy, v10);
        }
        if ( *((int *)v10 + 8) >= 0 )
        {
          *a6 = 0;
          v42 = (unsigned __int8)MiLockPageInline(a2);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v42 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v42 + 1));
              v41 = (v46 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v46;
              if ( v41 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(v42);
          goto LABEL_19;
        }
        MiReleaseFreshPage(v23);
        v35 = v10[6];
        if ( v35 )
        {
          v36 = (unsigned __int8)MiLockPageInline(v35);
          MiRemoveLockedPageChargeAndDecRef(v10[6]);
          _InterlockedAnd64((volatile signed __int64 *)(v10[6] + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            v37 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v37 >= 2u )
            {
              v38 = KeGetCurrentPrcb();
              v39 = v38->SchedulerAssist;
              v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
              v41 = (v40 & v39[5]) == 0;
              v39[5] &= v40;
              if ( v41 )
                KiRemoveSystemWorkPriorityKick(v38);
            }
          }
          __writecr8(v36);
        }
        goto LABEL_22;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal(v16, v27);
    v47 = v48;
    goto LABEL_64;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal(v16, v27);
  MiUnlockWorkingSetShared(v16, v24);
  v28 = v51;
  *a6 = 1;
LABEL_19:
  *(_WORD *)(a2 + 32) = 0;
  if ( a5 )
    *a5 = v28;
  ExFreePoolWithTag(v10, 0);
  return 1LL;
}
