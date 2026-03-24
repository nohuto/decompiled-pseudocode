/*
 * XREFs of RtlpFcInitializeBuffers @ 0x1402D3FB8
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407CAA94 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset(a1, 0, 0x48uLL);
}
