/*
 * XREFs of MiOutPageSingleKernelStack @ 0x1402638B0
 * Callers:
 *     <none>
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLockAndDecrementShareCount @ 0x140263D30 (MiLockAndDecrementShareCount.c)
 *     MiGetWorkingSetSwapSupport @ 0x140263DB0 (MiGetWorkingSetSwapSupport.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1402AF040 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiOutSwapKernelStackPage @ 0x140350ED0 (MiOutSwapKernelStackPage.c)
 *     MiCreateKernelStackNode @ 0x140535C88 (MiCreateKernelStackNode.c)
 */

__int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 WorkingSetSwapSupport; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // rsi
  int v22; // edi
  unsigned __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rbp
  char v26; // di
  int v27; // r15d
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rsi
  unsigned __int64 v35; // r13
  _BYTE *v36; // r14
  __int64 v37; // r15
  unsigned int v38; // r12d
  unsigned __int64 v39; // rbx
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rbp
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // r8d
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rbx
  __int64 result; // rax
  __int64 v56; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  bool v58; // zf
  struct _LIST_ENTRY *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r9
  int v63; // r10d
  __int64 v64; // rdx
  unsigned __int8 v65; // r8
  int v66; // r11d
  int v67; // r11d
  __int64 TransitionPte; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v69; // [rsp+28h] [rbp-A0h]
  int v70; // [rsp+30h] [rbp-98h] BYREF
  __int64 v71; // [rsp+38h] [rbp-90h]
  __int64 v72; // [rsp+40h] [rbp-88h]
  __int64 v73; // [rsp+48h] [rbp-80h]
  unsigned __int64 v74; // [rsp+50h] [rbp-78h]
  __int64 v75; // [rsp+58h] [rbp-70h]
  __int64 AnyMultiplexedVm; // [rsp+60h] [rbp-68h]
  __int64 v77; // [rsp+68h] [rbp-60h]
  __int64 v78; // [rsp+70h] [rbp-58h]
  unsigned __int8 v79; // [rsp+D0h] [rbp+8h]
  int v80; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v82; // [rsp+E8h] [rbp+20h] BYREF

  v5 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a2[2] - 8LL;
  v82 = v5;
  v78 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v72 = v78 << 25 >> 16;
  v7 = (_QWORD *)v78;
  v71 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v73 = (unsigned int)((__int64)(v5 - v78) >> 3) + 1;
  v77 = MiSwizzleInvalidPte(992LL);
  WorkingSetSwapSupport = 0LL;
  v12 = *(_QWORD *)(a1 + 544);
  v13 = *(unsigned __int16 *)(v12 + 1838);
  v14 = v12 + 1664;
  v15 = *(_QWORD *)(qword_140C4E648 + 8 * v13);
  if ( (ULONG_PTR *)v15 != &MiSystemPartition )
  {
    result = MiCreateKernelStackNode(*(_QWORD *)(qword_140C4E648 + 8 * v13), a2);
    if ( !result )
      return result;
    v8 = v71;
    v9 = 0x7FFFFFFFF8LL;
    v10 = 0xFFFFF68000000000uLL;
  }
  v75 = v9 & (v8 >> 9);
  v74 = v9 & (v5 >> 9);
  v69 = v75 + v10;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4LL);
  v79 = MiLockWorkingSetShared(AnyMultiplexedVm, v16, v17, v18);
  MiLockPageTableInternal(AnyMultiplexedVm, v69, 0LL);
  if ( v75 != v74 )
    MiLockPageTableInternal(AnyMultiplexedVm, v69 + 8, 0LL);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v14) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v56);
  }
  v20 = MiPteInShadowRange(&TransitionPte, v19);
  v21 = v82;
  v22 = v20;
  v80 = v20;
  do
  {
    TransitionPte = MI_READ_PTE_LOCK_FREE(v7);
    v23 = TransitionPte;
    if ( v22
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (TransitionPte & 1) != 0
      && ((TransitionPte & 0x20) == 0 || (TransitionPte & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF)) & 0x20) != 0 )
          v23 = TransitionPte | 0x20;
      }
    }
    v24 = (v23 >> 12) & 0xFFFFFFFFFLL;
    v25 = 48 * v24 - 0x58000000000LL;
    if ( WorkingSetSwapSupport )
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v15, v7);
    TransitionPte = MiMakeTransitionPte(v24, 31LL);
    v26 = TransitionPte;
    v27 = 0;
    v28 = TransitionPte;
    if ( (unsigned int)MiPteInShadowRange(v7, v29) )
    {
      if ( (unsigned int)MiPteHasShadow(v31, v30, v32, v33) )
      {
        v27 = 1;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_10;
        v58 = (v26 & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_10;
        v58 = (v26 & 1) == 0;
      }
      if ( !v58 )
        v28 |= 0x8000000000000000uLL;
    }
LABEL_10:
    *v7 = v28;
    if ( v27 )
      MiWritePteShadow(v7, v28);
    MiLockAndDecrementShareCount(v25, 0LL);
    v22 = v80;
    ++v7;
  }
  while ( (unsigned __int64)v7 <= v21 );
  v34 = v77;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 1136));
  v35 = v71;
  v36 = (_BYTE *)(v78 - 8);
  v37 = v72;
  v38 = v73;
  if ( v78 - 8 >= (unsigned __int64)v71 )
  {
    do
    {
      if ( (*v36 & 1) == 0 )
        break;
      v39 = MI_READ_PTE_LOCK_FREE(v36);
      TransitionPte = v39;
      if ( v80
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v39 & 1) != 0
        && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
      {
        v59 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v59 )
        {
          if ( ((__int64)*(&v59->Flink + (((unsigned __int64)&TransitionPte >> 3) & 0x1FF)) & 0x20) != 0 )
            v39 |= 0x20uLL;
        }
      }
      v41 = 0xFFFFFFFFFLL;
      v42 = (v39 >> 12) & 0xFFFFFFFFFLL;
      v43 = 0xFFFFFA8000000000uLL;
      v44 = 48 * v42 - 0x58000000000LL;
      v45 = 48 * (*(_QWORD *)(v44 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      LODWORD(v82) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v82, v43, v41, v40);
        while ( *(__int64 *)(v44 + 24) < 0 );
      }
      v46 = MiPteInShadowRange(v36, v43);
      if ( *(_WORD *)(v44 + 32) != 1 )
      {
        v60 = MiMakeTransitionPte(v42, 31LL);
        v63 = 0;
        TransitionPte = v60;
        v64 = v60;
        if ( !(_DWORD)v62 )
          goto LABEL_73;
        if ( (unsigned int)MiPteHasShadow(v61, v60, v60, v62) )
        {
          v63 = v66;
          if ( HIBYTE(word_140C4E008) )
          {
LABEL_73:
            *(_QWORD *)v36 = v64;
            if ( v63 )
              MiWritePteShadow(v36, v64);
            goto LABEL_25;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_73;
        }
        if ( (v65 & (unsigned __int8)v66) != 0 )
          v64 |= 0x8000000000000000uLL;
        goto LABEL_73;
      }
      v48 = 0;
      v49 = v34;
      if ( v46 )
      {
        if ( (unsigned int)MiPteHasShadow(v47, v34, 0LL, v46) )
        {
          v48 = v67;
          if ( !HIBYTE(word_140C4E008) )
            goto LABEL_79;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_79:
          if ( ((unsigned __int8)v34 & (unsigned __int8)v67) != 0 )
            v49 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v36 = v49;
      if ( v48 )
        MiWritePteShadow(v36, v49);
      *(_QWORD *)(v44 + 24) |= 0x4000000000000000uLL;
      *(_QWORD *)(v44 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
LABEL_25:
      v50 = MiDecrementShareCount(48 * v42 - 0x58000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v50 != 3 )
      {
        v70 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v70, v51, v52, v53);
          while ( *(__int64 *)(v45 + 24) < 0 );
        }
        MiDecrementShareCount(v45);
        _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v37 -= 4096LL;
      ++v38;
      v36 -= 8;
    }
    while ( (unsigned __int64)v36 >= v35 );
  }
  v54 = AnyMultiplexedVm;
  if ( v75 != v74 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v69 + 8);
  MiUnlockPageTableInternal(v54, v69);
  MiUnlockWorkingSetShared(v54, v79);
  return MiInsertTbFlushEntry(a3, v37, v38, 0LL);
}
