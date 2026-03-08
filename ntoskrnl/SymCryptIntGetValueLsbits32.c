/*
 * XREFs of SymCryptIntGetValueLsbits32 @ 0x1403F3884
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F1F8C (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403F7FE0 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x1403F81E4 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefDecideModulusType @ 0x1403FE210 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefModInvGeneric @ 0x1403FE960 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x1404036D4 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptFixedWindowRecoding @ 0x140403EA8 (SymCryptFixedWindowRecoding.c)
 *     SymCryptWidthNafRecoding @ 0x140404004 (SymCryptWidthNafRecoding.c)
 * Callees:
 *     SymCryptFdefIntGetValueLsbits32 @ 0x1403F2CE8 (SymCryptFdefIntGetValueLsbits32.c)
 */

__int64 __fastcall SymCryptIntGetValueLsbits32(__int64 a1)
{
  return SymCryptFdefIntGetValueLsbits32(a1);
}
