/*
 * XREFs of SymCryptModNeg @ 0x140401210
 * Callers:
 *     SymCryptTwistedEdwardsIsEqual @ 0x140407B90 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsNegate @ 0x140407E00 (SymCryptTwistedEdwardsNegate.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x140409F50 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassNegate @ 0x14040A200 (SymCryptShortWeierstrassNegate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModNeg(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_140006940 + (*a1 & 0x380)))(a1);
}
