/*
 * XREFs of RtlpFcInitializeBuffers @ 0x14030305C
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x14081811C (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset(a1, 0, 0x48uLL);
}
