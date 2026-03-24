/*
 * XREFs of MiZeroMemory @ 0x140357B44
 * Callers:
 *     MiZeroWithSystemPtes @ 0x1403F48B8 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F4B98 (MiZeroWithUltraSpace.c)
 * Callees:
 *     KeZeroPages @ 0x140402430 (KeZeroPages.c)
 */

__int64 __fastcall MiZeroMemory(__int64 a1, __int64 a2, __int64 a3)
{
  return KeZeroPages(a1, a2, a3);
}
