/*
 * XREFs of SymCryptModNeg @ 0x1403F3DB0
 * Callers:
 *     SymCryptTwistedEdwardsIsEqual @ 0x1403FA730 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsNegate @ 0x1403FA9A0 (SymCryptTwistedEdwardsNegate.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x1403FCAC0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassNegate @ 0x1403FCD70 (SymCryptShortWeierstrassNegate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModNeg(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_1400064B0 + (*a1 & 0x380)))(a1);
}
