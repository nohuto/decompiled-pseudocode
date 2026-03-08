/*
 * XREFs of MiReplacePageTablePage @ 0x14039164C
 * Callers:
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x1403D1884 (MmStealTopLevelPage.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiIsPdeOrAboveAccessible @ 0x1402E21F4 (MiIsPdeOrAboveAccessible.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     MiMakeProtectionPfnCompatible @ 0x14034A974 (MiMakeProtectionPfnCompatible.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

unsigned __int64 __fastcall MiReplacePageTablePage(unsigned __int64 a1)
{
  __int64 v2; // r12
  int v3; // r15d
  unsigned __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // esi
  int v9; // r10d
  unsigned __int64 LeafVa; // r9
  unsigned __int64 v11; // r11
  unsigned __int64 *v12; // rcx
  __int64 *v13; // r12
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  __int64 v24; // rsi
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rbx
  int v27; // r15d
  unsigned __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rbx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  int SystemRegionType; // eax
  bool v40; // zf
  unsigned __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned int v48; // r11d
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  int v51; // [rsp+20h] [rbp-E0h]
  int v52; // [rsp+24h] [rbp-DCh]
  int v53; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+30h] [rbp-D0h] BYREF
  int v55; // [rsp+38h] [rbp-C8h]
  int v56; // [rsp+3Ch] [rbp-C4h]
  BOOL v57; // [rsp+40h] [rbp-C0h]
  __int64 v58; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v59; // [rsp+50h] [rbp-B0h]
  int v60; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v61; // [rsp+60h] [rbp-A0h]
  __int64 v62; // [rsp+68h] [rbp-98h]
  unsigned __int64 UltraMapping; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h]
  __int64 *v65; // [rsp+80h] [rbp-80h]
  __int64 v66; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v67[24]; // [rsp+90h] [rbp-70h] BYREF

  v59 = a1;
  memset(v67, 0, 0xB8uLL);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v2;
  v6 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 56) = -1073741823;
  v61 = v4;
  v58 = v2;
  v62 = v6;
  v7 = 48 * v2 - 0x220000000000LL;
  v8 = *(_DWORD *)(a1 + 60);
  v64 = 48 * v6 - 0x220000000000LL;
  v55 = 0;
  v52 = 0;
  v51 = 0;
  v56 = 0;
  if ( v8 == 1 )
  {
    v38 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 1928LL);
    if ( !v38 )
      return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v64 + 16));
    v66 = MI_READ_PTE_LOCK_FREE(((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v66) >> 12) & 0xFFFFFFFFFFLL) != v2 )
      return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v64 + 16));
  }
  v9 = 1;
  if ( (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFLL) == v2 )
  {
    v53 = 1;
    if ( v8 == 1 )
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 12;
  }
  else
  {
    v53 = 0;
    LeafVa = MiGetLeafVa(v4);
    if ( LeafVa > 0x7FFFFFFEFFFFLL
      && (LeafVa < qword_140C6A1D8 || LeafVa > qword_140C66CF0)
      && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > v11) )
    {
      SystemRegionType = MiGetSystemRegionType(LeafVa);
      v9 = 0;
      if ( SystemRegionType == 1 )
        v9 = 2;
    }
  }
  v67[2] = 0LL;
  v67[3] = 0LL;
  LODWORD(v67[0]) = v9;
  v12 = (unsigned __int64 *)(*(_QWORD *)(v59 + 16) + 96LL);
  WORD2(v67[0]) = 0;
  LODWORD(v67[1]) = 20;
  UltraMapping = MiGetUltraMapping(v12, 3u, 1LL, 0);
  v13 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v65 = v13;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v64);
  ValidPte = MiMakeValidPte((unsigned __int64)v13, v62, ProtectionPfnCompatible | 0xA0000000);
  v16 = 0;
  v57 = MiPteInShadowRange((unsigned __int64)v13);
  v17 = ValidPte;
  v18 = 0x8000000000000000uLL;
  if ( !v57 )
    goto LABEL_7;
  if ( MiPteHasShadow() )
  {
    v16 = 1;
    if ( !HIBYTE(word_140C6697C) )
    {
      v40 = (ValidPte & 1) == 0;
      goto LABEL_70;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    v40 = (ValidPte & 1) == 0;
LABEL_70:
    if ( !v40 )
      v17 |= v18;
  }
LABEL_7:
  *v13 = v17;
  if ( v16 )
    MiWritePteShadow((__int64)v13, v17, v18);
  v19 = (_QWORD *)UltraMapping;
  do
  {
    while ( 1 )
    {
      v20 = MI_READ_PTE_LOCK_FREE(v4);
      v54 = v20;
      v21 = v20;
      if ( (v20 & 1) != 0 )
        break;
      if ( (v20 & 0x400) != 0 || (v20 & 0x800) == 0 )
        goto LABEL_13;
      v41 = (__int64)(v4 << 25) >> 16;
      if ( v41 >= 0xFFFFF68000000000uLL && v41 <= 0xFFFFF6FFFFFFFFFFuLL && !(unsigned int)MiIsPdeOrAboveAccessible(v4) )
      {
        ++dword_140C135B4;
        goto LABEL_110;
      }
      v42 = MiLockTransitionLeafPageEx(v4, (_BYTE *)(v3 != 0), 0);
      if ( v42 )
      {
        v21 = MI_READ_PTE_LOCK_FREE(v4);
        v54 = v21;
        v43 = *(_QWORD *)(v42 + 40);
        if ( (v43 & 0xFFFFFFFFFFLL) != v5 && (v43 & 0x10000000000LL) != 0 )
          ++v56;
        if ( (*(_BYTE *)(v42 + 34) & 0x20) != 0 )
        {
          ++dword_140C135B0;
          _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_110;
        }
        ++v3;
LABEL_13:
        if ( v5 == v58 )
          goto LABEL_14;
        goto LABEL_82;
      }
    }
    ++v52;
    if ( (v20 & 0x80u) != 0LL )
      goto LABEL_56;
    v36 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v54) >> 12) & 0xFFFFFFFFFFLL;
    if ( v36 != qword_140C69378 )
    {
      if ( v36 > qword_140C65820 )
        goto LABEL_48;
      v37 = *(_QWORD *)(48 * v36 - 0x21FFFFFFFFD8LL);
      if ( ((v37 >> 54) & 1) == 0 || (v37 & 0x10000000000LL) == 0 )
        goto LABEL_48;
LABEL_56:
      ++v51;
      goto LABEL_48;
    }
    ++v55;
LABEL_48:
    if ( v5 == v58 )
      goto LABEL_14;
    v21 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v59 + 64) + 8 * ((__int64)(v4 - v61) >> 3));
LABEL_82:
    v21 &= -(__int64)((v21 & 1) != 0);
    v54 = v21;
LABEL_14:
    *v19 = v21;
    v4 += 8LL;
    ++v19;
  }
  while ( (v4 & 0xFFF) != 0 );
  if ( v3 )
  {
    MiLockNestedPageAtDpcInline(v7);
  }
  else
  {
    v60 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v60);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  v22 = *(_QWORD *)(v7 + 24);
  v23 = v22 & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v53 || (unsigned __int16)v22 == (unsigned __int64)(unsigned int)(v3 - v55 - v56 - v51 + v52 + 1))
    && *(_WORD *)(v7 + 32) == 1
    && v23 < 0x10000 )
  {
    v24 = v64;
    MiLockNestedPageAtDpcInline(v64);
    *(_QWORD *)(v24 + 24) = v23 | *(_QWORD *)(v24 + 24) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v25 = v61;
    v26 = v61;
    if ( v3 )
    {
      do
      {
        v44 = MI_READ_PTE_LOCK_FREE(v26);
        if ( (v44 & 1) == 0 && (v44 & 0x400) == 0 && (v44 & 0x800) != 0 )
        {
          if ( qword_140C657C0 )
          {
            if ( (v44 & 0x10) != 0 )
              v44 &= ~0x10uLL;
            else
              v44 &= ~qword_140C657C0;
          }
          v45 = 48 * ((v44 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          if ( (*(_QWORD *)(v45 + 40) & 0xFFFFFFFFFFLL) == v5 && v5 == v58 )
            MiSetPfnPteFrame(v45, v62);
          --v3;
          _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v26 += 8LL;
      }
      while ( v3 );
      v25 = v61;
    }
    v27 = v52;
    if ( v52 )
    {
      v28 = UltraMapping - v25;
      do
      {
        v54 = MI_READ_PTE_LOCK_FREE(v25);
        v29 = v54;
        if ( (v54 & 1) != 0 )
        {
          --v27;
          v34 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v54) >> 12) & 0xFFFFFFFFFFLL;
          if ( v34 <= qword_140C65820 && ((*(_QWORD *)(48 * v34 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 && v34 != v5 )
          {
            v53 = 0;
            v35 = 48 * v34 - 0x220000000000LL;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v53);
              while ( *(__int64 *)(v35 + 24) < 0 );
            }
            if ( (*(_QWORD *)(v35 + 40) & 0xFFFFFFFFFFLL) == v5 && v5 == v58 )
              MiSetPfnPteFrame(v35, v62);
            _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v29 = v54;
          }
          if ( v5 != v58 )
          {
            v29 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v59 + 64) + 8 * ((__int64)(v28 + v25 - UltraMapping) >> 3));
            v54 = v29;
          }
          if ( (v29 & 1) != 0 )
          {
            v54 = v29 | 0x20;
            MiWriteValidPteNewProtection(v25 + v28, v29 | 0x20);
            if ( (MiFlags & 0x300) == 0 )
              MiInsertTbFlushEntry((__int64)v67, (__int64)(v25 << 25) >> 16, 1LL, 0);
          }
        }
        v25 += 8LL;
      }
      while ( v27 );
    }
    v30 = ZeroPte;
    v31 = 0LL;
    if ( !v57 )
      goto LABEL_28;
    if ( MiPteHasShadow() )
    {
      v31 = 1LL;
      if ( !HIBYTE(word_140C6697C) )
        goto LABEL_107;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
LABEL_107:
      if ( (v30 & 1) != 0 )
        v30 |= 0x8000000000000000uLL;
    }
LABEL_28:
    v32 = (__int64)v65;
    *v65 = v30;
    if ( (_DWORD)v31 )
      MiWritePteShadow(v32, v30, v31);
    MiFlushTbList((int *)v67);
    result = v59;
    *(_DWORD *)(v59 + 56) = 0;
    return result;
  }
  ++dword_140C135B8;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_110:
  v46 = ZeroPte;
  v47 = 0LL;
  if ( v57 )
  {
    if ( MiPteHasShadow() )
    {
      v47 = v48;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_117;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_117;
    }
    if ( ((unsigned __int8)v46 & (unsigned __int8)v48) != 0 )
      v46 |= 0x8000000000000000uLL;
  }
LABEL_117:
  v49 = (__int64)v65;
  *v65 = v46;
  if ( (_DWORD)v47 )
    MiWritePteShadow(v49, v46, v47);
  while ( v3 )
  {
    v4 -= 8LL;
    v50 = MI_READ_PTE_LOCK_FREE(v4);
    if ( (v50 & 1) == 0 && (v50 & 0x400) == 0 && (v50 & 0x800) != 0 )
    {
      if ( qword_140C657C0 )
      {
        if ( (v50 & 0x10) != 0 )
          v50 &= ~0x10uLL;
        else
          v50 &= ~qword_140C657C0;
      }
      --v3;
      _InterlockedAnd64(
        (volatile signed __int64 *)(48 * ((v50 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL),
        0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v64 + 16));
}
