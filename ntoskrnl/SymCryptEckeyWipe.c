/*
 * XREFs of SymCryptEckeyWipe @ 0x1403F3370
 * Callers:
 *     SymCryptEckeyFree @ 0x1403F2DD8 (SymCryptEckeyFree.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x1403F339C (SymCryptSizeofEckeyFromCurve.c)
 */

__int64 __fastcall SymCryptEckeyWipe(__int64 a1)
{
  unsigned int v2; // eax

  v2 = SymCryptSizeofEckeyFromCurve(*(_QWORD *)(a1 + 8));
  return SymCryptWipe(a1, v2);
}
