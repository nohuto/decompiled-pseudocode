/*
 * XREFs of SymCryptFdefRawMul @ 0x1403FE01C
 * Callers:
 *     SymCryptFdefIntMulMixedSize @ 0x1403FD9AC (SymCryptFdefIntMulMixedSize.c)
 *     SymCryptFdefModMulGeneric @ 0x1403FEE60 (SymCryptFdefModMulGeneric.c)
 *     SymCryptFdefModMulMontgomery @ 0x1403FEF20 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x1403FF240 (SymCryptFdefModSetPostMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1402FCE2C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawMulAsm @ 0x1404002C0 (SymCryptFdefRawMulAsm.c)
 *     SymCryptFdefRawMulMulx @ 0x140404140 (SymCryptFdefRawMulMulx.c)
 */

__int64 __fastcall SymCryptFdefRawMul(int a1, int a2, int a3, int a4, __int64 a5)
{
  if ( (((unsigned __int16)g_SymCryptCpuFeaturesNotPresent | (unsigned __int16)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawMulAsm(a1, a2, a3, a4, a5);
  else
    return SymCryptFdefRawMulMulx(a1, a2, a3, a4, a5);
}
