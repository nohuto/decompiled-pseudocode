/*
 * XREFs of RtlpFcInitializeBuffers @ 0x140252228
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407CADB4 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset(a1, 0, 0x48uLL);
}
