/*
 * XREFs of HalpGetPteAddress @ 0x14036D740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetPteAddress(unsigned __int64 a1)
{
  return 8 * ((a1 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL;
}
