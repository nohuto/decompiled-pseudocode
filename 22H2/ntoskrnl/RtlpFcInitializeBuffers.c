/*
 * XREFs of RtlpFcInitializeBuffers @ 0x14032D2A8
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407CA9B4 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset(a1, 0, 0x48uLL);
}
