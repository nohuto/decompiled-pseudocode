/*
 * XREFs of MmGetAvailablePagesForPartitionObject @ 0x1403026E8
 * Callers:
 *     CcPartitionTelemetryCallback @ 0x14087BDB0 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePagesForPartitionObject(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 17216LL);
}
