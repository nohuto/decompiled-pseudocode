/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x1402240DC
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x140223E9C (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x14037AF58 (RtlpHpLfhContextInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x1403C42A0 (RtlHpGlobalsInitialize.c)
 *     RtlCreateHeap @ 0x140768D20 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned int v0; // ebx
  __int64 v1; // rax

  v0 = ExGenRandom(1LL) & 0x7FFFFFFF;
  v1 = ExGenRandom(1LL);
  LODWORD(v1) = v1 & 0x7FFFFFFF;
  return ((unsigned __int64)v0 << 32) | v1;
}
