/*
 * XREFs of MiFreeReservationRuns @ 0x140765980
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14065065C (MmOutSwapVirtualAddresses.c)
 *     MiReserveWorkingSetSwapSpace @ 0x140A40660 (MiReserveWorkingSetSwapSpace.c)
 * Callees:
 *     MiFreeReservationRun @ 0x1407659CC (MiFreeReservationRun.c)
 */

__int64 __fastcall MiFreeReservationRuns(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx
  __int64 result; // rax

  v2 = a2 + 80;
  for ( i = a2; i < v2; i += 16LL )
    result = MiFreeReservationRun(a1, i);
  return result;
}
