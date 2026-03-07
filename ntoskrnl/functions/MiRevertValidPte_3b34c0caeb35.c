void __fastcall MiRevertValidPte(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r10
  __int64 v7; // r11
  int v8; // r14d
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  unsigned int v11; // edi
  __int64 v12; // r10
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // eax
  ULONG_PTR v16; // r13
  __int64 v17; // r12
  unsigned __int64 v18; // rdi
  int v19; // r15d
  unsigned __int64 LeafVa; // rbx
  int v21; // eax
  int v22; // eax
  unsigned __int64 v23; // rdi
  __int64 v24; // rbx
  int v25; // r15d
  BOOL v26; // r12d
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r13
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rbx
  unsigned __int8 v33; // dl
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // r10
  __int64 v37; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v39; // rax
  volatile signed __int32 *v40; // rbx
  __int64 v41; // rdi
  int v42; // eax
  __int64 v43; // rbx
  struct _LIST_ENTRY *v44; // r8
  __int64 v45; // rax
  struct _LIST_ENTRY *v46; // r8
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // rcx
  int v50; // [rsp+20h] [rbp-78h]
  int v51; // [rsp+24h] [rbp-74h] BYREF
  __int64 v52; // [rsp+28h] [rbp-70h]
  __int64 v53; // [rsp+30h] [rbp-68h]
  __int64 v54; // [rsp+38h] [rbp-60h]
  __int64 v55; // [rsp+40h] [rbp-58h]
  ULONG_PTR v56; // [rsp+48h] [rbp-50h]
  unsigned int v59; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v60; // [rsp+B8h] [rbp+20h]

  v60 = a4;
  v5 = 0LL;
  v6 = *(unsigned int *)(a1 + 48);
  v50 = 0;
  v7 = a1;
  v8 = a3;
  v9 = a2;
  if ( (v6 & 0xA00000) == 0xA00000 )
  {
    v36 = (v6 >> 19) & 3;
    v11 = MiVadPageIndices[v36];
    v59 = v11;
    if ( v11 <= 1 )
      v50 = 2 - v11;
    v37 = MiVadPageSizes[v36];
    v54 = v37;
    if ( v37 == 16 )
    {
      v12 = 16LL;
      v10 = 1LL;
    }
    else
    {
      v12 = 1LL;
      v10 = v37;
    }
  }
  else
  {
    v10 = 1LL;
    v11 = 3;
    v59 = 3;
    v12 = 1LL;
    v54 = 1LL;
  }
  v52 = v12;
  v13 = *(_QWORD *)a2;
  v55 = *(_QWORD *)a2;
  v14 = a2 << 25 >> 16;
  v53 = v14;
  if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v39 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
        if ( (v39 & 0x20) != 0 )
          v13 |= 0x20uLL;
        if ( (v39 & 0x42) != 0 )
          v13 |= 0x42uLL;
      }
      v14 = v53;
    }
    v55 = v13;
  }
  v15 = a3 & 0x18;
  if ( (v13 & 0x18) == 8 )
  {
    v8 = a3 | 0x18;
    if ( v15 == 24 )
      v8 = a3;
  }
  else if ( (v13 & 0x10) != 0 )
  {
    if ( v15 != 8 )
      v8 = a3 & 0xFFFFFFE7 | 8;
  }
  else if ( (a3 & 0x18) != 0 )
  {
    v8 = a3 & 0xFFFFFFE7;
  }
  if ( a4 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * a4 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    v16 = 0LL;
LABEL_106:
    v56 = v16;
    goto LABEL_11;
  }
  v16 = 48 * a4 - 0x220000000000LL;
  v56 = v16;
  if ( (MiFlags & 0x20000) != 0 && (v8 & 2) != 0 )
  {
    if ( v10 )
    {
      v40 = (volatile signed __int32 *)(v16 + 24);
      v41 = v10;
      do
      {
        v51 = 0;
        while ( _interlockedbittestandset64(v40, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v51);
          while ( *(__int64 *)v40 < 0 );
        }
        if ( !(unsigned int)MiGetPagePrivilege(v16) )
          MiMarkPfnVerified(v16, 7);
        _InterlockedAnd64((volatile signed __int64 *)v40, 0x7FFFFFFFFFFFFFFFuLL);
        v16 += 48LL;
        v40 += 12;
        --v41;
      }
      while ( v41 );
      v9 = a2;
      a4 = v60;
      v14 = v53;
      v12 = v52;
      v7 = a1;
      v11 = v59;
    }
    v16 += -48 * v10;
    goto LABEL_106;
  }
