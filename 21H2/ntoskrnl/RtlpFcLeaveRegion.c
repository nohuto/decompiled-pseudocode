/*
 * XREFs of RtlpFcLeaveRegion @ 0x140832F50
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403C78DC (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 */

void RtlpFcLeaveRegion()
{
  KeLeaveCriticalRegion();
}
