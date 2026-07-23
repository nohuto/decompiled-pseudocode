/*
 * XREFs of MiReplacePageOfProtoPool @ 0x140331F6C
 * Callers:
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetPrototypePteRanges @ 0x1403234A8 (MiGetPrototypePteRanges.c)
 *     MiLockLeafPage @ 0x140332CE0 (MiLockLeafPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeCopyPage @ 0x1404024D0 (KeCopyPage.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiReplacePageOfProtoPool(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r15d
  __int64 j; // r8
  unsigned int m; // r14d
  int v9; // esi
  char *v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // r11d
  unsigned int v14; // ecx
  char *v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  unsigned int v19; // ebx
  unsigned int k; // eax
  int v21; // ebx
  _QWORD *v22; // rsi
  _QWORD *v23; // r12
  __int64 v24; // rax
  char v25; // r15
  bool v26; // zf
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rsi
  unsigned __int64 v30; // rsi
  unsigned int v31; // edi
  unsigned int v32; // r10d
  char *v33; // r12
  unsigned __int64 v34; // r13
  unsigned int v35; // r9d
  unsigned int v36; // eax
  unsigned int v37; // ebx
  unsigned int v38; // ecx
  char *v39; // rdx
  __int64 n; // r8
  unsigned __int64 v41; // rax
  unsigned int v42; // edx
  __int64 v43; // rsi
  unsigned __int64 v44; // rbx
  __int64 v45; // rbx
  unsigned int SizeOfBitMap; // eax
  unsigned int v48; // eax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned int v50; // [rsp+20h] [rbp-B9h]
  int v51; // [rsp+28h] [rbp-B1h]
  int v52; // [rsp+30h] [rbp-A9h] BYREF
  int v53; // [rsp+34h] [rbp-A5h]
  char *i; // [rsp+38h] [rbp-A1h]
  unsigned __int64 v55; // [rsp+40h] [rbp-99h]
  __int64 v56; // [rsp+48h] [rbp-91h] BYREF
  __int64 v57; // [rsp+50h] [rbp-89h]
  _RTL_BITMAP v58; // [rsp+58h] [rbp-81h] BYREF
  __int64 v59; // [rsp+68h] [rbp-71h]
  __int128 v60; // [rsp+70h] [rbp-69h]
  __int128 v61; // [rsp+80h] [rbp-59h]
  __int128 v62; // [rsp+90h] [rbp-49h]
  signed __int32 v63[16]; // [rsp+A0h] [rbp-39h] BYREF

  *(&v58.SizeOfBitMap + 1) = 0;
  v59 = a2;
  v57 = a3;
  v55 = a1;
  v58.Buffer = (unsigned int *)v63;
  v58.SizeOfBitMap = 512;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  memset(v63, 0, sizeof(v63));
  if ( !(unsigned int)MiGetPrototypePteRanges(a1, &v58) )
    return 0LL;
  v6 = 0;
  KeCopyPage(a4, a1);
  m = 0;
  v9 = (((unsigned __int8)((unsigned __int8)&v63[14] + 1) - 57) & 4) != 0LL ? 0x20 : 0;
  v51 = v9;
  v10 = (char *)v63 - ((((unsigned __int8)((unsigned __int8)&v63[14] + 1) - 57) & 4) != 0LL ? 4 : 0);
  for ( i = v10; ; v10 = i )
  {
    v11 = m < v58.SizeOfBitMap ? m : 0;
    v12 = v58.SizeOfBitMap - 1;
    while ( 1 )
    {
      v13 = v9 + v12;
      v14 = v9 + v11;
      if ( v12 - (_DWORD)v11 == -1 )
        goto LABEL_44;
      v15 = &v10[8 * ((unsigned __int64)v14 >> 6)];
      for ( j = ~*(_QWORD *)v15 | ((1LL << (v14 & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v15 )
      {
        v15 += 8;
        if ( v15 > &v10[8 * ((unsigned __int64)v13 >> 6)] )
          goto LABEL_44;
      }
      j = ~j;
      _BitScanForward64(&v16, j);
      v17 = (unsigned int)v16 + ((unsigned int)((v15 - v10) >> 3) << 6);
      if ( (unsigned int)v17 > v13 )
      {
LABEL_44:
        v17 = 0xFFFFFFFFLL;
      }
      else if ( (_DWORD)v17 != -1 )
      {
        break;
      }
      if ( !(_DWORD)v11 )
        break;
      SizeOfBitMap = m + 1;
      if ( m + 1 > v58.SizeOfBitMap )
        SizeOfBitMap = v58.SizeOfBitMap;
      v12 = SizeOfBitMap - 1;
      v11 = 0LL;
    }
    v18 = (unsigned int)(v17 - v9);
    if ( (_DWORD)v17 == -1 )
      v18 = 0xFFFFFFFFLL;
    if ( (unsigned int)v18 < m || (_DWORD)v18 == -1 )
      break;
    if ( (unsigned int)v18 < 0x200 )
    {
      v19 = v18;
      v17 = (unsigned __int64)&v63[(unsigned __int64)(unsigned int)v18 >> 5];
      if ( (signed __int32 *)v17 != &v63[15] && (*(_DWORD *)v17 | *((_DWORD *)qword_1400127A0 + (v18 & 0x1F))) == -1 )
      {
        v19 = v18 - (v18 & 0x1F) + 32;
        for ( v17 += 4LL; v17 < (unsigned __int64)&v63[15] && *(_DWORD *)v17 == -1; v17 += 4LL )
          v19 += 32;
      }
      while ( v19 < 0x200 && _bittest(v63, v19) )
        ++v19;
      j = 0LL;
      if ( (signed __int32 *)v17 == &v63[15] )
        goto LABEL_27;
      v11 = v19 & 0x1F;
      if ( (*(_DWORD *)v17 & ~*((_DWORD *)qword_1400127A0 + v11)) != 0 )
        goto LABEL_27;
      j = (unsigned int)(32 - v11);
      if ( (_DWORD)j != -1 )
      {
        v17 += 4LL;
        while ( v17 < (unsigned __int64)&v63[15] && !*(_DWORD *)v17 )
        {
          v17 += 4LL;
          j = (unsigned int)(j + 32);
          if ( (_DWORD)j == -1 )
            goto LABEL_32;
        }
LABEL_27:
        for ( k = j + v19; k < 0x200 && !_bittest(v63, k) && (_DWORD)j != -1; ++k )
          j = (unsigned int)(j + 1);
      }
LABEL_32:
      if ( (_DWORD)j )
        goto LABEL_33;
      goto LABEL_81;
    }
    j = 0LL;
LABEL_81:
    v19 = 512;
LABEL_33:
    v21 = v19 - v18;
    v22 = (_QWORD *)(v55 + 8 * v18);
    v23 = (_QWORD *)(a4 + 8 * v18);
    for ( m = v18 + j + v21; v21; --v21 )
    {
      v24 = MiLockLeafPage(v22, v6);
      if ( v24 )
      {
        v50 = v6 + 1;
        v25 = *(_BYTE *)(v24 + 34);
        if ( (v25 & 8) != 0 )
        {
          v6 = v50;
          goto LABEL_93;
        }
        if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v22) & 1) != 0 )
        {
          v6 = v50;
        }
        else
        {
          v26 = (v25 & 0x20) == 0;
          v6 = v50;
          if ( !v26 )
            goto LABEL_93;
        }
      }
      else
      {
        _bittestandreset(v63, v18);
      }
      LODWORD(v18) = v18 + 1;
      *v23++ = *v22++;
    }
    if ( m >= 0x200 )
      break;
    v9 = (((unsigned __int8)((unsigned __int8)&v63[14] + 1) - 57) & 4) != 0LL ? 0x20 : 0;
  }
  v27 = 48 * v59 - 0x58000000000LL;
  v28 = 48 * v57 - 0x58000000000LL;
  if ( v6 )
  {
    MiLockNestedPageAtDpcInline(48 * v59 - 0x58000000000LL);
  }
  else
  {
    v52 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v52, v17, j, v11);
      while ( *(__int64 *)(v27 + 24) < 0 );
    }
  }
  if ( *(_WORD *)(v27 + 32) == 2
    && (v29 = *(_QWORD *)(v27 + 24), (unsigned __int16)v29 == (unsigned __int64)(v6 + 1))
    && (v30 = v29 & 0x3FFFFFFFFFFFFFFFLL, v30 < 0x10000) )
  {
    MiLockNestedPageAtDpcInline(v28);
    *(_QWORD *)(v28 + 24) = v30 | *(_QWORD *)(v28 + 24) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v31 = 1;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_93:
    v31 = 0;
  }
  v32 = 0;
  v33 = i;
  v34 = v55;
  while ( v6 )
  {
    v35 = v32 < v58.SizeOfBitMap ? v32 : 0;
    v36 = v58.SizeOfBitMap - 1;
    while ( 1 )
    {
      v53 = 0;
      v37 = v51 + v36;
      v38 = v51 + v35;
      if ( v36 - v35 == -1 )
        goto LABEL_72;
      v39 = &v33[8 * ((unsigned __int64)v38 >> 6)];
      for ( n = ~*(_QWORD *)v39 | ((1LL << (v38 & 0x3F)) - 1); n == -1; n = ~*(_QWORD *)v39 )
      {
        v39 += 8;
        if ( v39 > &v33[8 * ((unsigned __int64)v37 >> 6)] )
          goto LABEL_72;
      }
      _BitScanForward64(&v41, ~n);
      v42 = v41 + ((unsigned int)((v39 - v33) >> 3) << 6);
      v53 = v41;
      if ( v42 > v37 )
      {
LABEL_72:
        v42 = -1;
      }
      else if ( v42 != -1 )
      {
        break;
      }
      if ( !v35 )
        break;
      v48 = v32 + 1;
      if ( v32 + 1 > v58.SizeOfBitMap )
        v48 = v58.SizeOfBitMap;
      v36 = v48 - 1;
      v35 = 0;
    }
    v43 = v42 - v51;
    if ( v42 == -1 )
      v43 = 0xFFFFFFFFLL;
    v56 = MI_READ_PTE_LOCK_FREE(v34 + 8 * v43);
    v44 = v56;
    if ( (v56 & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v56)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v56 >> 3) & 0x1FF)) & 0x20) != 0 )
            v44 |= 0x20uLL;
        }
      }
    }
    else if ( qword_140C4DF40 )
    {
      if ( (v56 & 0x10) != 0 )
        v44 = v56 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v44 = ~qword_140C4DF40 & v56;
    }
    v45 = (v44 >> 12) & 0xFFFFFFFFFLL;
    if ( v31 == 1 )
    {
      *((_QWORD *)&v62 + 1) = *(_QWORD *)(48 * v45 - 0x58000000000LL + 40) ^ (v57 ^ *(_QWORD *)(48 * v45
                                                                                              - 0x58000000000LL
                                                                                              + 40)) & 0xFFFFFFFFFLL;
      *(_QWORD *)(48 * v45 - 0x58000000000LL + 40) = *((_QWORD *)&v62 + 1);
    }
    --v6;
    _InterlockedAnd64((volatile signed __int64 *)(48 * v45 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v32 = v43 + 1;
  }
  return v31;
}
