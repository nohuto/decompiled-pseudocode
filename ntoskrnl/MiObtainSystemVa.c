/*
 * XREFs of MiObtainSystemVa @ 0x140210534
 * Callers:
 *     MiExpandPtes @ 0x140210210 (MiExpandPtes.c)
 *     MiExpandSystemCache @ 0x1402E9B28 (MiExpandSystemCache.c)
 *     MiReservePoolMemory @ 0x1402EE008 (MiReservePoolMemory.c)
 *     MiGetPageTablesForLargeMap @ 0x14038A5B8 (MiGetPageTablesForLargeMap.c)
 *     MiReserveDriverPtes @ 0x1407F6D70 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140B391FC (MiInitializeSystemPtes.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x14021055C (MiSystemVaToDynamicBitmap.c)
 *     MiObtainDynamicVa @ 0x1402105DC (MiObtainDynamicVa.c)
 */

__int64 __fastcall MiObtainSystemVa(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  unsigned int v4; // r9d

  v2 = MiSystemVaToDynamicBitmap(a2);
  return MiObtainDynamicVa(v2, v4, v3);
}