LABEL_11:
  if ( v11 <= 1 )
    v8 |= 0x4000000u;
  v17 = v8 & 0x1F;
  v18 = ((a4 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v17] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v18 = ((a4 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v17] & 0xFFF0000000000E7FuLL | 0x121;
    v19 = v8 & 0x4000000;
  }
  else
  {
    if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v18 = ((a4 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v17] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
      }
      else if ( (v8 & 0x4000000) == 0 )
      {
        v18 = ((a4 & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v17] & 0x7FF0000000000E7FLL | 0x21;
      }
      v42 = MiUserPdeOrAbove(v9);
      v14 = v53;
      v12 = v52;
      v7 = a1;
      if ( v42 )
        v18 |= 4uLL;
    }
    if ( v9 <= 0xFFFFF6BFFFFFFF78uLL )
      v18 |= 4uLL;
    v19 = v8 & 0x4000000;
    if ( (v8 & 0x4000000) != 0 )
      LeafVa = MiGetLeafVa(v14);
    else
      LeafVa = v14;
    if ( LeafVa < 0xFFFF800000000000uLL )
    {
      v21 = HIBYTE(word_140C6697C);
LABEL_22:
      if ( v21 )
        v18 |= 0x100uLL;
      goto LABEL_24;
    }
    if ( (unsigned int)MiGetSystemRegionType(LeafVa) != 1
      && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      if ( LeafVa < qword_140C6A1D8 || (v21 = HIBYTE(word_140C6697C), LeafVa > qword_140C66CF0) )
        v21 = (unsigned __int8)word_140C6697C;
      v7 = a1;
      v12 = v52;
      goto LABEL_22;
    }
    v12 = v52;
    v7 = a1;
  }
LABEL_24:
  if ( v8 < 0 && (v8 & 5) == 4 )
    v18 |= 0x42uLL;
  if ( (v8 & 0x40000000) != 0 )
  {
    v18 &= ~4uLL;
    v22 = v19;
  }
  else
  {
    v22 = v8 & 0x4000000;
  }
  if ( (v8 & 0x20000000) != 0 )
  {
    v18 ^= ((unsigned __int16)v18 ^ (unsigned __int16)((unsigned __int8)word_140C6697C << 8)) & 0x100;
    v22 = v19;
  }
  if ( (v8 & 0x8000000) != 0 )
  {
    v18 &= ~0x100uLL;
    v22 = v19;
  }
  if ( v22 )
    v18 |= 0x80uLL;
  v23 = v18 & 0xFAFFFFFFFFFFFFFFuLL;
  v24 = v23 | 0xA00000000000000LL;
  if ( v16 )
  {
    if ( (MiFlags & 0x1000000) != 0 && (v13 & 0x42) == 0x40 )
      v24 = v23 | 0xA00000000000040LL;
  }
  else
  {
    v43 = 0xA00000000000042LL;
    if ( (v8 & 4) == 0 )
      v43 = 0xA00000000000000LL;
    v24 = v23 | v43;
  }
  v25 = 0;
  v26 = (*(_DWORD *)(v7 + 48) & 0x600000) == 6291456;
  if ( !v12 )
  {
    v32 = a2;
    v31 = v54;
    goto LABEL_50;
  }
  v27 = a2;
  v28 = v60;
  do
  {
    if ( v26 && (MI_READ_PTE_LOCK_FREE(v27) & 0x42) != 0 )
    {
      v35 = MiGetLeafVa(v27);
      MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v35, (__int64 **)a1);
      v26 = 0;
    }
    v24 ^= (v24 ^ (v28 << 12)) & 0xFFFFFFFFFF000LL;
    if ( !v25 )
    {
      if ( (MiFlags & 0x300) == 0 )
        goto LABEL_40;
      v34 = *(_QWORD *)v27;
      if ( v27 >= 0xFFFFF6FB7DBED000uLL
        && v27 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v34 & 1) != 0
        && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
      {
        v44 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v44 )
        {
          v45 = *((_QWORD *)&v44->Flink + ((v27 >> 3) & 0x1FF));
          if ( (v45 & 0x20) != 0 )
            v34 |= 0x20uLL;
          if ( (v45 & 0x42) != 0 )
            v34 |= 0x42uLL;
        }
      }
      if ( (v34 & 0x40) != 0 && (v24 & 0x40) == 0 || (v34 & 2) != 0 && (v24 & 2) == 0 || v24 < 0 && v34 >= 0 )
LABEL_40:
        v25 = 1;
    }
    ++v28;
    if ( v59 <= 1 )
    {
      MiRewritePteWithLockBit(
        &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
        v27,
        v24,
        0x7000000000000000LL);
    }
    else
    {
      v29 = *(_QWORD *)v27;
      if ( v27 >= 0xFFFFF6FB7DBED000uLL
        && v27 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v46 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v46 )
        {
          v47 = *((_QWORD *)&v46->Flink + ((v27 >> 3) & 0x1FF));
          if ( (v47 & 0x20) != 0 )
            v29 |= 0x20uLL;
          if ( (v47 & 0x42) != 0 )
            v29 |= 0x42uLL;
        }
      }
      v30 = v24 ^ (v24 ^ v29) & 0xF00000000000000LL ^ (v29 ^ v24 ^ (v24 ^ v29) & 0xF00000000000000LL) & 0x7000000000000000LL;
      if ( !MiPteInShadowRange(v27) )
        goto LABEL_44;
      if ( !MiPteHasShadow() )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v30 & 1) != 0 )
        {
          v30 |= 0x8000000000000000uLL;
        }
