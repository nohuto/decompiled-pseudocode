/*
 * XREFs of SymCryptFdefModInvMontgomery @ 0x1403FED00
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 *     SymCryptFdefModInvGeneric @ 0x1403FE960 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFdefMontgomeryReduce @ 0x1403FF8C4 (SymCryptFdefMontgomeryReduce.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall SymCryptFdefModInvMontgomery(__int64 a1, const void *a2, void *a3, char a4, void *a5, __int64 a6)
{
  size_t v9; // rdi

  v9 = (unsigned int)(*(_DWORD *)(a1 + 4) << 6);
  memmove(a5, a2, v9);
  SymCryptWipe((__int64)a5 + v9, (unsigned int)v9);
  SymCryptFdefMontgomeryReduce(a1, a5, a5);
  SymCryptWipe((__int64)a5 + v9, (unsigned int)v9);
  SymCryptFdefMontgomeryReduce(a1, a5, a3);
  return SymCryptFdefModInvGeneric(a1, a3, (unsigned int *)a3, a4, (__int64)a5, a6);
}
