/*
 * XREFs of MiSwitchToTransition @ 0x140630D6C
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140A2E748 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x140211998 (MiChangePageAttributeBatch.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiSetPfnBlink @ 0x140289900 (MiSetPfnBlink.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiGetEffectivePagePriorityThread @ 0x14028A260 (MiGetEffectivePagePriorityThread.c)
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1402B49B4 (MiPageAttributeBatchChangeNeeded.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402C3B80 (ExAcquireRundownProtectionCacheAware.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiReturnFaultCharges @ 0x1402F4480 (MiReturnFaultCharges.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiObtainFaultCharges @ 0x14031EEE0 (MiObtainFaultCharges.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAddMdlTracker @ 0x14061A0AC (MiAddMdlTracker.c)
 *     MiIsProbeActive @ 0x14062BDE8 (MiIsProbeActive.c)
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x140A2E670 (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r15
  void *v9; // r14
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r12
  __int64 v12; // rbx
  signed __int32 v13; // r8d
  __int64 Page; // rax
  __int64 v15; // r14
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r13
  unsigned __int8 v19; // al
  __int64 v20; // r11
  ULONG_PTR v21; // rbx
  unsigned __int64 v22; // rax
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v24; // rax
  unsigned __int16 v25; // cx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  char v32; // r11
  __int64 v33; // rbx
  struct _KTHREAD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  volatile signed __int64 *v37; // rbx
  char v38; // al
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v40; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  bool v44; // zf
  __int64 v45; // rax
  char v46; // r15
  __int64 v47; // rbx
  __int64 v48; // r8
  BOOL HasShadow; // eax
  int v50; // eax
  unsigned __int64 v51; // rax
  __int64 v52; // r8
  unsigned int v53; // edi
  ULONG_PTR v54; // rbx
  _KPROCESS *v55; // rsi
  unsigned __int8 v57; // [rsp+30h] [rbp-D0h]
  char v58; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v59; // [rsp+32h] [rbp-CEh]
  int v61; // [rsp+38h] [rbp-C8h]
  __int64 v62; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v63; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v64; // [rsp+50h] [rbp-B0h]
  __int64 v65; // [rsp+58h] [rbp-A8h]
  char EffectivePagePriorityThread; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v67; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h]
  __int64 v69; // [rsp+78h] [rbp-88h] BYREF
  __int64 ReadyInPageBlock; // [rsp+80h] [rbp-80h]
  unsigned __int64 ContainingPageTable; // [rsp+88h] [rbp-78h]
  unsigned __int64 v72; // [rsp+90h] [rbp-70h]
  unsigned __int64 v73; // [rsp+98h] [rbp-68h]
  __int128 v74; // [rsp+A0h] [rbp-60h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  volatile signed __int64 *v76; // [rsp+B8h] [rbp-48h]
  __int64 v77; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v78; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v79; // [rsp+D0h] [rbp-30h]
  _KPROCESS *Process; // [rsp+D8h] [rbp-28h]
  _QWORD v81[24]; // [rsp+E0h] [rbp-20h] BYREF

  BugCheckParameter3 = a1;
  v74 = 0LL;
  memset(v81, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(a2);
  v73 = *(_QWORD *)(a1 + 32);
  v61 = 0;
  v5 = ((v73 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v58 = 0;
  v65 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  MiInitializePageColorBase((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], 0, (__int64)&v74);
  v6 = 0LL;
  v7 = 0x3FFFFFFFFFLL;
  v8 = 0LL;
  v9 = *(void **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v65 + 174));
  v62 = (__int64)v9;
  v11 = MiObtainFaultCharges(v9, v10, 2);
  v72 = v11;
  v12 = 0LL;
  if ( !v11 )
    goto LABEL_13;
  while ( 1 )
  {
    v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v74, 1u);
    Page = MiGetPage((__int64)v9, DWORD2(v74) & (unsigned int)v13 | HIDWORD(v74), 0);
    v15 = Page;
    if ( Page != -1 )
    {
      v6 = 48 * Page - 0x220000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v6, a3) )
      {
        *(_QWORD *)(v6 + 16) = v8;
        v8 = v6;
      }
      MiSetPfnBlink(v6, v7, 0);
      v7 = v15;
      v9 = (void *)v62;
      ++v12;
      goto LABEL_8;
    }
    if ( v12 )
      break;
    v9 = (void *)v62;
    MiWaitForFreePage(v62);
LABEL_8:
    if ( v12 == v11 )
      goto LABEL_11;
  }
  MiReturnFaultCharges(v62, v11 - v12, 0LL);
  v11 = v12;
  v72 = v12;
LABEL_11:
  if ( v8 )
  {
    v69 = 0LL;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v69);
    MiChangePageAttributeBatch(v8, a3, v69);
  }
LABEL_13:
  v16 = v65;
  ContainingPageTable = -1LL;
  v17 = 0LL;
  v79 = v5 + 8 * v11;
  v18 = 0LL;
  v63 = 0LL;
  v19 = MiLockWorkingSetShared(v65);
  v59 = v19;
  if ( v5 >= v5 + 8 * v11 )
    goto LABEL_33;
  v20 = 1LL;
  v78 = BugCheckParameter3 - ((v73 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000030LL;
  while ( 2 )
  {
    if ( v18 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v16, v18);
        goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      v18 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v16, v18, 0);
      ContainingPageTable = MiGetContainingPageTable(v5);
      v20 = 1LL;
    }
    if ( (unsigned int)MiIsProbeActive(v5, v20, 3) )
      goto LABEL_30;
    v21 = MI_READ_PTE_LOCK_FREE(v5);
    v67 = v21;
    if ( (v21 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v5, v21, BugCheckParameter3);
    v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v67) >> 12) & 0xFFFFFFFFFFLL;
    BugCheckParameter4 = 48 * v22 - 0x220000000000LL;
    if ( v22 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v22 - 0x21FFFFFFFFD8LL), 0x36u) )
      goto LABEL_36;
    if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v5 )
      KeBugCheckEx(0x1Au, 0x41300uLL, v5, v21, BugCheckParameter4);
    v24 = *(_QWORD *)(BugCheckParameter4 + 40);
    v25 = 1;
    if ( (v24 & 0x10000000000LL) != 0 || (v24 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
      v25 = 2;
    if ( *(_WORD *)(BugCheckParameter4 + 32) < v25 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v5, v21, BugCheckParameter4);
    if ( *(_WORD *)(BugCheckParameter4 + 32) <= v25 )
    {
LABEL_36:
      v76 = (volatile signed __int64 *)(v6 + 24);
      v28 = v6;
      v29 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFLL;
      if ( v29 == 0x3FFFFFFFFFLL )
        v6 = 0LL;
      else
        v6 = 48 * v29 - 0x220000000000LL;
      v64 = 0xAAAAAAAAAAAAAAABuLL * ((v28 + 0x220000000000LL) >> 4);
      v30 = (v21 & 0x800) != 0 ? 4 : 1;
      if ( a3 == 2 )
      {
        v30 = (unsigned int)v30 | 0x18;
      }
      else if ( !a3 )
      {
        v30 = (unsigned int)v30 | 8;
      }
      v77 = v30;
      v31 = MiSwizzleInvalidPte(32 * v30);
      v33 = ReadyInPageBlock;
      v67 = v31;
      *(_QWORD *)(v28 + 16) = v31;
      if ( !v58 )
      {
        v34 = CurrentThread;
        *(_DWORD *)(v33 + 192) |= 0x20u;
        *(_DWORD *)(v33 + 80) = 0;
        *(_QWORD *)(v33 + 88) = 0LL;
        *(_QWORD *)(v33 + 152) = v34;
        *(_QWORD *)(v33 + 248) = v28;
        v58 = v32;
      }
      MiSetPfnPteFrame(v28, ContainingPageTable);
      v57 = MiLockPageInline(v35);
      *(_BYTE *)(v28 + 34) |= 0x20u;
      if ( v33 )
        v36 = v33 + 32;
      else
        v36 = 0LL;
      v37 = v76;
      *(_QWORD *)v28 = v36;
      *v37 &= 0xC000000000000000uLL;
      MiAddLockedPageCharge(v28, 1);
      v38 = *(_BYTE *)(v28 + 34) & 0xFA;
      *(_QWORD *)(v28 + 8) = v5;
      *(_BYTE *)(v28 + 34) = v38 | 2;
      *(_BYTE *)(v28 + 35) ^= (*(_BYTE *)(v28 + 35) ^ EffectivePagePriorityThread) & 7;
      if ( ((*(_QWORD *)(v28 + 40) >> 43) & 0x3FF) != 0 )
        ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v62 + 2432));
      _InterlockedAnd64(v37, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
      {
        v40 = v57;
        if ( v57 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << (v57 + 1));
          v44 = (v43 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v43;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      else
      {
        v40 = v57;
      }
      __writecr8(v40);
      MiReturnFaultCharges(v62, 1LL, 0LL);
      v45 = MiSwizzleInvalidPte(32 * (v77 | ((v64 & 0xFFFFFFFFFFLL) << 7) | 0x40));
      v46 = v45;
      v67 = v45;
      v47 = v45;
      if ( MiPteInShadowRange(v5) )
      {
        HasShadow = MiPteHasShadow();
        v20 = 1LL;
        if ( HasShadow )
        {
          v50 = 1;
          if ( HIBYTE(word_140C6697C) )
            goto LABEL_66;
        }
        else
        {
          v50 = 0;
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_66;
        }
        if ( (v46 & 1) != 0 )
          v47 |= 0x8000000000000000uLL;
      }
      else
      {
        v50 = 0;
        v20 = 1LL;
      }
LABEL_66:
      *(_QWORD *)v5 = v47;
      if ( v50 )
        MiWritePteShadow(v5, v47, v48);
      v51 = v64;
      v17 += v20;
      v16 = v65;
      v63 = v17;
      *(_QWORD *)(v78 + v5) = v51;
      v5 += 8LL;
      if ( v5 >= v79 )
        goto LABEL_30;
      continue;
    }
    break;
  }
  v16 = v65;
  v61 = 1;
LABEL_30:
  if ( v18 )
    MiUnlockPageTableInternal(v16, v18);
  v19 = v59;
LABEL_33:
  MiUnlockWorkingSetShared(v16, v19);
  if ( v6 )
  {
    do
    {
      v26 = v6;
      v27 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFLL;
      if ( v27 == 0x3FFFFFFFFFLL )
        v6 = 0LL;
      else
        v6 = 48 * v27 - 0x220000000000LL;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v26 + 16));
      MiReleaseFreshPage(v52);
    }
    while ( v6 );
    v17 = v63;
    v11 = v72;
  }
  if ( v17 == v11 )
  {
    v53 = v61;
  }
  else
  {
    MiReturnFaultCharges(v62, v11 - v17, 0LL);
    v53 = v61;
    if ( !v17 )
      v53 = 1;
  }
  v54 = BugCheckParameter3;
  *(_DWORD *)(BugCheckParameter3 + 40) = (_DWORD)v17 << 12;
  if ( v17 )
  {
    v55 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13], v17);
    WORD2(v81[0]) = 0;
    v81[2] = 0LL;
    v81[3] = 0LL;
    LODWORD(v81[0]) = 1;
    v81[1] = 20LL;
    MiInsertTbFlushEntry((__int64)v81, v73 & 0xFFFFFFFFFFFFF000uLL, v17, 0);
    MiFlushTbList((int *)v81);
    *(_QWORD *)(v54 + 16) = v55;
    *(_WORD *)(v54 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v55[1].Affinity.StaticBitmap[14], v17);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(v54, v17, 4);
  }
  return v53;
}
