/*
 * XREFs of MiWsleFree @ 0x1402A8560
 * Callers:
 *     MiFreeWsleList @ 0x1402A79B0 (MiFreeWsleList.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140218590 (MiGetPfnPriority.c)
 *     MiGetUltraMapping @ 0x140234070 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetContainingPageTable @ 0x14023DDC0 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x140290190 (MiCaptureDirtyBitToPfn.c)
 *     MiPfnShareCountIsZero @ 0x1402A6820 (MiPfnShareCountIsZero.c)
 *     MiGetPagePrivilege @ 0x1402A8D80 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiCapturePageFileInfoInline @ 0x1402FB540 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140332EB8 (MiRewriteTrimPteAsDemandZero.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F3FB4 (MiBadShareCount.c)
 */

__int64 MiWsleFree(__int64 a1, unsigned __int64 a2, char a3, ...)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  char v9; // r12
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  int v15; // ebp
  volatile signed __int32 *v16; // rsi
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // eax
  __int64 ValidPte; // rax
  unsigned __int64 v22; // rcx
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v24; // rbx
  unsigned __int64 *MmInternal; // rdi
  unsigned __int64 UltraMapping; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r11
  __int64 *v29; // r8
  _QWORD *v30; // rbx
  _QWORD *v31; // rdi
  char v32; // bl
  __int64 v33; // rdi
  __int64 v34; // rbp
  unsigned __int64 *v35; // r15
  unsigned __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct _LIST_ENTRY *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 ContainingPageTable; // rax
  char v53; // cl
  __int64 v54; // r15
  __int64 v55; // r11
  char v56; // cl
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  char v60; // al
  int v62; // [rsp+20h] [rbp-68h] BYREF
  int v63; // [rsp+24h] [rbp-64h] BYREF
  int v64; // [rsp+28h] [rbp-60h] BYREF
  __int64 v65; // [rsp+30h] [rbp-58h]
  _QWORD v66[10]; // [rsp+38h] [rbp-50h] BYREF
  int v68; // [rsp+98h] [rbp+10h]
  unsigned __int16 v70; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v71; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  va_list va1; // [rsp+B0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v71 = va_arg(va1, _QWORD);
  v3 = v71;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64 *)va) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    v9 = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  else
    v9 = (*(_BYTE *)v8 >> 1) & 7;
  v10 = MI_PFN_IS_PROTO(v8);
  v68 = v10;
  if ( (a3 & 4) != 0 )
    goto LABEL_15;
  if ( v10 )
  {
    v11 = 0x1000000000LL;
    if ( (*(_QWORD *)(v8 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v8 + 8) > 0
      || (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
    {
      goto LABEL_15;
    }
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
      goto LABEL_15;
    if ( (MiGetPagePrivilege(v8) & 0xFFFFFFFD) != 0 )
      goto LABEL_15;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v8) )
    {
      v11 = 0xFFFFF68000000000uLL;
      v14 = (__int64)(v7 << 25) >> 16;
      if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_15;
    }
  }
  if ( *(_WORD *)(v8 + 32) != 1 || (*(_BYTE *)(v8 + 34) & 0xC0) != 0x40 || (v15 = 1, (*(_BYTE *)(v8 + 35) & 0x40) != 0) )
LABEL_15:
    v15 = 0;
  v16 = (volatile signed __int32 *)(v8 + 24);
  v62 = 0;
  while ( _interlockedbittestandset64(v16, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v62, v11, v12, v13);
    while ( *(__int64 *)v16 < 0 );
  }
  v17 = 0x2AAAAAAAAAAAAAABLL;
  if ( v15 )
  {
    if ( (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v8 + 32) != 1 )
      goto LABEL_52;
    v18 = 4;
    v19 = (__int64)(v8 + 0x58000000000LL) / 48;
    v20 = *(unsigned __int8 *)(48 * v19 - 0x58000000000LL + 34) >> 6;
    if ( !v20 || v20 == 3 )
    {
      v18 = 12;
    }
    else if ( v20 == 2 )
    {
      v18 = 28;
    }
    ValidPte = MiMakeValidPte(0LL, v19, v18 | 0xA0000000);
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = ValidPte;
    MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
    if ( MmInternal )
    {
      UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0);
      v27 = 0xFFFFF68000000000uLL;
      v28 = UltraMapping;
      v22 = 0xFFFFF68000000000uLL;
      v29 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MmInternal[1543] = (unsigned __int64)v29;
      if ( UltraMapping )
      {
LABEL_36:
        if ( (unsigned __int64)v29 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v29 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v22, 0xFFFFF68000000000uLL, v29, 0x7FFFFFFFF8LL) )
          {
            if ( !HIBYTE(word_140C4E008) && (v24 & 1) != 0 )
              v24 |= 0x8000000000000000uLL;
            *v29 = v24;
            MiWritePteShadow(v29, v24);
LABEL_47:
            v30 = (_QWORD *)v28;
            v31 = (_QWORD *)(v28 + 4088);
            do
            {
              if ( *v30 | *v31 )
                break;
              ++v30;
              --v31;
            }
            while ( v30 <= v31 );
            LOBYTE(v27) = 17;
            MiUnmapPageInHyperSpaceWorker(v28, v27, 0x80000000LL);
            if ( v30 > v31 )
            {
              MiRewriteTrimPteAsDemandZero(a1, v8);
              goto LABEL_53;
            }
LABEL_52:
            v15 = 0;
            goto LABEL_53;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v24 & 1) != 0 )
          {
            v24 |= 0x8000000000000000uLL;
          }
        }
        *v29 = v24;
        goto LABEL_47;
      }
    }
    else
    {
      v27 = 0xFFFFF68000000000uLL;
    }
    v28 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
        + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v29 = (__int64 *)(((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    goto LABEL_36;
  }
LABEL_53:
  v32 = v71;
  v33 = 0LL;
  v65 = 0LL;
  if ( v15 || (v71 & 4) != 0 )
  {
    ContainingPageTable = MiGetContainingPageTable(v7);
    v53 = *(_BYTE *)(v8 + 34);
    v54 = ContainingPageTable;
    *(_QWORD *)(v8 + 40) &= v55;
    *(_BYTE *)(v8 + 34) = v53 & 0xC7;
    v56 = *(_BYTE *)(v8 + 35);
    *(_QWORD *)v16 &= 0xC000000000000000uLL;
    *(_BYTE *)(v8 + 35) = v56 & 0xDF;
    *(_WORD *)(v8 + 32) = 0;
    v33 = MiCapturePageFileInfoInline(v8 + 16, 0LL, 0LL);
    if ( v33 )
      v34 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
    else
      v34 = v65;
    MiInsertPageInFreeOrZeroedList((__int64)(v8 + 0x58000000000LL) / 48, ((v32 & 4) != 0) + 1);
    _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
    v64 = 0;
    v16 = (volatile signed __int32 *)(48 * v54 - 0x58000000000LL + 24);
    while ( _interlockedbittestandset64(v16, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v64, v57, v58, v59);
      while ( *(__int64 *)v16 < 0 );
    }
    MiDecrementShareCount(48 * v54 - 0x58000000000LL);
  }
  else
  {
    if ( (v71 & 0x42) != 0 )
    {
      v33 = MiCaptureDirtyBitToPfn(v8);
      if ( v33 )
        v34 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
      else
        v34 = 0LL;
    }
    else
    {
      v34 = 0LL;
    }
    if ( v68 )
    {
      v35 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v36 = *v35;
      if ( (unsigned int)MiPteInShadowRange(v35, v17)
        && (unsigned int)MiPteHasShadow(v38, v37, v39, v40)
        && (v36 & 1) != 0
        && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
      {
        v37 = (v7 >> 9) & 0xFFFFFFF8;
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v42 = *((_QWORD *)&Flink->Flink + ((((v7 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
          v37 = v36 | 0x20;
          if ( (v42 & 0x20) == 0 )
            v37 = v36;
          v36 = v37;
          if ( (v42 & 0x42) != 0 )
            v36 = v37 | 0x42;
        }
      }
      v66[0] = v36;
      if ( (unsigned int)MiPteInShadowRange(v66, v37)
        && (unsigned int)MiPteHasShadow(v44, v43, v12, v13)
        && (v36 & 1) != 0
        && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
      {
        v45 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v45 )
        {
          v46 = *((_QWORD *)&v45->Flink + (((unsigned __int64)v66 >> 3) & 0x1FF));
          v47 = v36 | 0x20;
          if ( (v46 & 0x20) == 0 )
            v47 = v36;
          v36 = v47;
          if ( (v46 & 0x42) != 0 )
            v36 = v47 | 0x42;
        }
      }
      v48 = (v36 >> 12) & 0xFFFFFFFFFLL;
    }
    else
    {
      v48 = -1LL;
    }
    if ( (a3 & 1) != 0
      && (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) == 1
      && *(_WORD *)(v8 + 32) == 1
      && (*(_BYTE *)(v8 + 34) & 0x10) == 0
      && (unsigned int)MiGetPfnPriority(v8) == 5 )
    {
      *(_BYTE *)(v8 + 35) = *(_BYTE *)(v8 + 35) & 0xF8 | 4;
    }
    if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
      MiBadShareCount(v8);
    v49 = (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)v16 ^= (*(_QWORD *)v16 ^ v49) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v49 )
      MiPfnShareCountIsZero(v8, 0LL);
    if ( v48 != -1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
      v50 = 48 * v48 - 0x58000000000LL;
      v63 = 0;
      v16 = (volatile signed __int32 *)(v50 + 24);
      while ( _interlockedbittestandset64(v16, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v63, v49, v12, v13);
        while ( *(__int64 *)v16 < 0 );
      }
      if ( (*(_BYTE *)(v50 + 34) & 7) != 6 )
        MiBadShareCount(v50);
      v51 = (*(_QWORD *)v16 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)v16 ^= (*(_QWORD *)v16 ^ v51) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v51 )
        MiPfnShareCountIsZero(v50, 0LL);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v33 )
    MiReleasePageFileInfo(v34, v33, 1LL);
  v60 = 1;
  LOBYTE(v70) = v9;
  if ( !v68 )
    v60 = 3;
  HIBYTE(v70) = v60;
  return v70;
}
