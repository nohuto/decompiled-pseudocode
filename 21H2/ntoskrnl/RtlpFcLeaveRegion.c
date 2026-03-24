/*
 * XREFs of RtlpFcLeaveRegion @ 0x14078E1A4
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A6D4C (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 */

void RtlpFcLeaveRegion()
{
  KeLeaveCriticalRegion();
}
