/*
 * XREFs of SymCryptFdefMontgomeryReduce @ 0x140404DE4
 * Callers:
 *     SymCryptFdefModInvMontgomery @ 0x140404220 (SymCryptFdefModInvMontgomery.c)
 *     SymCryptFdefModMulMontgomery @ 0x140404440 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModPreGetMontgomery @ 0x1404046A0 (SymCryptFdefModPreGetMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x140404760 (SymCryptFdefModSetPostMontgomery.c)
 *     SymCryptFdefModSquareMontgomery @ 0x1404049D0 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14036803C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefMontgomeryReduceAsm @ 0x140405DD0 (SymCryptFdefMontgomeryReduceAsm.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x14040A710 (SymCryptFdefMontgomeryReduceMulx.c)
 */

__int64 __fastcall SymCryptFdefMontgomeryReduce(__int64 a1, __int64 a2, __int64 a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefMontgomeryReduceAsm(a1, a2, a3);
  else
    return SymCryptFdefMontgomeryReduceMulx(a1, a2, a3);
}
