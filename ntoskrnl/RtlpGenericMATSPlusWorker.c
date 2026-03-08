/*
 * XREFs of RtlpGenericMATSPlusWorker @ 0x140678F44
 * Callers:
 *     RtlScrubMemory @ 0x1406789B8 (RtlScrubMemory.c)
 * Callees:
 *     RtlpTestAndFillMemoryUp @ 0x1406794BC (RtlpTestAndFillMemoryUp.c)
 */

char __fastcall RtlpGenericMATSPlusWorker(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  _DWORD *v5; // r11
  unsigned __int64 v7; // r8
  char v8; // di
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CFlushSize; // rdx
  char *i; // rcx
  char result; // al
  unsigned __int64 v13; // r9
  int v14; // r10d
  struct _KPRCB *v15; // rax
  __int64 v16; // rdx
  char *j; // rcx
  _DWORD *v18; // rax
  signed __int32 v19[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = (_DWORD *)a3;
  v7 = 1024LL;
  if ( (a3 & 4) != 0 )
  {
    *v5 = a1;
    v7 = 1023LL;
    ++v5;
  }
  memset64(v5, a1 | ((unsigned __int64)a1 << 32), v7 >> 1);
  v8 = 1;
  if ( (v7 & 1) != 0 )
    v5[v7 - 1] = a1;
  CurrentPrcb = KeGetCurrentPrcb();
  CFlushSize = CurrentPrcb->CFlushSize;
  if ( CurrentPrcb->CFlushSize )
  {
    _InterlockedOr(v19, 0);
    for ( i = (char *)(a3 & ~(CFlushSize - 1)); (unsigned __int64)i < a3 + 4096; i += CFlushSize )
      _mm_clflush(i);
  }
  result = RtlpTestAndFillMemoryUp(a1, a2, a3);
  if ( result )
  {
    v15 = KeGetCurrentPrcb();
    v16 = v15->CFlushSize;
    if ( v15->CFlushSize )
    {
      _InterlockedOr(v19, 0);
      for ( j = (char *)(v13 & ~(v16 - 1)); (unsigned __int64)j < v13 + 4096; j += v16 )
        _mm_clflush(j);
    }
    v18 = (_DWORD *)(v13 + 4096);
    while ( *--v18 == a2 )
    {
      *v18 = v14;
      if ( v18 == (_DWORD *)v13 )
        return v8;
    }
    return 0;
  }
  return result;
}
