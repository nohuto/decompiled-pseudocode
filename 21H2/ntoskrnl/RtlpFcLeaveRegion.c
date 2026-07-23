/*
 * XREFs of RtlpFcLeaveRegion @ 0x14078E364
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A6E9C (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 */

void RtlpFcLeaveRegion()
{
  KeLeaveCriticalRegion();
}
