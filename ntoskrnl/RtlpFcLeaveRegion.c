/*
 * XREFs of RtlpFcLeaveRegion @ 0x14078248C
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1402F03BC (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

void RtlpFcLeaveRegion()
{
  KeLeaveCriticalRegion();
}
