/*
 * XREFs of SymCryptFdefModSetPostMontgomery @ 0x1403FF240
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawMul @ 0x1403FE01C (SymCryptFdefRawMul.c)
 *     SymCryptFdefMontgomeryReduce @ 0x1403FF8C4 (SymCryptFdefMontgomeryReduce.c)
 */

__int64 __fastcall SymCryptFdefModSetPostMontgomery(__int64 a1, __int64 a2, __int64 a3)
{
  SymCryptFdefRawMul(a2, *(_DWORD *)(a1 + 4), *(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 4), a3);
  return SymCryptFdefMontgomeryReduce(a1, a3, a2);
}
