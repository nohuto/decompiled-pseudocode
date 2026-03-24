/*
 * XREFs of MiWsleFlush @ 0x1402A7B80
 * Callers:
 *     MiFreeWsleList @ 0x1402A79B0 (MiFreeWsleList.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiReservePageFileSpace @ 0x14023CB00 (MiReservePageFileSpace.c)
 *     MI_IS_RESET_PTE @ 0x14023D690 (MI_IS_RESET_PTE.c)
 *     MiLocateCloneAddress @ 0x14023E878 (MiLocateCloneAddress.c)
 *     MiGetWsleProtection @ 0x140240D70 (MiGetWsleProtection.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14025A9BC (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetWorkingSetSwapSupport @ 0x140263DB0 (MiGetWorkingSetSwapSupport.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileSpace @ 0x1402837D4 (MiReleasePageFileSpace.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14028CECC (MiUnlockNestedPageTableWritePte.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiLockedPageTableHasActiveLargeEntries @ 0x14031C40C (MiLockedPageTableHasActiveLargeEntries.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

unsigned __int64 __fastcall MiWsleFlush(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // r11
  int v6; // r14d
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  struct _LIST_ENTRY *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // r13
  char v19; // al
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r11
  int v24; // edi
  int v25; // eax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  __int64 v28; // r11
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _LIST_ENTRY *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int8 v38; // dl
  unsigned __int64 v39; // rdi
  int WsleProtection; // eax
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v46; // rcx
  char *AnyMultiplexedVm; // rax
  __int64 v49; // r11
  __int64 v50; // rdi
  unsigned __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rdx
  struct _LIST_ENTRY *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rdx
  volatile __int64 v62; // rdx
  char v63; // r11
  __int64 v64; // rdx
  __int64 v65; // r10
  __int64 v66; // rcx
  __int64 v67; // r9
  __int64 v68; // rdx
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // r8
  struct _LIST_ENTRY *v71; // rax
  __int64 v72; // rax
  __int64 v73; // r8
  unsigned __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  int v77; // [rsp+20h] [rbp-58h] BYREF
  __int64 v78; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v79; // [rsp+30h] [rbp-48h]
  unsigned __int64 v82; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0xFFFFF6FB7DBED000uLL;
  v9 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFF6FB7DBED000uLL, a2)
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
      v12 = v9 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = v9;
      v9 = v12;
      if ( (v11 & 0x42) != 0 )
        v9 = v12 | 0x42;
    }
  }
  v78 = v9;
  if ( (unsigned __int64)&v78 >= v8 && (unsigned __int64)&v78 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( !(unsigned int)MiPteHasShadow(&v78, v9, v8, v4) || (v9 & 1) == 0 || (v9 & 0x20) != 0 && (v9 & 0x42) != 0 )
      goto LABEL_24;
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v78 >> 3) & 0x1FF));
      v13 = v9 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v13 = v9;
      if ( (v15 & 0x42) != 0 )
        v13 |= 0x42uLL;
      goto LABEL_24;
    }
  }
  v13 = v9;
LABEL_24:
  v16 = (v13 >> 12) & 0xFFFFFFFFFLL;
  v17 = 48 * v16 - 0x58000000000LL;
  if ( (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && !(unsigned int)MI_PFN_IS_PROTO(48 * v16 - 0x58000000000LL) )
    return 0LL;
  if ( (*(_BYTE *)(v5 + 184) & 7) == 0 )
  {
    v18 = 0LL;
    goto LABEL_33;
  }
  if ( *(_WORD *)(v17 + 32) > 1u )
    return 0LL;
  v77 = 0;
  v18 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v77, v16, v8, v4);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
    v5 = a1;
  }
LABEL_33:
  if ( (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && !(unsigned int)MI_PFN_IS_PROTO(v17)
    || (v19 = *(_BYTE *)(v5 + 184) & 7) != 0 && *(_WORD *)(v17 + 32) > 1u )
  {
LABEL_74:
    if ( v18 )
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v20 = v9 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( !v19
    && !(unsigned int)MI_PFN_IS_PROTO(v17)
    && v7 <= v21 - 0x98000000000LL
    && v7 >= 0xFFFFF68000000000uLL
    && (v9 & 0x42) != 0
    && (*(_DWORD *)(v23 - 540) & 0x8000) != 0 )
  {
    MiCaptureWriteWatchDirtyBit(v23 - 1664, v22, 0LL);
  }
  v24 = 0;
  v25 = MI_PFN_IS_PROTO(v17);
  v29 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( v25 )
  {
    v30 = *(_QWORD *)v7;
    LODWORD(v79) = v7;
    if ( (unsigned int)MiPteInShadowRange(v7, 0xFFFFF6FFFFFFFFFFuLL)
      && (unsigned int)MiPteHasShadow(v32, v31, v33, v34)
      && (v30 & 1) != 0
      && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
    {
      v35 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v35 )
      {
        v36 = v30 | 0x20;
        v37 = *((_QWORD *)&v35->Flink + ((v79 >> 3) & 0x1FF));
        if ( (v37 & 0x20) == 0 )
          v36 = v30;
        v30 = v36;
        if ( (v37 & 0x42) != 0 )
          v30 = v36 | 0x42;
      }
    }
    v38 = HIBYTE(v30) & 0xF | (16 * ((v30 >> 60) & 7));
    v39 = a2;
    WsleProtection = MiGetWsleProtection(a2, v38);
    if ( WsleProtection )
    {
      v78 = MiSwizzleInvalidPte(32 * (WsleProtection & 0x1F | 0xFFFFFFFFF8000020uLL));
    }
    else
    {
      v42 = MiSwizzleInvalidPte(((*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL) << 16) | 0x400);
      v41 = v42;
      v78 = v42;
      v44 = v42;
      if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 && (v9 & 0xA00) == 0 && v9 < 0 )
      {
        v41 = v42 | 8;
        v78 = v42 | 8;
        v44 = v42 | 8;
      }
      if ( (*(_QWORD *)(v17 + 40) & 0x1000000000LL) != 0 || v43 <= 0 )
      {
        if ( (a3 & 2) != 0 )
        {
          if ( *(_QWORD *)(a1 - 400) )
          {
            CloneAddress = MiLocateCloneAddress(a1 - 1664, v27);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v46 + 1680) + 360LL) > CloneAddress[12] )
              {
                v41 |= 8uLL;
                v78 = v41;
              }
            }
          }
        }
      }
      else
      {
        v78 = v44 | 0x800;
      }
    }
    goto LABEL_109;
  }
  if ( a2 >= v26 && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v24 = 1;
    MiLockPageTableInternal(v28, v7, 0LL);
    if ( (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiLockedPageTableHasActiveLargeEntries(a2) )
    {
      MiUnlockPageTableInternal(a1, v7);
      goto LABEL_74;
    }
  }
  if ( ((*(_QWORD *)(v17 + 40) >> 60) & 7) == 4 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    v49 = a1;
    if ( (char *)a1 == AnyMultiplexedVm )
    {
      MiReleasePageFileSpace((__int64)&MiSystemPartition, *(_QWORD *)(v17 + 16), 1LL);
      v82 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v50 = MI_READ_PTE_LOCK_FREE(v82) | 2;
      v20 |= 4uLL;
      v78 = v50;
      v51 = v50;
      v6 = 1;
      if ( (unsigned int)MiPteInShadowRange(v7, v52) )
      {
        if ( (unsigned int)MiPteHasShadow(v54, v53, v55, v56) )
        {
          v57 = v50;
          if ( !HIBYTE(word_140C4E008) && (v50 & 1) != 0 )
            v57 = v50 | 0x8000000000000000uLL;
          *(_QWORD *)v7 = v57;
          MiWritePteShadow(v7, v57);
          goto LABEL_89;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v50 & 1) != 0 )
        {
          v51 = v50 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v7 = v51;
LABEL_89:
      MiInsertTbFlushEntry(a4, v82, 1LL, 0LL);
      MiFlushTbList(a4);
      goto LABEL_136;
    }
  }
  else
  {
    v49 = a1;
  }
  if ( (unsigned __int64)&v78 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v78 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v78, v29, v26, v27)
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v58 )
    {
      v59 = *((_QWORD *)&v58->Flink + (((unsigned __int64)&v78 >> 3) & 0x1FF));
      v60 = v9 | 0x20;
      if ( (v59 & 0x20) == 0 )
        v60 = v9;
      v9 = v60;
      if ( (v59 & 0x42) != 0 )
        v9 = v60 | 0x42;
    }
  }
  v41 = v9 & 0xFFFFFFFFF000LL | (32 * ((*(_DWORD *)(v17 + 16) >> 5) & 0x1F | 0x40LL));
  if ( qword_140C4DF40 )
  {
    if ( (qword_140C4DF40 & v41) != 0 )
      v41 |= 0x10uLL;
    else
      v41 |= qword_140C4DF40;
  }
  v78 = v41;
  if ( v24 )
  {
    MiUnlockNestedPageTableWritePte(v49, (volatile __int64 *)v7, v41, 0);
    v61 = a2 & 0xFFFFFFFFFFFFF000uLL;
LABEL_135:
    MiInsertTbFlushEntry(a4, v61, 1LL, 0LL);
    goto LABEL_136;
  }
  v39 = a2;
LABEL_109:
  v62 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v62, v41, v27) )
  {
    LOBYTE(v62) = v62 | 0x20;
  }
  if ( (MiFlags & 0x800) != 0 )
  {
    LOBYTE(v62) = 32;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v62 & 0x20) != 0 )
  {
    v64 = v78;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v78, v41, v27) )
      {
        if ( !HIBYTE(word_140C4E008) && (v64 & 1) != 0 )
          v64 |= v65;
        *(_QWORD *)v7 = v64;
        MiWritePteShadow(v7, v64);
        goto LABEL_134;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v64 & 1) != 0 )
      {
        v64 |= v65;
      }
    }
    *(_QWORD *)v7 = v64;
LABEL_134:
    v61 = v39 & 0xFFFFFFFFFFFFF000uLL;
    goto LABEL_135;
  }
  v63 = _InterlockedExchange64((volatile __int64 *)v7, v78);
  if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v7, v78);
  if ( (v63 & 0x20) != 0 )
    goto LABEL_134;
LABEL_136:
  if ( v18 )
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 == 1 || (unsigned int)MI_PFN_IS_PROTO(v17) )
    return v20;
  v68 = *(_QWORD *)(v17 + 16);
  v69 = v17 + 16;
  if ( (unsigned __int64)(v17 + 16) >= 0xFFFFF6FB7DBED000uLL
    && v69 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v66, v68, v69, v67) )
  {
    if ( (v68 & 1) == 0 )
      goto LABEL_152;
    if ( (v68 & 0x20) == 0 || (v68 & 0x42) == 0 )
    {
      v71 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v71 )
      {
        v72 = *((_QWORD *)&v71->Flink + ((v70 >> 3) & 0x1FF));
        v73 = v68 | 0x20;
        if ( (v72 & 0x20) == 0 )
          v73 = v68;
        v68 = v73;
        if ( (v72 & 0x42) != 0 )
          v68 = v73 | 0x42;
      }
    }
  }
  if ( (v68 & 1) == 0 )
  {
LABEL_152:
    if ( (!v68 || !qword_140C4DF40 || (v68 & qword_140C4DF40) != 0)
      && *(_DWORD *)(*(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v17 + 40) >> 39) & 0x3FFLL)) + 1036LL)
      && (v68 & 2) == 0
      && !MiGetWorkingSetSwapSupport(a1)
      && (!MI_IS_RESET_PTE(v74) || (*(_BYTE *)(v17 + 34) & 0x10) != 0 || (*(_BYTE *)v7 & 0x42) != 0)
      && v7 <= 0xFFFFF6BFFFFFFF78uLL
      && v7 >= 0xFFFFF68000000000uLL )
    {
      MiReservePageFileSpace(v76, v7, v75);
    }
  }
  return v20;
}
