/*
 * XREFs of MiFreeReservationRuns @ 0x1406FB270
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403504CC (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x140350FC0 (MmOutSwapWorkingSet.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406FAD78 (MiReserveWorkingSetSwapSpace.c)
 * Callees:
 *     MiFreeReservationRun @ 0x1406BEA64 (MiFreeReservationRun.c)
 */

void __fastcall MiFreeReservationRuns(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx

  v2 = a2 + 80;
  for ( i = a2; i < v2; i += 16LL )
    MiFreeReservationRun(a1, i);
}
