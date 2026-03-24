/*
 * XREFs of MiObtainSystemVa @ 0x14030AF30
 * Callers:
 *     MiReservePoolMemory @ 0x14030A5C4 (MiReservePoolMemory.c)
 *     MiExpandSystemCache @ 0x14030A67C (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x14030A9E8 (MiExpandPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B8764 (MiGetPageTablesForLargeMap.c)
 *     MiReserveDriverPtes @ 0x14075F694 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140A4E1C4 (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x140A552A8 (MiMapBBTMemory.c)
 * Callees:
 *     MiObtainDynamicVa @ 0x14030AF58 (MiObtainDynamicVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x14030B7CC (MiSystemVaToDynamicBitmap.c)
 */

__int64 __fastcall MiObtainSystemVa(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r9d

  v2 = MiSystemVaToDynamicBitmap(a2);
  return MiObtainDynamicVa(v2, v3);
}
