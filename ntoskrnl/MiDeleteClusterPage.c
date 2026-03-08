/*
 * XREFs of MiDeleteClusterPage @ 0x14027A890
 * Callers:
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiDeleteBatch @ 0x14027A5E0 (MiDeleteBatch.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiClearPfnImageVerified @ 0x14036ABC0 (MiClearPfnImageVerified.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiBadShareCount @ 0x14064B0E0 (MiBadShareCount.c)
 */

__int64 __fastcall MiDeleteClusterPage(ULONG_PTR BugCheckParameter2, unsigned __int8 *a2)
{
  ULONG_PTR v2; // r14
  __int64 v3; // r12
  ULONG_PTR v4; // r8
  unsigned __int64 v5; // r13
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 i; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // rsi
  _QWORD *v17; // rbx
  bool v18; // zf
  __int64 v19; // rbx
  signed __int8 v20; // al
  unsigned int v21; // ecx
  unsigned __int64 v22; // r12
  unsigned __int64 *v23; // r14
  _QWORD *v24; // rsi
  unsigned int v25; // eax
  unsigned int v26; // r15d
  volatile signed __int64 *v27; // rdi
  char v28; // al
  char v29; // al
  signed __int64 v30; // rax
  unsigned __int64 v31; // rcx
  signed __int64 v32; // rdx
  signed __int64 v33; // rax
  unsigned __int64 v34; // rcx
  signed __int64 v35; // rdx
  volatile signed __int64 v36; // rax
  char v37; // al
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 j; // rcx
  unsigned __int64 v45; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v47; // rcx
  struct _LIST_ENTRY *v48; // r8
  __int64 v49; // rcx
  ULONG_PTR v50; // rax
  signed __int64 v51; // rcx
  signed __int64 v52; // rcx
  __int64 v54; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v55; // [rsp+38h] [rbp-C8h] BYREF
  int v56; // [rsp+40h] [rbp-C0h] BYREF
  int v57; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v58; // [rsp+48h] [rbp-B8h]
  __int64 v59; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v60; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v61; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v62; // [rsp+68h] [rbp-98h]
  unsigned __int64 v63; // [rsp+70h] [rbp-90h]
  _KPROCESS *Process; // [rsp+78h] [rbp-88h]
  __int128 v65; // [rsp+80h] [rbp-80h] BYREF
  __int128 v66; // [rsp+90h] [rbp-70h]
  __int128 v67; // [rsp+A0h] [rbp-60h]
  __int128 v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+C0h] [rbp-40h]
  signed __int64 v70; // [rsp+C8h] [rbp-38h]
  __int128 v71; // [rsp+D0h] [rbp-30h]
  __int128 v72; // [rsp+E0h] [rbp-20h]
  __int64 v73; // [rsp+F0h] [rbp-10h]
  signed __int64 v74; // [rsp+F8h] [rbp-8h]
  __int128 v75; // [rsp+100h] [rbp+0h]
  __int128 v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+120h] [rbp+20h]
  signed __int64 v78; // [rsp+128h] [rbp+28h]
  __int128 v79; // [rsp+130h] [rbp+30h]
  __int128 v80; // [rsp+140h] [rbp+40h]
  __int64 v81; // [rsp+150h] [rbp+50h]
  unsigned __int64 v82; // [rsp+158h] [rbp+58h]
  __int128 v83; // [rsp+160h] [rbp+60h]
  __int128 v84; // [rsp+170h] [rbp+70h]
  __int64 v85; // [rsp+180h] [rbp+80h]
  volatile signed __int64 v86; // [rsp+188h] [rbp+88h]
  __int128 v87; // [rsp+190h] [rbp+90h]

  v2 = BugCheckParameter2;
  v3 = -1LL;
  v4 = BugCheckParameter2 >> 9;
  v5 = -1LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v65 = 0LL;
  v6 = Process[1].IdealProcessor[25];
  v66 = 0LL;
  v58 = *(_QWORD *)(qword_140C67048 + 8 * v6);
  v7 = (v4 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v47 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
      if ( (v47 & 0x20) != 0 )
        v8 |= 0x20uLL;
      if ( (v47 & 0x42) != 0 )
        v8 |= 0x42uLL;
    }
  }
  v59 = v8;
  v9 = v2;
  v63 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v59) >> 12) & 0xFFFFFFFFFFLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v11 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      v48 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v48 )
      {
        v49 = *((_QWORD *)&v48->Flink + ((v9 >> 3) & 0x1FF));
        if ( (v49 & 0x20) != 0 )
          v11 |= 0x20uLL;
        if ( (v49 & 0x42) != 0 )
          v11 |= 0x42uLL;
      }
    }
    if ( !v11 )
      return 0LL;
    if ( (v11 & 0x400) == 0 )
      return 0LL;
    v60 = v11 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v60) >> 12) & 0xFFFFFFFFFFLL;
    if ( i )
    {
      if ( v12 != v5 )
        return 0LL;
    }
    if ( (unsigned int)MiCheckSlabPfnBitmap(48 * v12 - 0x220000000000LL, 1LL, 0LL) )
      return 0LL;
    v13 = *(_QWORD *)(48 * v12 - 0x220000000000LL + 40);
    if ( v13 < 0 || *(_QWORD *)(qword_140C67048 + 8 * (((unsigned __int64)v13 >> 43) & 0x3FF)) != v58 )
      return 0LL;
    v5 = v12 + 1;
    v9 += 8LL;
  }
  MiDeleteBatch(a2);
  v62 = v12 - 15;
  v14 = 48 * (v12 - 15);
  v15 = v12 - 15;
  v16 = v14 - 0x220000000000LL;
  v17 = (_QWORD *)(v14 - 0x220000000000LL);
  v54 = v14 - 0x220000000000LL;
  MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v14 >> 4));
  v87 = 0LL;
  v18 = 0;
  if ( v5 - 16 < v5 )
  {
    v19 = v16 + 24;
    do
    {
      v20 = _interlockedbittestandset64((volatile signed __int32 *)v19, 0x3FuLL);
      if ( v15 == v5 - 16 )
      {
        v56 = 0;
        if ( v20 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v56);
            while ( *(__int64 *)v19 < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0x3FuLL) );
        }
      }
      else if ( v20 )
      {
        break;
      }
      v3 = v15;
      if ( (*(_QWORD *)(v19 - 16) | 0x8000000000000000uLL) != v2 )
      {
        v50 = MI_READ_PTE_LOCK_FREE(v2);
        KeBugCheckEx(0x1Au, 0x403uLL, v2, v50, *(_QWORD *)(v16 + 8));
      }
      v21 = *(unsigned __int8 *)(v19 + 10);
      if ( (v21 & 7) != 6 )
        MiBadShareCount(v16);
      if ( *(_WORD *)(v19 + 8) != 1 )
        break;
      if ( (*(_BYTE *)(v19 + 11) & 0x40) != 0 )
        break;
      ++v15;
      v16 += 48LL;
      v19 += 48LL;
      v2 += 8LL;
      ++*((_DWORD *)&v87 + ((unsigned __int64)v21 >> 6));
    }
    while ( v15 < v5 );
    v17 = (_QWORD *)v54;
    v18 = v15 == v5;
  }
  if ( !v18 )
  {
    if ( v3 != -1 )
    {
      for ( j = 48 * v3 - 0x220000000000LL; (_QWORD *)j != v17; j -= 48LL )
        _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v22 = v16;
  v23 = (unsigned __int64 *)(v2 - 128);
  v24 = (_QWORD *)(v16 - 768);
  v25 = 0;
  v26 = 1;
  if ( (_DWORD)v87 )
  {
    v25 = v87;
    v26 = 0;
  }
  if ( v25 < DWORD1(v87) )
  {
    v25 = DWORD1(v87);
    v26 = 1;
  }
  if ( v25 < DWORD2(v87) )
  {
    v25 = DWORD2(v87);
    v26 = 2;
  }
  v27 = v24 + 5;
  if ( v25 < HIDWORD(v87) )
    v26 = 3;
  v61 = 0x8FFFFFFFFFFFFFFFuLL;
  do
  {
    v28 = ((unsigned __int64)*v27 >> 60) & 7;
    *((_WORD *)v27 - 4) = 2;
    if ( v28 == 3 )
      MiClearPfnImageVerified((ULONG_PTR)v24);
    v55 = *((_QWORD *)v27 - 3);
    if ( (v55 & 0x400) == 0 )
    {
      if ( (v55 & 4) != 0 || (v55 & 2) != 0 )
      {
        v45 = MI_READ_PTE_LOCK_FREE(&v55);
        v55 = v45;
        if ( v45 )
          MiReleasePageFileInfo(v58, v45, 0);
      }
      else
      {
        v55 = 0LL;
      }
    }
    *((_QWORD *)v27 - 3) = ZeroPte;
    if ( *((unsigned __int8 *)v27 - 6) >> 6 != v26 )
      MiChangePageAttribute(v24, v26, 1LL, 0xBFFFFFFFFFFFFFFFuLL);
    v29 = *((_BYTE *)v27 - 5);
    if ( (v29 & 0x10) != 0 )
    {
      *((_BYTE *)v27 - 5) = v29 & 0xEF;
      v29 = *((_BYTE *)v27 - 5);
    }
    if ( *(__int64 *)v27 < 0 )
      *v27 &= ~0x8000000000000000uLL;
    *((_BYTE *)v27 - 5) = v29 & 0xF8;
    v30 = *v27;
    v31 = *v27 & 0x8FFFFFFFFFFFFFFFuLL;
    v69 = 0LL;
    v70 = v30;
    v73 = 0LL;
    v74 = v31;
    v67 = 0LL;
    v68 = 0LL;
    v71 = 0LL;
    v72 = 0LL;
    v32 = _InterlockedCompareExchange64(v27, v31, v30);
    v74 = v32;
    if ( v70 != v32 )
    {
      do
      {
        v51 = v32;
        v70 = v32;
        v74 = v61 & v32;
        v74 = _InterlockedCompareExchange64(v27, v61 & v32, v32);
        v32 = v74;
      }
      while ( v51 != v74 );
    }
    *v24 = 0LL;
    *((_QWORD *)v27 - 4) = 0LL;
    *((_QWORD *)v27 - 3) = 0LL;
    v33 = *v27;
    v34 = *v27 & 0xFFFFFF0000000000uLL;
    v77 = 0LL;
    v78 = v33;
    v81 = 0LL;
    v82 = v34;
    v75 = 0LL;
    v76 = 0LL;
    v79 = 0LL;
    v80 = 0LL;
    v35 = _InterlockedCompareExchange64(v27, v34, v33);
    v82 = v35;
    if ( v78 != v35 )
    {
      do
      {
        v52 = v35;
        v78 = v35;
        v82 = v35 & 0xFFFFFF0000000000uLL;
        v82 = _InterlockedCompareExchange64(v27, v35 & 0xFFFFFF0000000000uLL, v35);
        v35 = v82;
      }
      while ( v52 != v82 );
    }
    v36 = *v27;
    *((_QWORD *)v27 - 2) &= ~0x4000000000000000uLL;
    v36 |= 0x10000000000uLL;
    v85 = 0LL;
    v86 = v36;
    *((_QWORD *)v27 - 4) = 0LL;
    v83 = 0LL;
    v84 = 0LL;
    *v27 = v36;
    v37 = *((_BYTE *)v27 - 4) & 0xFC;
    if ( v24 == v17 )
      v37 |= 1u;
    *((_BYTE *)v27 - 4) = v37;
    *((_BYTE *)v27 - 6) &= ~0x10u;
    if ( v24 != v17 )
      _InterlockedAnd64(v27 - 2, 0x7FFFFFFFFFFFFFFFuLL);
    v38 = ZeroPte;
    if ( !(unsigned int)MiPteInShadowRange(v23) )
      goto LABEL_51;
    if ( !(unsigned int)MiPteHasShadow(v40, v39, v41) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v38 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_51:
      *v23 = v38;
      goto LABEL_52;
    }
    if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
      v38 = ZeroPte | 0x8000000000000000uLL;
    *v23 = v38;
    MiWritePteShadow(v23, v38);
LABEL_52:
    v17 = (_QWORD *)v54;
    v24 += 6;
    v27 += 6;
    ++v23;
  }
  while ( (unsigned __int64)v24 < v22 );
  *(_QWORD *)&v65 = v62;
  *((_QWORD *)&v65 + 1) = 1LL;
  LOBYTE(v66) = 2;
  MiInsertLargePageInNodeList(&v65);
  v42 = 48 * v63 - 0x220000000000LL;
  v57 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v57);
    while ( *(__int64 *)(v42 + 24) < 0 );
  }
  *(_QWORD *)(v42 + 24) ^= (*(_QWORD *)(v42 + 24) ^ (*(_QWORD *)(v42 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13], 0xFFFFFFFFFFFFFFF0uLL);
  return 1LL;
}
