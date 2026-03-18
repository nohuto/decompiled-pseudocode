/*
 * XREFs of MiObtainSystemVa @ 0x140210FBC
 * Callers:
 *     MiExpandPtes @ 0x140210C98 (MiExpandPtes.c)
 *     MiExpandSystemCache @ 0x140355238 (MiExpandSystemCache.c)
 *     MiReservePoolMemory @ 0x14035A790 (MiReservePoolMemory.c)
 *     MiGetPageTablesForLargeMap @ 0x14038CA78 (MiGetPageTablesForLargeMap.c)
 *     MiReserveDriverPtes @ 0x140696DF0 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140B4790C (MiInitializeSystemPtes.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x140210FE4 (MiSystemVaToDynamicBitmap.c)
 *     MiObtainDynamicVa @ 0x140211064 (MiObtainDynamicVa.c)
 */

__int64 __fastcall MiObtainSystemVa(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  unsigned int v5; // r9d

  v3 = MiSystemVaToDynamicBitmap((unsigned int)a2, a2, a3, a1);
  return MiObtainDynamicVa(v3, v5, v4);
}
