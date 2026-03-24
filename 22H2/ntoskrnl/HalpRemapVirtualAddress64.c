/*
 * XREFs of HalpRemapVirtualAddress64 @ 0x140309668
 * Callers:
 *     HalpPciMapMmConfigPhysicalAddress @ 0x140309618 (HalpPciMapMmConfigPhysicalAddress.c)
 *     HalpReadWriteWheaPhysicalMemory @ 0x1404D7770 (HalpReadWriteWheaPhysicalMemory.c)
 *     HalpBlkAddVirtualMapping @ 0x140A8DB4C (HalpBlkAddVirtualMapping.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpRemapVirtualAddress64(unsigned __int64 a1, __int64 a2, char a3)
{
  *(_QWORD *)(8 * ((a1 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = a2 & 0xFFFFFFFFF000LL | (a3 != 0
                                                                                           ? 0x800000000000001BuLL
                                                                                           : 0x8000000000000003uLL);
  __invlpg((void *)a1);
  return a1;
}
