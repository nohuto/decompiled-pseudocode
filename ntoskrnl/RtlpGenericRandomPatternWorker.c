/*
 * XREFs of RtlpGenericRandomPatternWorker @ 0x140679048
 * Callers:
 *     RtlScrubMemory @ 0x1406789B8 (RtlScrubMemory.c)
 * Callees:
 *     RtlpFillMemoryRandomUp @ 0x140678AF0 (RtlpFillMemoryRandomUp.c)
 *     RtlpTestMemoryRandomUp @ 0x140679508 (RtlpTestMemoryRandomUp.c)
 */

char __fastcall RtlpGenericRandomPatternWorker(unsigned __int64 *a1)
{
  unsigned int v2; // esi
  __int64 *v3; // r14
  __int64 v4; // rdi
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r11
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CFlushSize; // rdx
  char *i; // rcx
  _DWORD *v15; // r8
  unsigned __int64 v16; // rax
  struct _KPRCB *v17; // rax
  __int64 v18; // rdx
  char *j; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r11
  unsigned __int64 *v23; // r8
  unsigned __int64 k; // rdx
  struct _KPRCB *v25; // rax
  __int64 v26; // rdx
  char *m; // rcx
  __int64 v28; // r10
  unsigned __int64 v29; // r11
  struct _KPRCB *v30; // r9
  __int64 v31; // rdx
  char *n; // rcx
  unsigned __int64 v33; // r10
  unsigned __int64 *v34; // r11
  unsigned __int64 *v35; // r8
  unsigned __int64 v36; // rdx
  struct _KPRCB *v37; // rax
  __int64 v38; // rdx
  char *ii; // rcx
  unsigned __int64 *v40; // r8
  unsigned __int64 v41; // rdx
  struct _KPRCB *v42; // rax
  __int64 v43; // rdx
  char *jj; // rcx
  unsigned __int64 *v45; // rdx
  signed __int32 v47[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (__int64 *)GlfsrXorLookupTables;
LABEL_2:
  v4 = *v3;
  v5 = *(_QWORD *)RtlpSeedGlfsr;
  v6 = __rdtsc();
  v7 = 0;
  v8 = (unsigned int)v6;
  do
  {
    v9 = (v8 & (1LL << v7)) << v7;
    ++v7;
    v5 ^= v9;
  }
  while ( v7 < 0x20 );
  RtlpFillMemoryRandomUp(a1, v8, v5, *v3);
  CurrentPrcb = KeGetCurrentPrcb();
  CFlushSize = CurrentPrcb->CFlushSize;
  if ( CurrentPrcb->CFlushSize )
  {
    _InterlockedOr(v47, 0);
    for ( i = (char *)((unsigned __int64)a1 & ~(CFlushSize - 1)); (unsigned __int64)i < v11; i += CFlushSize )
      _mm_clflush(i);
  }
  v15 = a1;
  v16 = v10;
  if ( (unsigned __int64)a1 >= v11 )
  {
LABEL_12:
    v17 = KeGetCurrentPrcb();
    v18 = v17->CFlushSize;
    if ( v17->CFlushSize )
    {
      _InterlockedOr(v47, 0);
      for ( j = (char *)((unsigned __int64)a1 & ~(v18 - 1)); (unsigned __int64)j < v11; j += v18 )
        _mm_clflush(j);
    }
    if ( (unsigned __int8)RtlpTestMemoryRandomUp(a1, v18, v10, v4) )
    {
      v23 = a1;
      for ( k = v21; (unsigned __int64)v23 < v22; k = *(_QWORD *)(v4 + 8 * (k & 0xF)) ^ (k >> 4) )
        *v23++ = ~k;
      v25 = KeGetCurrentPrcb();
      v26 = v25->CFlushSize;
      if ( v25->CFlushSize )
      {
        _InterlockedOr(v47, 0);
        for ( m = (char *)((unsigned __int64)a1 & ~(v26 - 1)); (unsigned __int64)m < v22; m += v26 )
          _mm_clflush(m);
      }
      RtlpFillMemoryRandomUp(a1, v26, v21, v20);
      v30 = KeGetCurrentPrcb();
      v31 = v30->CFlushSize;
      if ( v30->CFlushSize )
      {
        _InterlockedOr(v47, 0);
        for ( n = (char *)((unsigned __int64)a1 & ~(v31 - 1)); (unsigned __int64)n < v29; n += v31 )
          _mm_clflush(n);
      }
      if ( (unsigned __int8)RtlpTestMemoryRandomUp(a1, v31, v28, v4) )
      {
        v35 = v34;
        v36 = v33;
        do
        {
          *--v35 = ~v36;
          v36 = *(_QWORD *)(v4 + 8 * (v36 & 0xF)) ^ (v36 >> 4);
        }
        while ( v35 != a1 );
        v37 = KeGetCurrentPrcb();
        v38 = v37->CFlushSize;
        if ( v37->CFlushSize )
        {
          _InterlockedOr(v47, 0);
          for ( ii = (char *)((unsigned __int64)a1 & ~(v38 - 1)); ii < (char *)v34; ii += v38 )
            _mm_clflush(ii);
        }
        v40 = v34;
        v41 = v33;
        do
        {
          *--v40 = v41;
          v41 = *(_QWORD *)(v4 + 8 * (v41 & 0xF)) ^ (v41 >> 4);
        }
        while ( v40 != a1 );
        v42 = KeGetCurrentPrcb();
        v43 = v42->CFlushSize;
        if ( v42->CFlushSize )
        {
          _InterlockedOr(v47, 0);
          for ( jj = (char *)((unsigned __int64)a1 & ~(v43 - 1)); jj < (char *)v34; jj += v43 )
            _mm_clflush(jj);
        }
        v45 = v34;
        while ( *((_DWORD *)v45 - 1) == HIDWORD(v33) )
        {
          if ( *(_DWORD *)--v45 != (_DWORD)v33 )
            break;
          v33 = *(_QWORD *)(v4 + 8 * (v33 & 0xF)) ^ (v33 >> 4);
          if ( v45 == a1 )
          {
            ++v2;
            ++v3;
            if ( v2 < 5 )
              goto LABEL_2;
            return 1;
          }
        }
      }
    }
  }
  else
  {
    while ( *v15 == (_DWORD)v16 )
    {
      *v15 = v16;
      if ( v15[1] != HIDWORD(v16) )
        break;
      v15[1] = HIDWORD(v16);
      v15 += 2;
      v16 = *(_QWORD *)(v4 + 8 * (v16 & 0xF)) ^ (v16 >> 4);
      if ( (unsigned __int64)v15 >= v11 )
        goto LABEL_12;
    }
  }
  return 0;
}
