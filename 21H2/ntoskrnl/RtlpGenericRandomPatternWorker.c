/*
 * XREFs of RtlpGenericRandomPatternWorker @ 0x140590E3C
 * Callers:
 *     RtlScrubMemory @ 0x140590798 (RtlScrubMemory.c)
 * Callees:
 *     RtlpFillMemoryRandomUp @ 0x1405908CC (RtlpFillMemoryRandomUp.c)
 *     RtlpTestMemoryRandomUp @ 0x140591328 (RtlpTestMemoryRandomUp.c)
 */

char __fastcall RtlpGenericRandomPatternWorker(unsigned __int64 a1)
{
  unsigned int v1; // ebp
  char *v2; // rdi
  __int64 *v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CFlushSize; // rdx
  char *i; // rcx
  char *v14; // rdx
  unsigned __int64 v15; // rax
  struct _KPRCB *v16; // rax
  __int64 v17; // rdx
  char *j; // rcx
  unsigned __int64 *v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rdx
  struct _KPRCB *v23; // rax
  __int64 v24; // rdx
  char *k; // rcx
  struct _KPRCB *v26; // r9
  __int64 v27; // rdx
  char *m; // rcx
  char *v29; // rdx
  unsigned __int64 v30; // rcx
  struct _KPRCB *v31; // rax
  __int64 v32; // rdx
  char *n; // rcx
  char *v34; // rdx
  unsigned __int64 v35; // rcx
  struct _KPRCB *v36; // rax
  __int64 v37; // rdx
  char *ii; // rcx
  char *v39; // r8
  signed __int32 v41[14]; // [rsp+0h] [rbp-38h] BYREF

  v1 = 0;
  v2 = (char *)(a1 + 4096);
  v4 = (__int64 *)&GlfsrXorLookupTables;
LABEL_2:
  v5 = *v4;
  v6 = *(_QWORD *)RtlpSeedGlfsr;
  v7 = __rdtsc();
  v8 = 0;
  v9 = (unsigned int)v7;
  do
  {
    v10 = ((unsigned int)v9 & (unsigned __int64)(1LL << v8)) << v8;
    ++v8;
    v6 ^= v10;
  }
  while ( v8 < 0x20 );
  RtlpFillMemoryRandomUp(a1, v9, v6, *v4);
  CurrentPrcb = KeGetCurrentPrcb();
  CFlushSize = CurrentPrcb->CFlushSize;
  if ( CurrentPrcb->CFlushSize )
  {
    _InterlockedOr(v41, 0);
    for ( i = (char *)(a1 & ~(CFlushSize - 1)); i < v2; i += CFlushSize )
      _mm_clflush(i);
  }
  v14 = (char *)a1;
  v15 = v6;
  if ( a1 >= (unsigned __int64)v2 )
  {
LABEL_12:
    v16 = KeGetCurrentPrcb();
    v17 = v16->CFlushSize;
    if ( v16->CFlushSize )
    {
      _InterlockedOr(v41, 0);
      for ( j = (char *)(a1 & ~(v17 - 1)); j < v2; j += v17 )
        _mm_clflush(j);
    }
    if ( (unsigned __int8)RtlpTestMemoryRandomUp(a1, v17, v6, v5) )
    {
      v19 = (unsigned __int64 *)a1;
      v20 = v6;
      v21 = 0LL;
      v22 = (unsigned __int64)&v2[-a1 + 7] >> 3;
      if ( a1 > (unsigned __int64)v2 )
        v22 = 0LL;
      if ( v22 )
      {
        do
        {
          ++v21;
          *v19++ = ~v20;
          v20 = (v20 >> 4) ^ *(_QWORD *)(v5 + 8 * (v20 & 0xF));
        }
        while ( v21 < v22 );
      }
      v23 = KeGetCurrentPrcb();
      v24 = v23->CFlushSize;
      if ( v23->CFlushSize )
      {
        _InterlockedOr(v41, 0);
        for ( k = (char *)(a1 & ~(v24 - 1)); k < v2; k += v24 )
          _mm_clflush(k);
      }
      RtlpFillMemoryRandomUp(a1, v24, v6, v5);
      v26 = KeGetCurrentPrcb();
      v27 = v26->CFlushSize;
      if ( v26->CFlushSize )
      {
        _InterlockedOr(v41, 0);
        for ( m = (char *)(a1 & ~(v27 - 1)); m < v2; m += v27 )
          _mm_clflush(m);
      }
      if ( (unsigned __int8)RtlpTestMemoryRandomUp(a1, v27, v6, v5) )
      {
        v29 = v2;
        v30 = v6;
        do
        {
          v29 -= 8;
          *(_QWORD *)v29 = ~v30;
          v30 = (v30 >> 4) ^ *(_QWORD *)(v5 + 8 * (v30 & 0xF));
        }
        while ( v29 != (char *)a1 );
        v31 = KeGetCurrentPrcb();
        v32 = v31->CFlushSize;
        if ( v31->CFlushSize )
        {
          _InterlockedOr(v41, 0);
          for ( n = (char *)(a1 & ~(v32 - 1)); n < v2; n += v32 )
            _mm_clflush(n);
        }
        v34 = v2;
        v35 = v6;
        do
        {
          v34 -= 8;
          *(_QWORD *)v34 = v35;
          v35 = (v35 >> 4) ^ *(_QWORD *)(v5 + 8 * (v35 & 0xF));
        }
        while ( v34 != (char *)a1 );
        v36 = KeGetCurrentPrcb();
        v37 = v36->CFlushSize;
        if ( v36->CFlushSize )
        {
          _InterlockedOr(v41, 0);
          for ( ii = (char *)(a1 & ~(v37 - 1)); ii < v2; ii += v37 )
            _mm_clflush(ii);
        }
        v39 = v2;
        while ( *((_DWORD *)v39 - 1) == HIDWORD(v6) )
        {
          v39 -= 8;
          if ( *(_DWORD *)v39 != (_DWORD)v6 )
            break;
          v6 = (v6 >> 4) ^ *(_QWORD *)(v5 + 8 * (v6 & 0xF));
          if ( v39 == (char *)a1 )
          {
            ++v1;
            ++v4;
            if ( v1 < 5 )
              goto LABEL_2;
            return 1;
          }
        }
      }
    }
  }
  else
  {
    while ( *(_DWORD *)v14 == (_DWORD)v15 )
    {
      *(_DWORD *)v14 = v15;
      if ( *((_DWORD *)v14 + 1) != HIDWORD(v15) )
        break;
      *((_DWORD *)v14 + 1) = HIDWORD(v15);
      v14 += 8;
      v15 = (v15 >> 4) ^ *(_QWORD *)(v5 + 8 * (v15 & 0xF));
      if ( v14 >= v2 )
        goto LABEL_12;
    }
  }
  return 0;
}
