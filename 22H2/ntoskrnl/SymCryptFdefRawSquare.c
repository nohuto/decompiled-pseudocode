/*
 * XREFs of SymCryptFdefRawSquare @ 0x140403688
 * Callers:
 *     SymCryptFdefModSquareGeneric @ 0x140404930 (SymCryptFdefModSquareGeneric.c)
 *     SymCryptFdefModSquareMontgomery @ 0x1404049D0 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14036803C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawSquareAsm @ 0x140405A10 (SymCryptFdefRawSquareAsm.c)
 *     SymCryptFdefRawSquareMulx @ 0x140409C80 (SymCryptFdefRawSquareMulx.c)
 */

__int64 __fastcall SymCryptFdefRawSquare(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawSquareAsm(a1, a2, a3);
  else
    return SymCryptFdefRawSquareMulx(a1, a2, a3);
}
