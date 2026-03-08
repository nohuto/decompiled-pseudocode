/*
 * XREFs of MiEnqueuePageList @ 0x140285CB0
 * Callers:
 *     MiAddPageToInsertList @ 0x1402848D0 (MiAddPageToInsertList.c)
 *     MiUnlockMdlWritePages @ 0x140284DD0 (MiUnlockMdlWritePages.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiSetNextStandbyPageSameNodeNoLockAsserts @ 0x140287AE0 (MiSetNextStandbyPageSameNodeNoLockAsserts.c)
 *     MiInsertPagesInList @ 0x140287DB0 (MiInsertPagesInList.c)
 *     MiPageToChannel @ 0x140370C10 (MiPageToChannel.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiEnqueuePageList(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  char v9; // cl
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  char v13; // r9
  int v14; // r14d
  int v15; // edx
  ULONG_PTR v16; // r8
  char *v17; // rax
  int v18; // r9d
  int v19; // eax
  ULONG_PTR v20; // rsi
  char *v21; // rcx
  int v22; // r12d
  unsigned __int64 v23; // r9
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // r10
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  unsigned __int64 v29; // r10
  signed __int64 v30; // r8
  signed __int64 v31; // rax
  __int64 result; // rax
  signed __int64 v33; // rdx
  signed __int64 v34; // r8
  int v35; // r9d
  int v36; // ecx
  int v37; // r10d
  int v38; // edx
  signed __int64 v39; // rcx
  signed __int64 v40; // rdx
  signed __int64 v41; // rcx
  signed __int64 v42; // rdx
  signed __int64 v43; // [rsp+58h] [rbp-61h]
  signed __int64 v44; // [rsp+88h] [rbp-31h]

  v2 = 48 * a2;
  v5 = 48 * a2 - 0x220000000000LL;
  if ( (*(_DWORD *)(a1 + 96) & 0xFFFFFFFD) == 0 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    if ( (v6 & 0x400) != 0 )
      v7 = v6 & 0xFFFFFFFFFFFFF7FFuLL;
    else
      v7 = v6 & 0xFFFFFFFFFFFFFFF7uLL;
    *(_QWORD *)(v5 + 16) = v7;
  }
  if ( !*(_QWORD *)a1 )
    goto LABEL_27;
  v8 = 48LL * *(_QWORD *)(a1 + 16);
  v9 = *(_BYTE *)(v5 + 35);
  v10 = v8 - 0x220000000000LL;
  v11 = 5;
  if ( (v9 & 8) != 0 )
    v12 = 5;
  else
    v12 = v9 & 7;
  v13 = *(_BYTE *)(v10 + 35);
  if ( (v13 & 8) == 0 )
    v11 = v13 & 7;
  if ( v12 != v11
    || ((*(_BYTE *)(v5 + 34) ^ *(_BYTE *)(v10 + 34)) & 0x10) != 0
    || ((*(_DWORD *)(v5 + 16) ^ *(_DWORD *)(v10 + 16)) & 0x400LL) != 0
    || (v14 = 0, *(__int64 *)(v5 + 40) < 0 != *(__int64 *)(v10 + 40) < 0) )
  {
LABEL_37:
    MiInsertPagesInList(a1, 1LL);
    goto LABEL_27;
  }
  if ( *(_DWORD *)(a1 + 8) != 2 )
    goto LABEL_27;
  v15 = dword_140C65708;
  v16 = 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4);
  if ( dword_140C65704 > (unsigned int)dword_140C65708
    || (v17 = (char *)qword_140C65748 + 16 * dword_140C65704, v16 < *(_QWORD *)v17)
    || dword_140C65704 != dword_140C65708 && v16 >= *((_QWORD *)v17 + 2) )
  {
    v35 = 0;
    if ( dword_140C65708 < 0 )
LABEL_55:
      KeBugCheckEx(0x1Au, 0x6201uLL, v16, 0LL, 0LL);
    while ( 1 )
    {
      v36 = (v35 + v15) >> 1;
      v17 = (char *)qword_140C65748 + 16 * v36;
      if ( v16 < *(_QWORD *)v17 )
      {
        if ( !v36 )
          KeBugCheckEx(0x1Au, 0x6200uLL, v16, (ULONG_PTR)qword_140C65748, 0LL);
        v15 = v36 - 1;
      }
      else
      {
        if ( v36 == dword_140C65708 || v16 < *((_QWORD *)v17 + 2) )
        {
          dword_140C65704 = (v35 + v15) >> 1;
          break;
        }
        v35 = v36 + 1;
      }
      if ( v15 < v35 )
        goto LABEL_55;
    }
  }
  v18 = dword_140C65708;
  v19 = *((_DWORD *)v17 + 2);
  v20 = 0xAAAAAAAAAAAAAAABuLL * (v8 >> 4);
  if ( dword_140C65704 <= (unsigned int)dword_140C65708 )
  {
    v21 = (char *)qword_140C65748 + 16 * dword_140C65704;
    if ( v20 >= *(_QWORD *)v21 && (dword_140C65704 == dword_140C65708 || v20 < *((_QWORD *)v21 + 2)) )
      goto LABEL_23;
  }
  v37 = 0;
  if ( dword_140C65708 < 0 )
LABEL_60:
    KeBugCheckEx(0x1Au, 0x6201uLL, v20, 0LL, 0LL);
  while ( 1 )
  {
    v38 = (v37 + v18) >> 1;
    v21 = (char *)qword_140C65748 + 16 * v38;
    if ( v20 < *(_QWORD *)v21 )
    {
      if ( !v38 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v20, (ULONG_PTR)qword_140C65748, 0LL);
      v18 = v38 - 1;
      goto LABEL_59;
    }
    if ( v38 == dword_140C65708 || v20 < *((_QWORD *)v21 + 2) )
      break;
    v37 = v38 + 1;
LABEL_59:
    if ( v18 < v37 )
      goto LABEL_60;
  }
  dword_140C65704 = (v37 + v18) >> 1;
LABEL_23:
  if ( v19 != *((_DWORD *)v21 + 2) )
    goto LABEL_37;
  if ( qword_140C65750 )
  {
    v22 = MiPageToChannel(v16);
    if ( qword_140C65750 )
      v14 = MiPageToChannel(v20);
  }
  else
  {
    v22 = 0;
  }
  if ( v22 != v14 )
    goto LABEL_37;
LABEL_27:
  if ( *(_QWORD *)(a1 + 16) == 0x3FFFFFFFFFLL )
  {
    *(_DWORD *)(a1 + 8) = (*(_BYTE *)(v5 + 34) & 0x10 | 0x20u) >> 4;
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 24) = a2;
    *(_QWORD *)v5 = *(_QWORD *)v5 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    *(_QWORD *)(v5 + 24) = *(_QWORD *)(v5 + 24) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    if ( *(_DWORD *)(a1 + 8) == 2 )
    {
      MiSetNextStandbyPageSameNodeNoLockAsserts(v5);
      v33 = *(_QWORD *)(v5 + 24);
      v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v33 | 0x7FFFF0000000000LL, v33);
      if ( v33 != v34 )
      {
        do
        {
          v39 = v34;
          v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v34 | 0x7FFFF0000000000LL, v34);
        }
        while ( v39 != v34 );
      }
      *(_DWORD *)(v5 + 36) = *(_DWORD *)(v5 + 36) & 0xFFE00000 | 0x7FFFF;
    }
  }
  else
  {
    v23 = *(_QWORD *)(a1 + 24);
    v24 = 48 * v23 - 0x220000000000LL;
    *(_QWORD *)v24 ^= (*(_QWORD *)v24 ^ a2) & 0xFFFFFFFFFFLL;
    *(_QWORD *)(v5 + 24) ^= (*(_QWORD *)(v5 + 24) ^ v23) & 0xFFFFFFFFFFLL;
    *(_QWORD *)v5 = *(_QWORD *)v5 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    if ( *(_DWORD *)(a1 + 8) == 2 )
    {
      v25 = *(_DWORD *)(v24 + 36);
      *(_QWORD *)v24 = (a2 << 40) | *(_QWORD *)v24 & 0xFFFFFFFFFFLL;
      *(_DWORD *)(v24 + 36) = v25 & 0x1FFFFF | ((unsigned int)(a2 >> 24) << 21);
      v43 = *(_QWORD *)(v24 + 40);
      v26 = (a2 & 0xF800000000LL) << 20;
      v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 40), v26 | v43 & 0xF07FFFFFFFFFFFFFuLL, v43);
      if ( v43 != v27 )
      {
        do
        {
          v40 = v27;
          v27 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v24 + 40),
                  v26 | v27 & 0xF07FFFFFFFFFFFFFuLL,
                  v27);
        }
        while ( v40 != v27 );
      }
      v28 = *(_QWORD *)(v5 + 24);
      v29 = (v23 & 0x7FFFF) << 40;
      v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), v29 | v28 & 0xF80000FFFFFFFFFFuLL, v28);
      if ( v28 != v30 )
      {
        do
        {
          v41 = v30;
          v30 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v5 + 24),
                  v29 | v30 & 0xF80000FFFFFFFFFFuLL,
                  v30);
        }
        while ( v41 != v30 );
      }
      *(_DWORD *)(v5 + 36) = (v23 >> 19) | 0xFFE00000;
      *(_QWORD *)v5 |= 0xFFFFFF0000000000uLL;
      v44 = *(_QWORD *)(v5 + 40);
      v31 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v5 + 40),
              v44 & 0xF07FFFFFFFFFFFFFuLL | 0x380000000000000LL,
              v44);
      if ( v44 != v31 )
      {
        do
        {
          v42 = v31;
          v31 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v5 + 40),
                  v31 & 0xF07FFFFFFFFFFFFFuLL | 0x380000000000000LL,
                  v31);
        }
        while ( v42 != v31 );
      }
    }
    *(_QWORD *)(a1 + 24) = a2;
  }
  result = *(_QWORD *)a1 + 1LL;
  *(_QWORD *)a1 = result;
  return result;
}