LABEL_44:
        *(_QWORD *)v27 = v30;
        goto LABEL_45;
      }
      if ( !HIBYTE(word_140C6697C) && (v30 & 1) != 0 )
        v30 |= 0x8000000000000000uLL;
      *(_QWORD *)v27 = v30;
      MiWritePteShadow(v27, v30, v48);
    }
LABEL_45:
    v27 += 8LL;
    --v52;
  }
  while ( v52 );
  LOBYTE(v13) = v55;
  v16 = v56;
  if ( !v25 )
  {
    v31 = v54;
    goto LABEL_48;
  }
  if ( v50 )
  {
    v32 = a2;
    MiInsertLargeTbFlushEntry(a5, v50, a2);
    v31 = v54;
  }
  else
  {
    v31 = v54;
    MiInsertTbFlushEntry(a5, v53, v54);
LABEL_48:
    v32 = a2;
  }
  v7 = a1;
LABEL_50:
  if ( v31 == 1
    && (v13 & 0x42) != 0
    && v16
    && ((*(_DWORD *)(v7 + 48) & 0x70) != 0x40 || (unsigned int)MiRotatedToFrameBuffer(v32)) )
  {
    v59 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v59);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    v33 = *(_BYTE *)(v16 + 34);
    if ( (v33 & 0x10) != 0 )
      goto LABEL_67;
    if ( (!_bittest64((const signed __int64 *)(v16 + 16), 0xAu) & (unsigned __int8)~(v33 >> 3)) != 0 )
      v5 = MiCapturePageFileInfoInline((unsigned __int64 *)(v16 + 16), 1, 0);
    *(_BYTE *)(v16 + 34) |= 0x10u;
    if ( v5 )
    {
      v49 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiReleasePageFileInfo(v49, v5, 1);
    }
    else
    {
LABEL_67:
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
}
