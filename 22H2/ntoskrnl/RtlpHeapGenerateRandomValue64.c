/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x1402FF5BC
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x1402FF37C (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x14037AE78 (RtlpHpLfhContextInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x1403C3AD0 (RtlHpGlobalsInitialize.c)
 *     RtlCreateHeap @ 0x140768180 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x14022C200 (ExGenRandom.c)
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
