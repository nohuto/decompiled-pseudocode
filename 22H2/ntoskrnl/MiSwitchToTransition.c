/*
 * XREFs of MiSwitchToTransition @ 0x140539E54
 * Callers:
 *     MmRotatePhysicalView @ 0x14065FD60 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiObtainFaultCharges @ 0x14021BA50 (MiObtainFaultCharges.c)
 *     MiGetContainingPageTable @ 0x14023DDC0 (MiGetContainingPageTable.c)
 *     MiInitializePageColorBase @ 0x14023EBF0 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiChangePageAttributeBatch @ 0x140283C20 (MiChangePageAttributeBatch.c)
 *     MiSetPfnBlink @ 0x1402987B0 (MiSetPfnBlink.c)
 *     MiAddLockedPageCharge @ 0x14029AA98 (MiAddLockedPageCharge.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1402AF040 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiReturnFaultCharges @ 0x1402E4184 (MiReturnFaultCharges.c)
 *     MiIsProbeActive @ 0x1402ECF54 (MiIsProbeActive.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402EDF80 (ExAcquireRundownProtectionCacheAware.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiGetEffectivePagePriorityThread @ 0x140339E94 (MiGetEffectivePagePriorityThread.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140355540 (MiPageAttributeBatchChangeNeeded.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiAddMdlTracker @ 0x140530794 (MiAddMdlTracker.c)
 *     MiWaitForFreePage @ 0x14055C13C (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x1408C8604 (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  ULONG_PTR v4; // r15
  unsigned __int64 v5; // r14
  unsigned __int8 v6; // di
  __int64 v7; // r11
  __int64 v8; // rsi
  __int64 v9; // r12
  unsigned int v10; // r10d
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  unsigned int v14; // r13d
  unsigned int v15; // ebx
  signed __int32 v16; // r8d
  __int64 Page; // rax
  __int64 v18; // r8
  _DWORD *v19; // r9
  __int64 v20; // r15
  _DWORD *v21; // r9
  __int64 v22; // rbx
  unsigned int v23; // r12d
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  unsigned __int8 v26; // al
  __int64 v27; // r11
  ULONG_PTR v28; // rbx
  unsigned __int64 v29; // rax
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v31; // rax
  unsigned __int16 v32; // cx
  __int64 v33; // r15
  __int64 v34; // rax
  unsigned int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned __int64 v38; // r9
  unsigned __int8 v39; // r11
  __int64 v40; // rax
  struct _KTHREAD *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  char v44; // al
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v46; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v49; // eax
  bool v50; // zf
  __int64 TransitionPte; // rax
  char v52; // r15
  __int64 v53; // rbx
  __int64 v54; // r8
  int HasShadow; // eax
  int v56; // eax
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  _DWORD *v61; // r9
  unsigned int v62; // edi
  _KPROCESS *v63; // rsi
  _KPROCESS *v64; // rdx
  unsigned __int8 v66; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v67; // [rsp+31h] [rbp-CFh]
  __int64 v68; // [rsp+38h] [rbp-C8h]
  volatile signed __int64 *v69; // [rsp+38h] [rbp-C8h]
  int v71; // [rsp+44h] [rbp-BCh]
  __int64 v73; // [rsp+50h] [rbp-B0h]
  unsigned int v74; // [rsp+58h] [rbp-A8h]
  __int64 v75; // [rsp+60h] [rbp-A0h]
  char EffectivePagePriorityThread; // [rsp+68h] [rbp-98h]
  ULONG_PTR v77; // [rsp+70h] [rbp-90h] BYREF
  __int64 v78; // [rsp+78h] [rbp-88h] BYREF
  __int64 ContainingPageTable; // [rsp+80h] [rbp-80h]
  __int64 ReadyInPageBlock; // [rsp+88h] [rbp-78h]
  __int64 v81; // [rsp+90h] [rbp-70h]
  unsigned __int64 v82; // [rsp+98h] [rbp-68h]
  unsigned __int64 v83; // [rsp+A0h] [rbp-60h]
  __int128 v84; // [rsp+A8h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v86; // [rsp+C8h] [rbp-38h]
  _KPROCESS *Process; // [rsp+D0h] [rbp-30h]
  _QWORD v88[24]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = BugCheckParameter3;
  v84 = 0LL;
  memset(v88, 0, 0xB8uLL);
  v78 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(a2);
  v83 = *(_QWORD *)(v4 + 32);
  v5 = ((v83 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v75 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v71 = 0;
  v6 = 0;
  MiInitializePageColorBase((__int64)&Process[1].ActiveProcessorsPadding[6], 0, (__int64)&v84);
  v68 = 0xFFFFFFFFFLL;
  v8 = 0LL;
  v9 = 0LL;
  v73 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v7 + 174));
  v14 = MiObtainFaultCharges((ULONG_PTR *)v73, v10, 2);
  v74 = v14;
  v15 = 0;
  if ( !v14 )
    goto LABEL_14;
  while ( 1 )
  {
    v16 = _InterlockedExchangeAdd((volatile signed __int32 *)v84, 1u);
    Page = MiGetPage(v73, DWORD2(v84) & (unsigned int)v16 | HIDWORD(v84), 0LL);
    v20 = Page;
    if ( Page != -1 )
    {
      v8 = 48 * Page - 0x58000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v8, a3, v18, v19) == 1 )
      {
        *(_QWORD *)(v8 + 16) = v9;
        v9 = v8;
      }
      MiSetPfnBlink(v8, v68, 0);
      v68 = v20;
      ++v15;
      goto LABEL_8;
    }
    if ( v15 )
      break;
    MiWaitForFreePage(v73);
LABEL_8:
    if ( v15 == v14 )
      goto LABEL_11;
  }
  MiReturnFaultCharges(v73, v14 - v15, 0);
  v14 = v15;
  v74 = v15;
LABEL_11:
  if ( v9 )
  {
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v78);
    MiChangePageAttributeBatch(v9, a3, v78, v21);
  }
  v4 = BugCheckParameter3;
LABEL_14:
  v22 = v75;
  v23 = 0;
  ContainingPageTable = -1LL;
  v24 = v14;
  v25 = 0LL;
  v82 = v5 + 8 * v24;
  v26 = MiLockWorkingSetShared(v75, v11, v12, v13);
  v67 = v26;
  if ( v5 >= v82 )
    goto LABEL_66;
  v27 = 1LL;
  v86 = v4 - ((v83 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  while ( 2 )
  {
    if ( v25 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v22, v25);
        goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      v25 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v22, v25, 0LL);
      ContainingPageTable = MiGetContainingPageTable(v5);
      v27 = 1LL;
    }
    if ( (unsigned int)MiIsProbeActive(v5, v27, 3) )
      goto LABEL_63;
    v77 = MI_READ_PTE_LOCK_FREE(v5);
    v28 = v77;
    if ( (v77 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v5, v77, BugCheckParameter3);
    v29 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v77);
    BugCheckParameter4 = 48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      goto LABEL_29;
    if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v5 )
      KeBugCheckEx(0x1Au, 0x41300uLL, v5, v28, BugCheckParameter4);
    v31 = *(_QWORD *)(BugCheckParameter4 + 40);
    v32 = 1;
    if ( (v31 & 0x1000000000LL) != 0 || (v31 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
      v32 = 2;
    if ( *(_WORD *)(BugCheckParameter4 + 32) < v32 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v5, v28, BugCheckParameter4);
    if ( *(_WORD *)(BugCheckParameter4 + 32) <= v32 )
    {
LABEL_29:
      v33 = v8;
      v69 = (volatile signed __int64 *)(v8 + 24);
      v34 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL;
      if ( v34 == 0xFFFFFFFFFLL )
        v8 = 0LL;
      else
        v8 = 48 * v34 - 0x58000000000LL;
      v81 = (v33 + 0x58000000000LL) / 48;
      v35 = (v28 & 0x800) != 0 ? 4 : 1;
      if ( a3 == 2 )
      {
        v35 |= 0x18u;
      }
      else if ( !a3 )
      {
        v35 |= 8u;
      }
      v77 = MiSwizzleInvalidPte(32LL * v35);
      *(_QWORD *)(v33 + 16) = v77;
      if ( (v6 & v39) == 0 )
      {
        v40 = ReadyInPageBlock;
        v41 = CurrentThread;
        *(_DWORD *)(ReadyInPageBlock + 192) |= 0x20u;
        *(_DWORD *)(v40 + 80) = 0;
        *(_QWORD *)(v40 + 88) = 0LL;
        v6 |= v39;
        *(_QWORD *)(v40 + 248) = v33;
        *(_QWORD *)(v40 + 152) = v41;
      }
      *(_QWORD *)(v33 + 40) ^= v38 & (ContainingPageTable ^ *(_QWORD *)(v33 + 40));
      v66 = MiLockPageInline(v33, v36, v37, (_DWORD *)v38);
      v42 = ReadyInPageBlock;
      *(_BYTE *)(v33 + 34) |= 0x20u;
      if ( v42 )
        v43 = v42 + 32;
      else
        v43 = 0LL;
      *(_QWORD *)v33 = v43;
      *v69 &= 0xC000000000000000uLL;
      MiAddLockedPageCharge(v33, 1);
      v44 = *(_BYTE *)(v33 + 34) & 0xFA;
      *(_QWORD *)(v33 + 8) = v5;
      *(_BYTE *)(v33 + 34) = v44 | 2;
      *(_BYTE *)(v33 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(v33 + 35)) & 7;
      if ( ((*(_QWORD *)(v33 + 40) >> 39) & 0x3FF) != 0 )
        ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v73 + 2144));
      _InterlockedAnd64(v69, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v46 = v66;
        if ( v66 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << (v66 + 1));
          v50 = (v49 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v49;
          if ( v50 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      else
      {
        v46 = v66;
      }
      __writecr8(v46);
      MiReturnFaultCharges(v73, 1uLL, 0);
      TransitionPte = MiMakeTransitionPte(v81, v35);
      v52 = TransitionPte;
      v77 = TransitionPte;
      v53 = TransitionPte;
      if ( MiPteInShadowRange(v5) )
      {
        HasShadow = MiPteHasShadow();
        v27 = 1LL;
        if ( HasShadow )
        {
          v56 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
LABEL_55:
            if ( (v52 & 1) != 0 )
              v53 |= 0x8000000000000000uLL;
          }
        }
        else
        {
          v56 = 0;
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            goto LABEL_55;
        }
      }
      else
      {
        v56 = 0;
        v27 = 1LL;
      }
      *(_QWORD *)v5 = v53;
      if ( v56 )
        MiWritePteShadow(v5, v53, v54);
      v23 += v27;
      v22 = v75;
      *(_QWORD *)(v86 + v5 + 48) = v81;
      v5 += 8LL;
      if ( v5 >= v82 )
        goto LABEL_63;
      continue;
    }
    break;
  }
  v22 = v75;
  v71 = 1;
LABEL_63:
  if ( v25 )
    MiUnlockPageTableInternal(v22, v25);
  v26 = v67;
  v4 = BugCheckParameter3;
LABEL_66:
  MiUnlockWorkingSetShared(v22, v26);
  if ( v8 )
  {
    do
    {
      v57 = v8;
      v58 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL;
      if ( v58 == 0xFFFFFFFFFLL )
        v8 = 0LL;
      else
        v8 = 48 * v58 - 0x58000000000LL;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v57 + 16));
      MiReleaseFreshPage(v60, v59, v60, v61);
    }
    while ( v8 );
    v4 = BugCheckParameter3;
  }
  if ( v23 == v74 )
  {
    v62 = v71;
  }
  else
  {
    MiReturnFaultCharges(v73, v74 - v23, 0);
    v62 = v71;
    if ( !v23 )
      v62 = 1;
  }
  *(_DWORD *)(v4 + 40) = v23 << 12;
  if ( v23 )
  {
    v63 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], v23);
    WORD2(v88[0]) = 0;
    v88[2] = 0LL;
    v88[3] = 0LL;
    LODWORD(v88[0]) = 1;
    LODWORD(v88[1]) = 20;
    MiInsertTbFlushEntry((__int64)v88, v83 & 0xFFFFFFFFFFFFF000uLL, v23, 0);
    MiFlushTbList((__int64)v88, v64);
    *(_QWORD *)(v4 + 16) = v63;
    *(_WORD *)(v4 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v63[1].Affinity.Bitmap[14], v23);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(v4, v23, 4);
  }
  return v62;
}
