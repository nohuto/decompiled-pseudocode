/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x14045A1A0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14045A080 (KiSetVirtualHeteroClockIntervalRequest.c)
 */

__int64 KiSetVirtualHeteroClockIntervalRequestDpcRoutine()
{
  return KiSetVirtualHeteroClockIntervalRequest(KiPendingVirtualHeteroRequest == 0);
}
