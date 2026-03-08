/*
 * XREFs of SymCryptShortWeierstrassNegate @ 0x1403FCD70
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x1403F3AEC (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x1403F3B68 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x1403F3DB0 (SymCryptModNeg.c)
 */

__int64 __fastcall SymCryptShortWeierstrassNegate(__int64 a1)
{
  _DWORD *v1; // r14

  v1 = *(_DWORD **)(a1 + 616);
  SymCryptModElementCreate();
  SymCryptModNeg(v1);
  return SymCryptModElementMaskedCopy();
}
