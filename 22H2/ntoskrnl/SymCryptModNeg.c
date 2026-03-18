/*
 * XREFs of SymCryptModNeg @ 0x1403F92D0
 * Callers:
 *     SymCryptTwistedEdwardsIsEqual @ 0x1403FFC50 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsNegate @ 0x1403FFEC0 (SymCryptTwistedEdwardsNegate.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x140401FE0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassNegate @ 0x140402290 (SymCryptShortWeierstrassNegate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModNeg(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_1400064B0 + (*a1 & 0x380)))(a1);
}
