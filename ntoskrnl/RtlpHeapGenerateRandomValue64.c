/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x14030B578
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x14030B340 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x140375CA8 (RtlpHpLfhContextInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x1403AE028 (RtlHpGlobalsInitialize.c)
 *     RtlCreateHeap @ 0x14078AD90 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned int v0; // ebx
  __int64 v1; // rax

  v0 = ExGenRandom(1) & 0x7FFFFFFF;
  v1 = ExGenRandom(1);
  LODWORD(v1) = v1 & 0x7FFFFFFF;
  return ((unsigned __int64)v0 << 32) | v1;
}
