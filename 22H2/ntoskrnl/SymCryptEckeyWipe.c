/*
 * XREFs of SymCryptEckeyWipe @ 0x1403F8890
 * Callers:
 *     SymCryptEckeyFree @ 0x1403F82F8 (SymCryptEckeyFree.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F5EA8 (SymCryptWipe.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x1403F88BC (SymCryptSizeofEckeyFromCurve.c)
 */

__int64 __fastcall SymCryptEckeyWipe(__int64 a1)
{
  unsigned int v2; // eax

  v2 = SymCryptSizeofEckeyFromCurve(*(_QWORD *)(a1 + 8));
  return SymCryptWipe(a1, v2);
}
