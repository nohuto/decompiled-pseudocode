/*
 * XREFs of HalpSetIrtEntry @ 0x140518128
 * Callers:
 *     HalpInterruptUnmap @ 0x140930578 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpIommuUpdateRemappingTableEntry @ 0x1402FC29C (HalpIommuUpdateRemappingTableEntry.c)
 */

void __fastcall HalpSetIrtEntry(char a1, _DWORD *a2, __int64 a3)
{
  HalpIommuUpdateRemappingTableEntry(a1, *a2 & 0x3FFFFFFF, a3);
}
