/*
 * XREFs of RtlpFcLeaveRegion @ 0x14078E0A4
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A664C (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 */

void RtlpFcLeaveRegion()
{
  KeLeaveCriticalRegion();
}
