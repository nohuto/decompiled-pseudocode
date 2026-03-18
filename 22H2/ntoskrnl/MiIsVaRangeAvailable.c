/*
 * XREFs of MiIsVaRangeAvailable @ 0x1406AF7FC
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x14071F450 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748A84 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30D50 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140A3CCF8 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x140214E40 (MiCheckForConflictingVadExistence.c)
 */

__int64 __fastcall MiIsVaRangeAvailable(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r8
  unsigned int v6; // r11d

  v5 = a2 + a3 - 1;
  if ( a2 < 0x10000 && !*(_QWORD *)(a1 + 2240) || a2 < a4 || v5 > a5 || v5 <= a2 )
    return 0LL;
  LOBYTE(v6) = !MiCheckForConflictingVadExistence();
  return v6;
}
