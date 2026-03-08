/*
 * XREFs of HalpMmGetPteAddressSafe @ 0x14037B04C
 * Callers:
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 *     HalpMmReservePageTablePages @ 0x14037B1CC (HalpMmReservePageTablePages.c)
 *     HalpReserveHalPtes @ 0x140B3DD8C (HalpReserveHalPtes.c)
 * Callees:
 *     HalpMmAllocateAndInsertPageTablePage @ 0x14037A3F0 (HalpMmAllocateAndInsertPageTablePage.c)
 */

__int64 __fastcall HalpMmGetPteAddressSafe(unsigned __int64 a1)
{
  unsigned __int64 *v2; // rcx
  unsigned __int64 *v3; // rcx
  unsigned __int64 *v4; // rcx

  v2 = (unsigned __int64 *)(8 * ((a1 >> 39) & 0x1FF) - 0x90482413000LL);
  if ( ((*(_BYTE *)v2 & 1) != 0 || HalpMmAllocateAndInsertPageTablePage(v2))
    && ((v3 = (unsigned __int64 *)(8 * ((a1 >> 30) & 0x3FFFF) - 0x90482600000LL), (*(_BYTE *)v3 & 1) != 0)
     || HalpMmAllocateAndInsertPageTablePage(v3))
    && ((v4 = (unsigned __int64 *)(8 * ((a1 >> 21) & 0x7FFFFFF) - 0x904C0000000LL), (*(_BYTE *)v4 & 1) != 0)
     || HalpMmAllocateAndInsertPageTablePage(v4)) )
  {
    return 8 * ((a1 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  }
  else
  {
    return 0LL;
  }
}
