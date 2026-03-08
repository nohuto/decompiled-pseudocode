/*
 * XREFs of MiMigratePfn @ 0x140272370
 * Callers:
 *     MiHandleTransitionFault @ 0x1402720E0 (MiHandleTransitionFault.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiCopyPfnEntryEx @ 0x140213930 (MiCopyPfnEntryEx.c)
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140286190 (MiIsPfnCommitNotCharged.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x140286E00 (MiRemoveLockedPageCharge.c)
 *     MiGetInPageSupportBlock @ 0x14028A054 (MiGetInPageSupportBlock.c)
 *     MiFinalizePageAttribute @ 0x14028A354 (MiFinalizePageAttribute.c)
 *     MiNodeFromFaultPacket @ 0x14028B000 (MiNodeFromFaultPacket.c)
 *     MiAddLockedPageCharge @ 0x1402A309C (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiUpdateTransitionPteFrame @ 0x1402C6CD0 (MiUpdateTransitionPteFrame.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiCapturePageFileInfoInline @ 0x1402DE2D4 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiReturnFaultCharges @ 0x1402F4480 (MiReturnFaultCharges.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiObtainFaultCharges @ 0x14031EEE0 (MiObtainFaultCharges.c)
 *     MiCopyPage @ 0x14032DC70 (MiCopyPage.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 *     MiReturnFreeZeroPage @ 0x14034E5C4 (MiReturnFreeZeroPage.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMigratePfn(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int8 v4; // cf
  unsigned int *p_PageColor; // r13
  unsigned int v8; // r12d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  int v15; // ebx
  unsigned __int64 v16; // rbp
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r12
  unsigned __int64 v19; // rax
  __int64 **Address; // rax
  __int64 v21; // rdx
  unsigned int v22; // ecx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int NodeShiftedColor; // r15d
  int v25; // ebp
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r10
  unsigned int v29; // r15d
  unsigned int *v30; // rbp
  unsigned int *v31; // r13
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // ebp
  ULONG_PTR Page; // rax
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r15
  ULONG_PTR v39; // rbp
  unsigned int *v40; // rbx
  __int64 v41; // rbp
  __int64 v42; // r13
  unsigned int v43; // ebx
  _QWORD *v44; // r12
  __int64 v45; // rax
  __int64 updated; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  ULONG_PTR v51; // rcx
  ULONG_PTR v52; // r12
  __int16 v53; // si
  __int64 v54; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v56; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v58; // zf
  int v59; // [rsp+20h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+28h] [rbp-60h]
  __int64 v61; // [rsp+30h] [rbp-58h]
  __int64 v62; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v63; // [rsp+98h] [rbp+10h] BYREF
  __int64 v64; // [rsp+A0h] [rbp+18h]
  __int64 *v65; // [rsp+A8h] [rbp+20h]

  v65 = a4;
  v64 = a3;
  v4 = _bittest64((const signed __int64 *)(a2 + 40), 0x35u);
  p_PageColor = *(unsigned int **)(a1 + 56);
  v63 = *(_QWORD *)a1;
  v62 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    return a2;
  v8 = 1;
  if ( (unsigned int)MiCheckSlabPfnBitmap(a2, 1LL, 0LL)
    || (unsigned __int16)KeNumberNodes <= 1u
    || *(_WORD *)(a2 + 32)
    || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
  {
    return a2;
  }
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 < 0 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    if ( (v11 & 0x400) != 0 )
    {
      if ( (v10 & 0x20000000000000LL) != 0 )
        return a2;
      if ( qword_140C657C0 && (v11 & 0x10) == 0 )
        v11 &= ~qword_140C657C0;
      v12 = v11 >> 16;
      v13 = *(_QWORD *)v12;
      if ( v12 != *(_QWORD *)v12 + 128LL
        && (*(_DWORD *)(v13 + 56) & 0x20) != 0
        && (*(_DWORD *)(v13 + 92) & 0x20000) != 0 )
      {
        return a2;
      }
    }
  }
  v14 = 0LL;
  v15 = MiNodeFromFaultPacket(a1);
  if ( !v15 )
  {
    v16 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (*(_QWORD *)(a1 + 16) & 1) == 0 )
      v16 = 0LL;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
      goto LABEL_32;
    CurrentThread = KeGetCurrentThread();
    Process = CurrentThread->ApcState.Process;
    v19 = Process[1].ActiveProcessors.StaticBitmap[28];
    if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && *(_QWORD *)a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_39;
    if ( !v16 && !*(_QWORD *)(v19 + 408) && !*(_QWORD *)(v19 + 416) && !*(_BYTE *)(v19 + 340) )
      goto LABEL_31;
    MiLockVadTree(1LL);
    Address = MiLocateAddress(*(_QWORD *)a1);
    LOBYTE(v21) = 17;
    v61 = (__int64)Address;
    MiUnlockVadTree(1LL, v21);
    if ( !v61
      || (v22 = *(_DWORD *)(v61 + 48), (v15 = (v22 >> 12) & 0x7F) == 0)
      && ((v22 & 0x200000) != 0
       || (v27 = **(_QWORD **)(v61 + 72)) == 0
       || (v15 = (*(_DWORD *)(v27 + 56) >> 20) & 0x7F) == 0) )
    {
LABEL_39:
      if ( v16 && CurrentThread->ApcStateIndex == 1 )
        v15 = Process->IdealNode[CurrentThread->AffinityPrimaryGroup] + 1;
      if ( !v15 )
        goto LABEL_31;
    }
  }
  *(_DWORD *)(a1 + 80) |= 0x10000u;
  if ( !v15 )
  {
LABEL_31:
    v8 = 1;
LABEL_32:
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
    goto LABEL_33;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 1;
  NodeShiftedColor = (v15 - 1) << byte_140C6570D;
LABEL_33:
  v25 = (1 << byte_140C6570E) - 1;
  if ( !p_PageColor || (p_PageColor[46] & 7) >= 2 )
    p_PageColor = &CurrentPrcb->PageColor;
  v26 = NodeShiftedColor >> byte_140C6570D;
  if ( v26 == *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) + 8) )
    return a2;
  v28 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v61 = v28;
  v29 = v25 & _InterlockedExchangeAdd((volatile signed __int32 *)p_PageColor, 1u) | NodeShiftedColor;
  v30 = (unsigned int *)(qword_140C65718 + 4LL * v26 * (unsigned __int16)KeNumberNodes);
  v31 = &v30[(unsigned __int16)KeNumberNodes];
  if ( v30 < v31 )
  {
    while ( 1 )
    {
      v32 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
      v33 = *v30;
      if ( (_DWORD)v33 == *(_DWORD *)(v32 + 8) )
        return a2;
      v28 = v61;
      if ( *(_OWORD *)(*(_QWORD *)(v61 + 16) + 25408 * v33 + 22752) == 0LL && ++v30 < v31 )
        continue;
      break;
    }
  }
  if ( *(__int64 *)(a2 + 40) >= 0 || (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
  {
    v8 = 0;
    if ( (unsigned int)MiIsPfnCommitNotCharged(a2) )
      v8 = 5;
  }
  v34 = 1;
  if ( !MiObtainFaultCharges(v28, 1LL, v8) )
    return a2;
  if ( (v62 & 1) != 0 && *(_BYTE *)(v62 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (unsigned int)MiGetSystemRegionType(v63) == 12 )
    v34 = 9;
  Page = MiGetPage(v61, v29, v34);
  BugCheckParameter3 = Page;
  if ( Page == -1LL )
  {
    v36 = v8;
    v37 = v61;
LABEL_61:
    MiReturnFaultCharges(v37, 1LL, v36);
    return a2;
  }
  v38 = 48 * Page - 0x220000000000LL;
  v39 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * Page) >> 4);
  if ( v26 != *(_DWORD *)(MiSearchNumaNodeTable(v39) + 8) )
  {
    v40 = (unsigned int *)(qword_140C65718 + 4LL * v26 * (unsigned __int16)KeNumberNodes);
    if ( v40 < v31 )
    {
      while ( *v40 != *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) + 8) )
      {
        if ( *v40 != *(_DWORD *)(MiSearchNumaNodeTable(v39) + 8) && ++v40 < v31 )
          continue;
        goto LABEL_67;
      }
      goto LABEL_69;
    }
  }
LABEL_67:
  v41 = v64;
  if ( v64 )
  {
    v42 = MiGetInPageSupportBlock(6LL);
    if ( !v42 )
    {
LABEL_69:
      MiLockNestedPageAtDpcInline(v38);
      MiReturnFreeZeroPage(v38, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v37 = v61;
      v36 = v8;
      goto LABEL_61;
    }
  }
  else
  {
    v42 = 0LL;
  }
  v43 = *(unsigned __int8 *)(a2 + 34) >> 6;
  MiLockNestedPageAtDpcInline(v38);
  MiFinalizePageAttribute(v38, v43, 1LL);
  MiCopyPfnEntryEx(v38, (__int128 *)a2);
  *(_WORD *)(v38 + 32) = 1;
  *(_QWORD *)(v38 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  if ( v42 )
  {
    *(_DWORD *)(v42 + 192) |= 0x20u;
    *(_BYTE *)(v38 + 34) |= 0x20u;
    *(_QWORD *)v38 = v42 + 32;
    *(_QWORD *)(v42 + 248) = v38;
  }
  v44 = (_QWORD *)(*(_QWORD *)(v38 + 8) | 0x8000000000000000uLL);
  v45 = MI_READ_PTE_LOCK_FREE(v44);
  updated = MiUpdateTransitionPteFrame(v45, BugCheckParameter3);
  if ( (unsigned int)MiPteInShadowRange(v44) )
  {
    if ( (unsigned int)MiPteHasShadow(v48, v47, v49) )
    {
      if ( !HIBYTE(word_140C6697C) && (updated & 1) != 0 )
        updated |= 0x8000000000000000uLL;
      *v44 = updated;
      MiWritePteShadow(v44, updated);
      goto LABEL_83;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (updated & 1) != 0 )
    {
      updated |= 0x8000000000000000uLL;
    }
  }
  *v44 = updated;
LABEL_83:
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v41 )
  {
    MiLockNestedPageAtDpcInline(v41);
    MiAddLockedPageCharge(v41, 3LL);
    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v50) = 17;
    MiUnlockProtoPoolPage(v41, v50);
    v51 = BugCheckParameter3;
    *v65 = v42;
    MiCopyPage(v51, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
    MiLockProtoPoolPage(v44, 0LL);
    LODWORD(v62) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v62);
      while ( *(__int64 *)(v41 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v41);
    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LODWORD(v63) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v63);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
    v52 = BugCheckParameter3;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
      {
        v56 = KeGetCurrentPrcb();
        SchedulerAssist = v56->SchedulerAssist;
        v58 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
        SchedulerAssist[5] &= 0xFFFF0007;
        if ( v58 )
          KiRemoveSystemWorkPriorityKick(v56);
      }
    }
    __writecr8(2uLL);
    v52 = BugCheckParameter3;
    MiCopyPage(BugCheckParameter3, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
    MiLockPageInline(a2);
  }
  MiSetPfnIdentity(a2, 0LL);
  MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v59 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v59);
    while ( *(__int64 *)(v38 + 24) < 0 );
  }
  v53 = *(_WORD *)(v38 + 32);
  *(_BYTE *)(v38 + 34) &= ~0x20u;
  *(_QWORD *)v38 = 0LL;
  MiRemoveLockedPageCharge(v38);
  if ( !v42 )
    return v38;
  *(_DWORD *)(v42 + 192) &= ~0x20u;
  if ( (*(_QWORD *)(v38 + 24) & 0x4000000000000000LL) == 0 )
    return v38;
  if ( v53 == 1 )
  {
    if ( (*(_DWORD *)(v38 + 16) & 0x400LL) == 0 )
      v14 = MiCapturePageFileInfoInline(v38 + 16, 0LL, 1LL);
    MiInsertPageInFreeOrZeroedList(v52);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v41 )
  {
    LOBYTE(v54) = 2;
    MiUnlockProtoPoolPage(v41, v54);
  }
  if ( v14 )
    MiReleasePageFileInfo(v61, v14, 1);
  return 0LL;
}
