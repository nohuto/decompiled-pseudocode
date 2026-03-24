/*
 * XREFs of MiSwapStackPage @ 0x14031F4BC
 * Callers:
 *     MiTradePage @ 0x140281260 (MiTradePage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiSetPfnTbFlushStamp @ 0x14023FAD0 (MiSetPfnTbFlushStamp.c)
 *     MiGetPteFromCopyList @ 0x1402402F0 (MiGetPteFromCopyList.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x140284844 (MiGetPfnChannel.c)
 *     MiAddLockedPageCharge @ 0x14029AA98 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AA680 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiSwapStackPageNoDpc @ 0x14031FC90 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x14031FE44 (MiCanStealKernelStack.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     KiReleaseThreadStateLock @ 0x14035B9E0 (KiReleaseThreadStateLock.c)
 *     KeGenericCallDpc @ 0x14035E460 (KeGenericCallDpc.c)
 *     MiGetLeafPfnBuddy @ 0x1403801FC (MiGetLeafPfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeTryToFreezeThreadStack @ 0x1405132C8 (KeTryToFreezeThreadStack.c)
 *     MiCopyKstack @ 0x140535B90 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x1405365AC (MiSwitchKstackPages.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSwapStackPage(__int64 a1, __int64 a2, unsigned int *a3, int a4, int a5, __int64 *a6, _DWORD *a7)
{
  __int64 *Pool; // rax
  __int64 *v11; // rsi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rcx
  int SystemRegionType; // eax
  int v15; // ecx
  char *AnyMultiplexedVm; // rax
  __int64 v17; // r14
  unsigned int v18; // r12d
  __int64 v19; // rbp
  unsigned int v20; // ebx
  int v21; // ebx
  __int64 Page; // rax
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int8 v30; // r12
  int v31; // eax
  unsigned __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r15
  __int64 LeafPfnBuddy; // rbp
  __int64 *PteFromCopyList; // r12
  char v38; // al
  __int64 v39; // rcx
  unsigned __int64 v40; // rbx
  int v41; // ebp
  __int64 v42; // r8
  bool v43; // zf
  unsigned __int64 v44; // rbx
  int v45; // edi
  __int64 v46; // r8
  bool v47; // zf
  struct _KTHREAD *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  _DWORD *v52; // r9
  int v53; // eax
  unsigned __int64 v54; // rbx
  int v55; // edi
  __int64 v56; // r8
  bool v57; // zf
  __int64 v58; // rdx
  __int64 v59; // r8
  _DWORD *v60; // r9
  __int64 v61; // rcx
  unsigned __int64 v62; // rbx
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r9
  _DWORD *v65; // r8
  int v66; // eax
  unsigned __int64 v67; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v70; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v73; // [rsp+30h] [rbp-68h]
  int v74; // [rsp+34h] [rbp-64h] BYREF
  __int64 v75; // [rsp+38h] [rbp-60h]
  __int64 v76; // [rsp+40h] [rbp-58h]
  __int64 v77; // [rsp+48h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  __int64 v79; // [rsp+58h] [rbp-40h]

  v77 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Pool = (__int64 *)MiAllocatePool(64, 0x50uLL, 0x734B694Du);
  v11 = Pool;
  if ( !Pool )
    return 0LL;
  Pool[4] = a1;
  v12 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v13 = (__int64)(v12 << 25) >> 16;
  Pool[6] = v13;
  SystemRegionType = MiGetSystemRegionType(v13);
  LODWORD(v75) = SystemRegionType;
  if ( SystemRegionType == 14 )
  {
    v15 = 4;
  }
  else
  {
    if ( SystemRegionType != 12 )
    {
LABEL_90:
      ExFreePoolWithTag(v11, 0);
      return 0LL;
    }
    v15 = 1;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v15);
  v11[8] = (__int64)AnyMultiplexedVm;
  v17 = (__int64)AnyMultiplexedVm;
  if ( !byte_140C4EEDC )
    goto LABEL_90;
  v18 = 512;
  v19 = (a2 + 0x58000000000LL) / 48;
  v79 = v19;
  if ( a4 == -1 )
  {
    v21 = *((_DWORD *)MiSearchNumaNodeTable((a2 + 0x58000000000LL) / 48) + 2);
    v20 = ((unsigned int)MiGetPfnChannel(a2) << byte_140C4DE8D) | dword_140C4DEF8 & v19 | (v21 << byte_140C4DE8C);
    if ( (a5 & 0x3000000) != 0 )
      v18 = 66048;
  }
  else
  {
    v18 = 560;
    v20 = dword_140C4DEF8 & v19 | a4 & ~dword_140C4DEF8;
  }
  Page = MiGetPage(a1, v20, v18);
  v76 = Page;
  if ( Page == -1 )
    goto LABEL_90;
  v23 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v23, 0, 0);
  v11[7] = 0LL;
  v74 = 0;
  v30 = MiLockWorkingSetShared(v17, v24, v25, v26);
  v73 = v30;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v74, v27, v28, v29);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  if ( *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL)) != a1
    || v12 != (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL)
    || (v31 = MiGetSystemRegionType(v11[6]), (_DWORD)v75 != v31)
    || !(unsigned int)MiCanStealKernelStack(a2, 1LL)
    || (v32 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, !(unsigned int)MiLockPageTableInternal(v17, v32, 1LL)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_88;
  }
  if ( (MiFlags & 0x800) != 0 || (unsigned int)MiSwapStackPageNoDpc(a3, a2, v23) != 1 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(a2, v33, v34);
    v75 = LeafPfnBuddy;
    if ( ((LeafPfnBuddy + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
    {
      PteFromCopyList = MiGetPteFromCopyList(a3, v76, -1LL);
      if ( LeafPfnBuddy != -16 && (struct _KTHREAD *)LeafPfnBuddy != CurrentThread )
      {
        if ( (unsigned __int8)KeTryToFreezeThreadStack(LeafPfnBuddy, &v77) == 1 )
        {
          MiCopyKstack(v23, a2, PteFromCopyList);
          MiLockNestedPageAtDpcInline(v23);
          MiSwitchKstackPages(v23, a2);
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v38 = *(_BYTE *)(a2 + 34);
          *(_QWORD *)(a2 + 40) &= ~0x8000000000000000uLL;
          *(_BYTE *)(a2 + 34) = v38 & 0xC7;
          *(_BYTE *)(a2 + 35) &= ~0x20u;
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          KeFlushSingleTb(v11[6], 0LL);
          KiReleaseThreadStateLock(v39, v77, 0LL);
          KiReleaseThreadLockSafe(v75);
          v40 = ZeroPte;
          v41 = 0;
          if ( MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v41 = 1;
              if ( !HIBYTE(word_140C4E008) )
              {
                v43 = (ZeroPte & 1) == 0;
                goto LABEL_33;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v43 = (ZeroPte & 1) == 0;
LABEL_33:
              if ( !v43 )
                v40 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *PteFromCopyList = v40;
          if ( v41 )
            MiWritePteShadow((__int64)PteFromCopyList, v40, v42);
          MiUnlockPageTableInternal(v17, v32);
          MiUnlockWorkingSetShared(v17, v73);
          v35 = v76;
          *a7 = 1;
          goto LABEL_83;
        }
LABEL_50:
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v17, v32);
        MiUnlockWorkingSetShared(v17, v73);
        v48 = CurrentThread;
        v35 = v76;
        *v11 = v79;
        v49 = v75;
        v11[3] = (__int64)v48;
        v11[1] = v35;
        v11[2] = (__int64)PteFromCopyList;
        *((_DWORD *)v11 + 10) = 0;
        if ( v49 == -16 || (struct _KTHREAD *)v49 == v48 )
        {
          v53 = KeExpandKernelStackAndCalloutInternal(
                  (void (__fastcall *)(ULONG_PTR))MiJumpStack,
                  (ULONG_PTR)v11,
                  24576,
                  1,
                  0LL);
          if ( v53 < 0 )
            *((_DWORD *)v11 + 10) = v53;
        }
        else
        {
          KeGenericCallDpc(MiDoStackCopy, v11);
        }
        if ( *((int *)v11 + 10) >= 0 )
        {
          *a7 = 0;
          v67 = (unsigned __int8)MiLockPageInline(a2, v50, v51, v52);
          *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v67 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v67 + 1));
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v43 = (v70 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v70;
                if ( v43 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v67);
          goto LABEL_83;
        }
        v54 = ZeroPte;
        v55 = 0;
        if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
          goto LABEL_64;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v55 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
            v57 = (ZeroPte & 1) == 0;
            goto LABEL_62;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v57 = (ZeroPte & 1) == 0;
LABEL_62:
          if ( !v57 )
            v54 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_64:
        *PteFromCopyList = v54;
        if ( v55 )
          MiWritePteShadow((__int64)PteFromCopyList, v54, v56);
        MiReleaseFreshPage(v23);
        v61 = v11[7];
        if ( v61 )
        {
          v62 = (unsigned __int8)MiLockPageInline(v61, v58, v59, v60);
          MiRemoveLockedPageChargeAndDecRef(v11[7]);
          _InterlockedAnd64((volatile signed __int64 *)(v11[7] + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v63 = KeGetCurrentIrql();
              if ( v63 <= 0xFu && (unsigned __int8)v62 <= 0xFu && v63 >= 2u )
              {
                v64 = KeGetCurrentPrcb();
                v65 = v64->SchedulerAssist;
                v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v62 + 1));
                v43 = (v66 & v65[5]) == 0;
                v65[5] &= v66;
                if ( v43 )
                  KiRemoveSystemWorkPriorityKick(v64);
              }
            }
          }
          __writecr8(v62);
        }
        goto LABEL_90;
      }
      if ( (unsigned int)MiAddLockedPageCharge(a2, 0) )
      {
        v11[7] = a2;
        goto LABEL_50;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockPageTableInternal(v17, v32);
      MiUnlockWorkingSetShared(v17, v73);
      v44 = ZeroPte;
      v45 = 0;
      if ( !MiPteInShadowRange((unsigned __int64)PteFromCopyList) )
        goto LABEL_47;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v45 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v47 = (ZeroPte & 1) == 0;
          goto LABEL_45;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v47 = (ZeroPte & 1) == 0;
LABEL_45:
        if ( !v47 )
          v44 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_47:
      *PteFromCopyList = v44;
      if ( v45 )
        MiWritePteShadow((__int64)PteFromCopyList, v44, v46);
      goto LABEL_89;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockPageTableInternal(v17, v32);
LABEL_88:
    MiUnlockWorkingSetShared(v17, v30);
LABEL_89:
    MiReleaseFreshPage(v23);
    goto LABEL_90;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockPageTableInternal(v17, v32);
  MiUnlockWorkingSetShared(v17, v30);
  v35 = v76;
  *a7 = 1;
LABEL_83:
  *(_WORD *)(a2 + 32) = 0;
  if ( a6 )
    *a6 = v35;
  ExFreePoolWithTag(v11, 0);
  return 1LL;
}
