char __fastcall RtlpGenericInverseCouplingWorker(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  _DWORD *v3; // r11
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  char v7; // bp
  unsigned __int64 v9; // r8
  int v10; // ebp
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
  _DWORD *v23; // r14
  unsigned __int64 v24; // rcx
  __int64 v25; // r11
  __int64 v26; // r8
  struct _KPRCB *v27; // rax
  __int64 v28; // rdx
  char *k; // rcx
  void *v30; // r11
  unsigned __int64 v31; // r8
  struct _KPRCB *v32; // rax
  __int64 v33; // rdx
  char *m; // rcx
  unsigned __int64 v35; // r9
  int v36; // r10d
  void *v37; // rdx
  struct _KPRCB *v38; // rax
  __int64 v39; // rdx
  char *n; // rcx
  _DWORD *v41; // rax
  struct _KPRCB *v42; // rax
  __int64 v43; // rdx
  char *ii; // rcx
  signed __int32 v46[14]; // [rsp+0h] [rbp-38h] BYREF

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
    _InterlockedOr(v46, 0);
    for ( i = (char *)(a3 & ~(CFlushSize - 1)); (unsigned __int64)i < a3 + 4096; i += CFlushSize )
      _mm_clflush(i);
  }
  if ( !(unsigned __int8)RtlpTestAndFillMemoryUp(a1, a1, a3) )
    return 0;
  v17 = KeGetCurrentPrcb();
  v18 = v17->CFlushSize;
  if ( v17->CFlushSize )
  {
    _InterlockedOr(v46, 0);
    for ( j = (char *)(v15 & ~(v18 - 1)); (unsigned __int64)j < v15 + 4096; j += v18 )
      _mm_clflush(j);
  }
  if ( !(unsigned __int8)RtlpTestMemory(v16, v15) )
    return 0;
  v22 = (char *)v20;
  if ( v10 )
  {
    v22 = (char *)(v20 + 4);
    *(_DWORD *)v20 = v21;
    v23 = (_DWORD *)(v20 + 4);
    v24 = 511LL;
    v25 = 1LL;
    v26 = 4088LL;
  }
  else
  {
    v23 = (_DWORD *)(v20 + 4);
    v24 = 512LL;
    v25 = 0LL;
    v26 = 4092LL;
  }
  memset64(v22, v11, v24);
  if ( v25 )
    *(_DWORD *)&v22[v26] = v21;
  v27 = KeGetCurrentPrcb();
  v28 = v27->CFlushSize;
  if ( v27->CFlushSize )
  {
    _InterlockedOr(v46, 0);
    for ( k = (char *)(v20 & ~(v28 - 1)); (unsigned __int64)k < v20 + 4096; k += v28 )
      _mm_clflush(k);
  }
  v30 = (void *)v20;
  v31 = 1024LL;
  if ( v10 )
  {
    *(_DWORD *)v20 = v4;
    v30 = (void *)(v20 + 4);
    v31 = 1023LL;
  }
  memset64(v30, v4 | (v4 << 32), v31 >> 1);
  if ( (v31 & 1) != 0 )
    *((_DWORD *)v30 + v31 - 1) = v4;
  v32 = KeGetCurrentPrcb();
  v33 = v32->CFlushSize;
  if ( v32->CFlushSize )
  {
    _InterlockedOr(v46, 0);
    for ( m = (char *)(v20 & ~(v33 - 1)); (unsigned __int64)m < v20 + 4096; m += v33 )
      _mm_clflush(m);
  }
  if ( !(unsigned __int8)RtlpTestMemory((unsigned int)v4, v20) )
    return 0;
  v37 = (void *)v35;
  if ( v10 )
  {
    *(_DWORD *)v35 = v36;
    v5 = 1023LL;
    v37 = v23;
  }
  memset64(v37, v11, v5 >> 1);
  if ( (v5 & 1) != 0 )
    *((_DWORD *)v37 + v5 - 1) = v36;
  v38 = KeGetCurrentPrcb();
  v39 = v38->CFlushSize;
  if ( v38->CFlushSize )
  {
    _InterlockedOr(v46, 0);
    for ( n = (char *)(v35 & ~(v39 - 1)); (unsigned __int64)n < v35 + 4096; n += v39 )
      _mm_clflush(n);
  }
  v41 = (_DWORD *)(v35 + 4096);
  do
    *--v41 = v4;
  while ( v41 != (_DWORD *)v35 );
  v42 = KeGetCurrentPrcb();
  v43 = v42->CFlushSize;
  if ( v42->CFlushSize )
  {
    _InterlockedOr(v46, 0);
    for ( ii = (char *)(v35 & ~(v43 - 1)); (unsigned __int64)ii < v35 + 4096; ii += v43 )
      _mm_clflush(ii);
  }
  return RtlpTestMemory((unsigned int)v4, v35);
}
