/*
 * XREFs of MiDemoteSlabEntry @ 0x1403C826C
 * Callers:
 *     MiDemoteSlabEntriesDpc @ 0x1403C7F40 (MiDemoteSlabEntriesDpc.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x14034A0A8 (MiUpdateSlabPagePlaceholderState.c)
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 *     MiReturnFreeZeroPage @ 0x14034E5C4 (MiReturnFreeZeroPage.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiRemoveSlabEntry @ 0x1403BC4FC (MiRemoveSlabEntry.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDemoteSlabEntry(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r13
  __int64 v6; // r12
  unsigned int v7; // r15d
  unsigned int v8; // r11d
  __int64 v9; // rdi
  unsigned int v10; // r10d
  unsigned __int64 v11; // rbx
  unsigned int *v12; // r8
  unsigned int v13; // edx
  _DWORD *v14; // rax
  unsigned int v15; // r9d
  __int64 v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // r14
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rcx
  int v21; // edx
  unsigned int v22; // edx
  __int64 v23; // rax
  unsigned int v24; // r10d
  unsigned __int64 v25; // rdx
  __int64 v26; // r10
  char v27; // r9
  volatile signed __int32 *v28; // r8
  unsigned int v29; // eax
  __int64 v30; // rsi
  unsigned int v31; // r14d
  unsigned __int64 j; // rax
  unsigned int v33; // r9d
  unsigned int v34; // r9d
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rsi
  volatile signed __int32 *v37; // rbx
  unsigned int v38; // r11d
  __int64 v39; // rdi
  _DWORD *v40; // r8
  unsigned __int64 v41; // rbx
  int v42; // r10d
  _DWORD *i; // rax
  unsigned int v44; // r10d
  __int64 v45; // rcx
  unsigned int v46; // edx
  unsigned int *v47; // rax
  __int64 result; // rax
  int v49; // r10d
  unsigned __int64 v50; // rcx
  ULONG_PTR v51; // rbx
  int v52; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v53; // [rsp+34h] [rbp-24h]
  int v54; // [rsp+38h] [rbp-20h] BYREF
  __int64 v55; // [rsp+40h] [rbp-18h]

  v4 = a3;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  MiRemoveSlabEntry(a1, (unsigned __int64 *)a2, v4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  v6 = 0x3FFFFFFFFFLL;
  v55 = 0LL;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v4 + 48);
    if ( v8 <= v7 )
      break;
    v9 = *(_QWORD *)(v4 + 56);
    v10 = 0;
    v11 = v9 + 4 * ((unsigned __int64)(v8 - 1) >> 5);
    v12 = (unsigned int *)(v9 + 4 * ((unsigned __int64)v7 >> 5));
    v13 = (-1 << (v7 & 0x1F)) & *v12;
    v14 = v12 + 1;
    while ( !v13 )
    {
      if ( (unsigned __int64)v14 > v11 )
        goto LABEL_7;
      ++v12;
      ++v14;
      v13 = *v12;
    }
    _BitScanForward64((unsigned __int64 *)&v20, v13);
    v15 = v20 + 32 * (((__int64)v12 - v9) >> 2);
    if ( v15 > v8 )
    {
LABEL_7:
      v15 = *(_DWORD *)(v4 + 48);
      goto LABEL_8;
    }
    v21 = ((1 << v20) - 1) | v13;
    while ( 1 )
    {
      v22 = ~v21;
      if ( v22 )
      {
        _BitScanForward64((unsigned __int64 *)&v23, v22);
        goto LABEL_22;
      }
      if ( (unsigned __int64)(v12 + 1) > v11 )
        break;
      v21 = v12[1];
      ++v12;
    }
    LODWORD(v23) = 32;
LABEL_22:
    v24 = v23 + 32 * (((__int64)v12 - v9) >> 2);
    if ( v24 > v8 )
      v24 = *(_DWORD *)(v4 + 48);
    v10 = v24 - v15;
LABEL_8:
    if ( !v10 )
      break;
    v7 = v10 + v15;
    v16 = *(_QWORD *)(v4 + 24) + v15;
    v53 = v10 + v15;
    v17 = (_QWORD *)(48 * v16 - 0x220000000000LL);
    v18 = &v17[6 * v10];
    if ( v17 < v18 )
    {
      v19 = (volatile signed __int32 *)(v17 + 3);
      do
      {
        if ( v6 == 0x3FFFFFFFFFLL )
        {
          v52 = 0;
          while ( _interlockedbittestandset64(v19, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v52);
            while ( *(__int64 *)v19 < 0 );
          }
        }
        else
        {
          MiLockNestedPageAtDpcInline((__int64)v17);
        }
        if ( *((_WORD *)v19 + 4) || (*((_BYTE *)v19 + 10) & 7) != 2 )
        {
          _InterlockedAnd64((volatile signed __int64 *)v19, 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          if ( (MiUnlinkPageFromListEx((ULONG_PTR)v17, 0LL) & 1) != 0 )
            *(_QWORD *)v19 |= 0x4000000000000000uLL;
          *v17 ^= (*v17 ^ v6) & 0xFFFFFFFFFFLL;
          v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v19 + 0x87FFFFFFFFALL) >> 4);
        }
        v17 += 6;
        v19 += 12;
      }
      while ( v17 < v18 );
      v7 = v53;
      v4 = a3;
    }
  }
  LOBYTE(v25) = 1;
  v26 = *(_QWORD *)(v4 + 24) >> 9;
  v27 = v26 & 0x1F;
  v28 = (volatile signed __int32 *)(qword_140C6EFF0 + 4LL * (*(_QWORD *)(v4 + 24) >> 14));
  if ( (unsigned __int64)(v26 & 0x1F) + 1 > 0x20 )
  {
    if ( (v26 & 0x1F) != 0 )
    {
      v49 = v26 & 0x1F;
      _InterlockedAnd(v28++, ~(((1 << (32 - v49)) - 1) << v27));
      v25 = 1LL - (unsigned int)(32 - v49);
      if ( v25 >= 0x20 )
      {
        v50 = v25 >> 5;
        v25 += -32LL * (v25 >> 5);
        do
        {
          *v28++ = 0;
          --v50;
        }
        while ( v50 );
      }
      if ( !v25 )
        goto LABEL_28;
    }
    v29 = -1 << v25;
  }
  else
  {
    v29 = ~(1 << v27);
  }
  _InterlockedAnd(v28, v29);
LABEL_28:
  MiUpdateLargePageBitMap(a1, *(_QWORD *)(v4 + 24), 0x200uLL, 0, 1);
  v30 = v55;
  if ( v6 != 0x3FFFFFFFFFLL )
  {
    do
    {
      v51 = 48 * v6 - 0x220000000000LL;
      v6 = *(_QWORD *)v51 & 0xFFFFFFFFFFLL;
      if ( (*(_QWORD *)(v51 + 24) & 0x4000000000000000LL) != 0 )
      {
        *(_QWORD *)(v51 + 24) &= ~0x4000000000000000uLL;
        MiDiscardTransitionPteEx(v51, 0LL);
      }
      else
      {
        MiInsertPageInList(v51, 4u);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++v30;
    }
    while ( v6 != 0x3FFFFFFFFFLL );
    v4 = a3;
  }
  v55 = *(unsigned int *)(v4 + 132) + v30;
  v31 = 0;
  while ( 1 )
  {
    v38 = *(_DWORD *)(v4 + 48);
    if ( v38 <= v31 )
      break;
    v39 = *(_QWORD *)(v4 + 56);
    v34 = 0;
    v40 = (_DWORD *)(v39 + 4 * ((unsigned __int64)v31 >> 5));
    v41 = v39 + 4 * ((unsigned __int64)(v38 - 1) >> 5);
    v42 = ((1 << (v31 & 0x1F)) - 1) | *v40;
    for ( i = v40 + 1; ; ++i )
    {
      v44 = ~v42;
      if ( v44 )
        break;
      if ( (unsigned __int64)i > v41 )
        goto LABEL_51;
      v42 = *++v40;
    }
    _BitScanForward64((unsigned __int64 *)&v45, v44);
    v46 = v45 + 32 * (((__int64)v40 - v39) >> 2);
    if ( v46 > v38 )
    {
LABEL_51:
      v46 = *(_DWORD *)(v4 + 48);
      goto LABEL_34;
    }
    for ( j = ~(v44 | ((1 << v45) - 1)); !(_DWORD)j; j = *v47 )
    {
      v47 = v40 + 1;
      if ( (unsigned __int64)(v40 + 1) > v41 )
      {
        LODWORD(j) = 32;
        goto LABEL_31;
      }
      ++v40;
    }
    _BitScanForward64(&j, j);
LABEL_31:
    v33 = j + 32 * (((__int64)v40 - v39) >> 2);
    if ( v33 > v38 )
      v33 = *(_DWORD *)(v4 + 48);
    v34 = v33 - v46;
LABEL_34:
    if ( !v34 )
      break;
    v31 = v34 + v46;
    v35 = 48 * (*(_QWORD *)(v4 + 24) + v46) - 0x220000000000LL;
    v36 = v35 + 48LL * v34;
    if ( v35 < v36 )
    {
      v37 = (volatile signed __int32 *)(v35 + 24);
      do
      {
        v54 = 0;
        while ( _interlockedbittestandset64(v37, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v54);
          while ( *(__int64 *)v37 < 0 );
        }
        MiUpdateSlabPagePlaceholderState(a2, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v37 + 0x87FFFFFFFFALL) >> 4), 1LL, 0);
        MiReturnFreeZeroPage(v35);
        _InterlockedAnd64((volatile signed __int64 *)v37, 0x7FFFFFFFFFFFFFFFuLL);
        v35 += 48LL;
        v37 += 12;
      }
      while ( v35 < v36 );
      v4 = a3;
    }
  }
  ExFreePoolWithTag((PVOID)v4, 0);
  result = v55;
  ++*(_QWORD *)(a1 + 16224);
  ++*(_DWORD *)(a2 + 96);
  return result;
}
