/*
 * XREFs of SymCryptFdefMontgomeryReduce @ 0x1403FF8C4
 * Callers:
 *     SymCryptFdefModInvMontgomery @ 0x1403FED00 (SymCryptFdefModInvMontgomery.c)
 *     SymCryptFdefModMulMontgomery @ 0x1403FEF20 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModPreGetMontgomery @ 0x1403FF180 (SymCryptFdefModPreGetMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x1403FF240 (SymCryptFdefModSetPostMontgomery.c)
 *     SymCryptFdefModSquareMontgomery @ 0x1403FF4B0 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1402FCE2C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefMontgomeryReduceAsm @ 0x1404008B0 (SymCryptFdefMontgomeryReduceAsm.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x1404051F0 (SymCryptFdefMontgomeryReduceMulx.c)
 */

__int64 __fastcall SymCryptFdefMontgomeryReduce(__int64 a1, __int64 a2, __int64 a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefMontgomeryReduceAsm(a1, a2, a3);
  else
    return SymCryptFdefMontgomeryReduceMulx(a1, a2, a3);
}
