/*
 * XREFs of RtlScrubMemory @ 0x1406789B8
 * Callers:
 *     MiScrubPage @ 0x14065CB10 (MiScrubPage.c)
 * Callees:
 *     RtlCompareMemoryUlong @ 0x140420E50 (RtlCompareMemoryUlong.c)
 *     RtlpGenericInverseCouplingWorker @ 0x140678C68 (RtlpGenericInverseCouplingWorker.c)
 *     RtlpGenericMATSPlusWorker @ 0x140678F44 (RtlpGenericMATSPlusWorker.c)
 *     RtlpGenericRandomPatternWorker @ 0x140679048 (RtlpGenericRandomPatternWorker.c)
 *     RtlpGenericStrideWorker @ 0x14067933C (RtlpGenericStrideWorker.c)
 */

__int64 __fastcall RtlScrubMemory(unsigned __int64 Source)
{
  char *v2; // r10
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CFlushSize; // rdx
  char *i; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  signed __int32 v11[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = (char *)Source;
  v3 = 1024LL;
  v4 = __rdtsc() >> 4;
  if ( (Source & 4) != 0 )
  {
    *(_DWORD *)Source = v4;
    v2 = (char *)(Source + 4);
    v3 = 1023LL;
  }
  memset64(v2, (unsigned int)v4 | ((unsigned __int64)(unsigned int)v4 << 32), v3 >> 1);
  if ( (v3 & 1) != 0 )
    *(_DWORD *)&v2[4 * v3 - 4] = v4;
  CurrentPrcb = KeGetCurrentPrcb();
  CFlushSize = CurrentPrcb->CFlushSize;
  if ( CurrentPrcb->CFlushSize )
  {
    _InterlockedOr(v11, 0);
    for ( i = (char *)(Source & ~(CFlushSize - 1)); (unsigned __int64)i < Source + 4096; i += CFlushSize )
      _mm_clflush(i);
  }
  if ( RtlCompareMemoryUlong((PVOID)Source, 0x1000uLL, v4) == 4096
    && (unsigned __int8)RtlpGenericMATSPlusWorker(0LL, 0xFFFFFFFFLL, Source)
    && (unsigned __int8)RtlpGenericMATSPlusWorker(0xFFFFFFFFLL, 0LL, Source)
    && (unsigned __int8)RtlpGenericInverseCouplingWorker(0LL, 0xFFFFFFFFLL, Source)
    && (unsigned __int8)RtlpGenericInverseCouplingWorker(0xFFFFFFFFLL, 0LL, Source)
    && (unsigned __int8)RtlpGenericStrideWorker(0LL, 0xFFFFFFFFLL, v8, Source)
    && (unsigned __int8)RtlpGenericStrideWorker(0xFFFFFFFFLL, 0LL, v9, Source) )
  {
    return (unsigned __int8)RtlpGenericRandomPatternWorker(Source) == 0 ? 0xC0000709 : 0;
  }
  else
  {
    return 3221227273LL;
  }
}
