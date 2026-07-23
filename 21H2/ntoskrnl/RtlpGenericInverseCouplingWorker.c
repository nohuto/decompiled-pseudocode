/*
 * XREFs of RtlpGenericInverseCouplingWorker @ 0x140590A60
 * Callers:
 *     RtlScrubMemory @ 0x140590798 (RtlScrubMemory.c)
 * Callees:
 *     RtlpTestAndFillMemoryUp @ 0x1405912DC (RtlpTestAndFillMemoryUp.c)
 *     RtlpTestMemory @ 0x140591304 (RtlpTestMemory.c)
 */

char __fastcall RtlpGenericInverseCouplingWorker(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  _DWORD *v3; // r11
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  char v7; // r14
  unsigned __int64 v9; // r8
  int v10; // r14d
  unsigned __int64 v11; // r15
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CFlushSize; // rdx
  char *i; // rcx
  __int64 v15; // r9
  unsigned int v16; // r10d
  struct _KPRCB *v17; // rax
  __int64 v18; // rdx
  char *j; // rcx
  unsigned __int64 v20; // r9
  int v21; // r10d
  char *v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r11
  __int64 v25; // r8
  struct _KPRCB *v26; // rax
  __int64 v27; // rdx
  char *k; // rcx
  void *v29; // r11
  unsigned __int64 v30; // r8
  struct _KPRCB *v31; // rax
  __int64 v32; // rdx
  char *m; // rcx
  unsigned __int64 v34; // r9
  int v35; // r10d
  void *v36; // rdx
  struct _KPRCB *v37; // rax
  __int64 v38; // rdx
  char *n; // rcx
  _DWORD *v40; // rax
  struct _KPRCB *v41; // rax
  __int64 v42; // rdx
  char *ii; // rcx
  signed __int32 v45[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = (_DWORD *)a3;
  v4 = a2;
  v5 = 1024LL;
  v7 = a3;
  v9 = 1024LL;
  v10 = v7 & 4;
  if ( v10 )
  {
    *v3 = a1;
    v9 = 1023LL;
    ++v3;
  }
  v11 = a1 | ((unsigned __int64)a1 << 32);
  memset64(v3, v11, v9 >> 1);
  if ( (v9 & 1) != 0 )
    v3[v9 - 1] = a1;
  CurrentPrcb = KeGetCurrentPrcb();
  CFlushSize = CurrentPrcb->CFlushSize;
  if ( CurrentPrcb->CFlushSize )
  {
    _InterlockedOr(v45, 0);
    for ( i = (char *)(a3 & ~(CFlushSize - 1)); (unsigned __int64)i < a3 + 4096; i += CFlushSize )
      _mm_clflush(i);
  }
  if ( !(unsigned __int8)RtlpTestAndFillMemoryUp(a1, a1, a3) )
    return 0;
  v17 = KeGetCurrentPrcb();
  v18 = v17->CFlushSize;
  if ( v17->CFlushSize )
  {
    _InterlockedOr(v45, 0);
    for ( j = (char *)(v15 & ~(v18 - 1)); (unsigned __int64)j < v15 + 4096; j += v18 )
      _mm_clflush(j);
  }
  if ( !(unsigned __int8)RtlpTestMemory(v16, v15) )
    return 0;
  v22 = (char *)v20;
  if ( v10 )
  {
    *(_DWORD *)v20 = v21;
    v22 = (char *)(v20 + 4);
    v23 = 511LL;
    v24 = 1LL;
    v25 = 4088LL;
  }
  else
  {
    v23 = 512LL;
    v24 = 0LL;
    v25 = 4092LL;
  }
  memset64(v22, v11, v23);
  if ( v24 )
    *(_DWORD *)&v22[v25] = v21;
  v26 = KeGetCurrentPrcb();
  v27 = v26->CFlushSize;
  if ( v26->CFlushSize )
  {
    _InterlockedOr(v45, 0);
    for ( k = (char *)(v20 & ~(v27 - 1)); (unsigned __int64)k < v20 + 4096; k += v27 )
      _mm_clflush(k);
  }
  v29 = (void *)v20;
  v30 = 1024LL;
  if ( v10 )
  {
    *(_DWORD *)v20 = v4;
    v29 = (void *)(v20 + 4);
    v30 = 1023LL;
  }
  memset64(v29, v4 | (v4 << 32), v30 >> 1);
  if ( (v30 & 1) != 0 )
    *((_DWORD *)v29 + v30 - 1) = v4;
  v31 = KeGetCurrentPrcb();
  v32 = v31->CFlushSize;
  if ( v31->CFlushSize )
  {
    _InterlockedOr(v45, 0);
    for ( m = (char *)(v20 & ~(v32 - 1)); (unsigned __int64)m < v20 + 4096; m += v32 )
      _mm_clflush(m);
  }
  if ( !(unsigned __int8)RtlpTestMemory((unsigned int)v4, v20) )
    return 0;
  v36 = (void *)v34;
  if ( v10 )
  {
    *(_DWORD *)v34 = v35;
    v36 = (void *)(v34 + 4);
    v5 = 1023LL;
  }
  memset64(v36, v11, v5 >> 1);
  if ( (v5 & 1) != 0 )
    *((_DWORD *)v36 + v5 - 1) = v35;
  v37 = KeGetCurrentPrcb();
  v38 = v37->CFlushSize;
  if ( v37->CFlushSize )
  {
    _InterlockedOr(v45, 0);
    for ( n = (char *)(v34 & ~(v38 - 1)); (unsigned __int64)n < v34 + 4096; n += v38 )
      _mm_clflush(n);
  }
  v40 = (_DWORD *)(v34 + 4096);
  do
    *--v40 = v4;
  while ( v40 != (_DWORD *)v34 );
  v41 = KeGetCurrentPrcb();
  v42 = v41->CFlushSize;
  if ( v41->CFlushSize )
  {
    _InterlockedOr(v45, 0);
    for ( ii = (char *)(v34 & ~(v42 - 1)); (unsigned __int64)ii < v34 + 4096; ii += v42 )
      _mm_clflush(ii);
  }
  return RtlpTestMemory((unsigned int)v4, v34);
}
