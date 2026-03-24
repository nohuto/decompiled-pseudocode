/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x1402A6C9C
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x1402A6A5C (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x14037B408 (RtlpHpLfhContextInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x1403C3E70 (RtlHpGlobalsInitialize.c)
 *     RtlCreateHeap @ 0x140768B60 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x14022C890 (ExGenRandom.c)
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
