/*
 * XREFs of SymCryptFdefRawSquare @ 0x1403FE168
 * Callers:
 *     SymCryptFdefModSquareGeneric @ 0x1403FF410 (SymCryptFdefModSquareGeneric.c)
 *     SymCryptFdefModSquareMontgomery @ 0x1403FF4B0 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1402FCE2C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawSquareAsm @ 0x1404004F0 (SymCryptFdefRawSquareAsm.c)
 *     SymCryptFdefRawSquareMulx @ 0x140404760 (SymCryptFdefRawSquareMulx.c)
 */

__int64 __fastcall SymCryptFdefRawSquare(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawSquareAsm(a1, a2, a3);
  else
    return SymCryptFdefRawSquareMulx(a1, a2, a3);
}
