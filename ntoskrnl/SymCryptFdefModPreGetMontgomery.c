/*
 * XREFs of SymCryptFdefModPreGetMontgomery @ 0x1403FF180
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 *     SymCryptFdefMontgomeryReduce @ 0x1403FF8C4 (SymCryptFdefMontgomeryReduce.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void *__fastcall SymCryptFdefModPreGetMontgomery(__int64 a1, const void *a2, void *a3)
{
  int v3; // edi
  size_t v6; // rbx

  v3 = *(_DWORD *)(a1 + 4);
  v6 = (unsigned int)(v3 << 6);
  memmove(a3, a2, v6);
  SymCryptWipe((__int64)a3 + 4 * (unsigned int)(16 * v3), (unsigned int)v6);
  SymCryptFdefMontgomeryReduce(a1, a3, a3);
  return a3;
}
