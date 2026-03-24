/*
 * XREFs of MiCopyDataPageToImagePage @ 0x140284A68
 * Callers:
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14023A820 (MiRemoveLockedPageCharge.c)
 *     PsGetIoPriorityThread @ 0x140242180 (PsGetIoPriorityThread.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402610E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiTryLockLeafPage @ 0x140283FF8 (MiTryLockLeafPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140285334 (MiTryLockProtoPoolPageAtDpc.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x14029A69C (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14029A708 (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14029AA98 (MiAddLockedPageCharge.c)
 *     MiEndingOffset @ 0x14029CED0 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x14029EAA0 (MiStartingOffset.c)
 *     MiGetSessionIdForVa @ 0x14029EB40 (MiGetSessionIdForVa.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A6480 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1402A6550 (MiInsertAndUnlockStandbyPages.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiAdvanceFaultList @ 0x1402E40E8 (MiAdvanceFaultList.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F4E60 (MiDereferenceControlAreaPfnList.c)
 *     MiDecayPfnFullyInitialized @ 0x1403035CC (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x140306428 (MiCreateDecayPfn.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14032161C (MiUnlockNestedProtoPoolPage.c)
 *     MiInitializeTransitionPfn @ 0x14033723C (MiInitializeTransitionPfn.c)
 *     MiDiscardTransitionPteEx @ 0x140388794 (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyPage @ 0x1404024D0 (KeCopyPage.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(
        __int64 a1,
        volatile LONG **a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned int v10; // ebx
  volatile LONG *v11; // rdi
  unsigned int SessionIdForVa; // eax
  __int64 v13; // rax
  volatile LONG *v14; // r15
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r8
  ULONG_PTR v20; // rdi
  unsigned int v22; // r9d
  unsigned __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned int v25; // ecx
  __int64 *v26; // r15
  __int64 v27; // rcx
  unsigned __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r9
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR *v34; // rsi
  ULONG_PTR v35; // rdi
  char v36; // r15
  int locked; // eax
  ULONG_PTR v38; // rcx
  ULONG_PTR *v39; // r13
  __int64 v40; // rdi
  __int64 v41; // rbx
  unsigned __int64 v42; // rsi
  char v43; // al
  __int64 v44; // r15
  __int64 v45; // r8
  unsigned __int64 v46; // r9
  ULONG_PTR v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  _DWORD *SchedulerAssist; // r9
  _QWORD *v51; // rsi
  __int64 v52; // r12
  __int64 ValidPte; // rax
  int v54; // r15d
  int v55; // edi
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rbx
  int v68; // r15d
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  int v74; // eax
  ULONG_PTR DecayPfn; // rdi
  __int64 v76; // rbx
  char v77; // si
  unsigned __int8 v78; // bl
  unsigned __int8 v79; // dl
  unsigned int v80; // edi
  __int64 v81; // rdx
  bool v82; // zf
  char v83; // r11
  char v84; // r11
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v87; // eax
  volatile LONG *SpinLock; // [rsp+28h] [rbp-99h]
  unsigned int v89; // [rsp+30h] [rbp-91h]
  volatile LONG *Src; // [rsp+38h] [rbp-89h]
  void *Srca; // [rsp+38h] [rbp-89h]
  struct _KTHREAD *v92; // [rsp+40h] [rbp-81h]
  __int64 v93; // [rsp+48h] [rbp-79h]
  ULONG_PTR v94; // [rsp+50h] [rbp-71h] BYREF
  int v95; // [rsp+58h] [rbp-69h] BYREF
  __int64 v96; // [rsp+60h] [rbp-61h] BYREF
  ULONG_PTR BugCheckParameter2[10]; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int64 v98; // [rsp+B8h] [rbp-9h]
  char v100; // [rsp+120h] [rbp+5Fh] BYREF
  unsigned __int64 v101; // [rsp+128h] [rbp+67h]
  __int64 v102; // [rsp+130h] [rbp+6Fh]

  v102 = a4;
  v101 = a3;
  v100 = 0;
  v8 = a1;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v9 = *(_QWORD *)(v8 + 224);
  LOBYTE(v10) = 0;
  v96 = 0LL;
  v11 = *a2;
  Src = *a2;
  SessionIdForVa = MiGetSessionIdForVa(v9);
  v13 = MiStartingOffset(a2, a3, SessionIdForVa);
  v14 = v11 + 18;
  v93 = v13;
  SpinLock = v11 + 18;
  v15 = v13;
  ExAcquireSpinLockExclusiveAtDpcLevel(v11 + 18);
  v16 = *((_QWORD *)v11 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4C980);
  v17 = **(_QWORD **)(v16 + 40);
  if ( !v17 || !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v17 + 72)) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C980);
LABEL_3:
    if ( (v10 & 1) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 72));
    if ( (v10 & 2) == 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v14);
    if ( BugCheckParameter2[5] )
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[5] + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[6] )
      MiUnlockNestedProtoPoolPage(BugCheckParameter2[6], v18, v19);
    v20 = BugCheckParameter2[0];
    if ( BYTE1(BugCheckParameter2[4]) == 1 )
      MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2[0]);
    if ( v20 )
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[1] )
      MiUnlockProtoPoolPage(BugCheckParameter2[1], 2u);
    if ( (v10 & 4) != 0 )
      MiDereferenceControlAreaPfnList(Src, 0LL, v19, 3LL);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C980);
  v19 = 0LL;
  LOBYTE(v10) = 1;
  if ( !*(_QWORD *)(v17 + 32) || (*(_DWORD *)(v17 + 56) & 3) != 0 )
    goto LABEL_3;
  v98 = MiEndingOffset(a2);
  v23 = v15 >> 12;
  v10 = v22 + 8;
  v24 = v17 + 128;
  if ( (unsigned int)(v15 >> 12) != (unsigned int)((v98 - 1) >> 12) )
    v10 = v22;
  while ( 1 )
  {
    v25 = *(_DWORD *)(v24 + 44);
    if ( (unsigned int)v23 < v25 )
      break;
    v24 = *(_QWORD *)(v24 + 16);
    LODWORD(v23) = v23 - v25;
    if ( !v24 )
      goto LABEL_3;
  }
  v26 = (__int64 *)BugCheckParameter2;
  v89 = 2;
  while ( 1 )
  {
    if ( *(_DWORD *)(v24 + 104) == (_DWORD)v19 )
      goto LABEL_96;
    v27 = *(_QWORD *)(v24 + 8);
    v18 = 0x7FFFFFFFF8LL;
    if ( !v27 )
      goto LABEL_96;
    v28 = v27 + 8LL * (unsigned int)v23;
    if ( !v28 )
      goto LABEL_96;
    v29 = (v28 >> 9) & 0x7FFFFFFFF8LL;
    v30 = (v101 >> 9) & 0x7FFFFFFFF8LL;
    v26[2] = v28;
    if ( v29 == v30
      || v26 != (__int64 *)BugCheckParameter2 && v29 == (((unsigned __int64)*(v26 - 3) >> 9) & 0x7FFFFFFFF8LL) )
    {
      MiTryLockLeafPage((__int64 *)v28, 0x7FFFFFFFF8LL, v26);
    }
    else
    {
      if ( (int)MiTryLockProtoPoolPageAtDpc(v28, 0x7FFFFFFFF8LL, &v96, v26) < 0 )
        goto LABEL_96;
      v26[1] = v96;
    }
    v31 = *v26;
    if ( !*v26
      || (*(_BYTE *)(v31 + 34) & 0x20) != 0
      || (*(_BYTE *)(v31 + 35) & 0x40) != 0
      || *(_WORD *)(v31 + 32) >= 0x7FFFu )
    {
LABEL_96:
      v14 = SpinLock;
      goto LABEL_3;
    }
    v26[3] = MI_READ_PTE_LOCK_FREE(v28);
    if ( v26 != (__int64 *)BugCheckParameter2 || (v93 & 0xFFF) == 0 || v10 >= 8 )
      break;
    v26 += 5;
    ++v89;
    LODWORD(v23) = v23 + 1;
    v19 = 0LL;
    if ( (unsigned int)v23 >= *(_DWORD *)(v24 + 44) )
    {
      v24 = *(_QWORD *)(v24 + 16);
      LODWORD(v23) = 0;
      if ( !v24 )
        goto LABEL_96;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 72));
  ++*((_QWORD *)Src + 4);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  CurrentThread = KeGetCurrentThread();
  v34 = BugCheckParameter2;
  v35 = BugCheckParameter2[0];
  LOBYTE(v10) = v10 & 0xF8 | 6;
  v92 = CurrentThread;
  v19 = 0LL;
  v94 = BugCheckParameter2[0];
  if ( !BugCheckParameter2[0] )
    goto LABEL_55;
  while ( 1 )
  {
    v36 = 0;
    if ( (v34[3] & 1) == 0 && !*(_WORD *)(v35 + 32) )
    {
      *((_BYTE *)v34 + 32) = (*(_BYTE *)(v35 + 35) & 8) != 0;
      if ( !(unsigned int)MiUnlinkPageFromList(v35, 0) )
      {
        MiDiscardTransitionPteEx(v35, 0LL);
        goto LABEL_96;
      }
      v36 = 1;
      *(_QWORD *)(v35 + 24) &= 0xC000000000000000uLL;
    }
    locked = MiAddLockedPageCharge(v35, 0LL);
    v19 = 0LL;
    if ( !locked )
    {
      if ( v36 )
        MiPfnReferenceCountIsZero(v35, (__int64)(v35 + 0x58000000000LL) / 48);
      goto LABEL_96;
    }
    *((_BYTE *)v34 + 33) = 1;
    if ( v34 != BugCheckParameter2 )
      break;
    v34 += 5;
    v35 = *v34;
    v94 = v35;
    if ( !v35 )
      goto LABEL_54;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v38 = v34[1];
  if ( v38 )
  {
    MiUnlockNestedProtoPoolPage(v38, v18, 0LL);
    v19 = 0LL;
    v34[1] = 0LL;
  }
LABEL_54:
  CurrentThread = v92;
LABEL_55:
  *(_DWORD *)(v8 + 192) |= 0x20u;
  v39 = BugCheckParameter2;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[0] + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( BugCheckParameter2[1] )
  {
    MiUnlockProtoPoolPage(BugCheckParameter2[1], 2u);
    v19 = 0LL;
  }
  v40 = a5;
  v41 = 48 * a5 - 0x58000000000LL;
  v95 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v95, v18, v19, v32);
      while ( *(__int64 *)(v41 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) );
    CurrentThread = v92;
  }
  v42 = v101;
  MiInitializeTransitionPfn(v40, v101, -1LL);
  v43 = *(_BYTE *)(v41 + 34) & 0xF8 | 2;
  *(_BYTE *)(v41 + 34) = v43;
  *(_WORD *)(v41 + 32) = 1;
  *(_BYTE *)(v41 + 34) = v43 | 0x20;
  *(_QWORD *)v41 = v8 + 32;
  if ( (v102 & 1) != 0 && *(_BYTE *)(v102 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList(v102 & 0xFFFFFFFFFFFFFFFEuLL);
    *(_DWORD *)(v8 + 192) |= 8u;
  }
  *(_BYTE *)(v41 + 35) ^= (*(_BYTE *)(v41 + 35) ^ (*(_DWORD *)(v8 + 192) >> 9)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v8 + 168) = MI_READ_PTE_LOCK_FREE(v42);
  *(_QWORD *)(v8 + 232) = v42;
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v8 + 192) |= 0x80u;
  v44 = a6;
  *(_QWORD *)(v8 + 272) = 0LL;
  *(_QWORD *)(v8 + 304) = 0LL;
  *(_DWORD *)(v8 + 280) = 56;
  *(_QWORD *)(v8 + 312) = 4096LL;
  *(_QWORD *)(v8 + 320) = v40;
  MiObtainProtoReference(v44, 0LL);
  MiUnlockProtoPoolPage(v44, 2u);
  *(_WORD *)(v8 + 282) |= 0x42u;
  *(_QWORD *)(v8 + 248) = v41;
  *(_QWORD *)(v8 + 208) = Src;
  *(_QWORD *)(v8 + 96) = v93;
  *(_QWORD *)(v8 + 240) = v42;
  *(_QWORD *)(v8 + 200) = 0LL;
  *(_QWORD *)(v8 + 160) = v44;
  v47 = MiReservePtes((__int64)&qword_140C4EF40, v89, v45, v46);
  v51 = (_QWORD *)v47;
  if ( v47 )
  {
    v52 = (__int64)(v47 << 25) >> 16;
    Srca = (void *)(v52 + (v93 & 0xFFF) + 4096);
    ValidPte = MiMakeValidPte(v47, v40, 2684354564LL);
    v54 = 0;
    v55 = 0;
    v56 = ValidPte;
    if ( !(unsigned int)MiPteInShadowRange(v51, v57) )
      goto LABEL_63;
    if ( (unsigned int)MiPteHasShadow(v58, 0x8000000000000000uLL, v59, v60) )
    {
      v55 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
        v82 = (v56 & 1) == 0;
LABEL_116:
        if ( !v82 )
          v56 |= v81;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v82 = (v56 & 1) == 0;
      goto LABEL_116;
    }
LABEL_63:
    *v51 = v56;
    if ( v55 )
      MiWritePteShadow(v51, v56);
    v61 = MiMakeValidPte(v51 + 1, (signed __int64)(BugCheckParameter2[0] + 0x58000000000LL) / 48, 536870913LL);
    if ( (unsigned int)MiPteInShadowRange(v51 + 1, v62) )
    {
      if ( (unsigned int)MiPteHasShadow(v64, v63, v65, v66) )
      {
        v54 = 1;
        if ( HIBYTE(word_140C4E008) != v83 )
          goto LABEL_66;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_66;
      }
      if ( (v61 & 1) != 0 )
        v61 |= 0x8000000000000000uLL;
    }
LABEL_66:
    v51[1] = v61;
    if ( v54 )
      MiWritePteShadow(v51 + 1, v61);
    if ( BugCheckParameter2[5] )
    {
      v67 = MiMakeValidPte(v51 + 2, (signed __int64)(BugCheckParameter2[5] + 0x58000000000LL) / 48, 536870913LL);
      v68 = 0;
      if ( (unsigned int)MiPteInShadowRange(v51 + 2, v69) )
      {
        if ( (unsigned int)MiPteHasShadow(v71, v70, v72, v73) )
        {
          v68 = 1;
          if ( HIBYTE(word_140C4E008) != v84 )
            goto LABEL_70;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_70;
        }
        if ( (v67 & 1) != 0 )
          v67 |= 0x8000000000000000uLL;
      }
LABEL_70:
      v51[2] = v67;
      if ( v68 )
        MiWritePteShadow(v51 + 2, v67);
    }
    if ( v93 + 4096 > v98 )
    {
      v80 = ((_WORD)v98 - (_WORD)v93) & 0xFFF;
      memmove((void *)v52, Srca, ((_WORD)v98 - (_WORD)v93) & 0xFFF);
      memset((void *)(v80 + v52), 0, 4096 - v80);
    }
    else
    {
      KeCopyPage(v52, Srca);
    }
    MiReleasePtes((__int64)&qword_140C4EF40, v51, v89);
    __incgsdword(0x2E98u);
    v44 = a6;
    v74 = 0;
  }
  else
  {
    v74 = -1073741670;
  }
  *(_DWORD *)(v8 + 80) = v74;
  DecayPfn = 0LL;
  if ( LOBYTE(BugCheckParameter2[4]) || LOBYTE(BugCheckParameter2[9]) )
    DecayPfn = MiCreateDecayPfn();
  v76 = BugCheckParameter2[0];
  v94 = BugCheckParameter2[0];
  if ( BugCheckParameter2[0] )
  {
    while ( 2 )
    {
      v100 = MiLockPageInline(v76, v48, v49, SchedulerAssist);
      v77 = v100;
      if ( (unsigned int)MiRemoveLockedPageCharge(v76) )
      {
        if ( DecayPfn && *((_BYTE *)v39 + 32) && (*(_QWORD *)(v76 + 24) & 0x4000000000000000LL) == 0 )
        {
          LOBYTE(SchedulerAssist) = v77;
          MiInsertAndUnlockStandbyPages(DecayPfn, &v94, 1LL, SchedulerAssist);
          v100 = 17;
          goto LABEL_85;
        }
        MiPfnReferenceCountIsZero(v76, (v76 + 0x58000000000LL) / 48);
      }
      if ( v77 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v76 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v78 = v100;
          if ( (unsigned __int8)v100 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v78 = v100;
            v48 = -1LL << (v100 + 1);
            v87 = ~(unsigned __int16)v48;
            v82 = (v87 & SchedulerAssist[5]) == 0;
            v49 = (unsigned int)v87 & SchedulerAssist[5];
            SchedulerAssist[5] = v49;
            if ( v82 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        else
        {
          v78 = v100;
        }
        __writecr8(v78);
      }
LABEL_85:
      if ( v39 != BugCheckParameter2 || (v39 += 5, v76 = *v39, (v94 = v76) == 0) )
      {
        v8 = a1;
        v44 = a6;
        break;
      }
      continue;
    }
  }
  if ( DecayPfn )
    MiDecayPfnFullyInitialized(DecayPfn);
  MiRelockProtoPoolPage(v44, &v100);
  v79 = v100;
  *(_DWORD *)(v8 + 192) &= ~0x20u;
  MiUnlockProtoPoolPage(v44, v79);
  *(_QWORD *)(v8 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(v8 + 32), 0, 0);
  return 1LL;
}
