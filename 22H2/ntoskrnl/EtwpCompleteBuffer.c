/*
 * XREFs of EtwpCompleteBuffer @ 0x1406BD8BC
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x1405AC9DC (EtwpCompressPendingBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1406BC9F0 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x14032F238 (EtwpEnqueueAvailableBuffer.c)
 */

__int64 __fastcall EtwpCompleteBuffer(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 52) = 0;
  return EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
}
