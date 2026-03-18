/*
 * XREFs of SymCryptShortWeierstrassNegate @ 0x14040A200
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x140400F4C (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x140400FC8 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x140401210 (SymCryptModNeg.c)
 */

__int64 __fastcall SymCryptShortWeierstrassNegate(__int64 a1)
{
  _DWORD *v1; // r14

  v1 = *(_DWORD **)(a1 + 616);
  SymCryptModElementCreate();
  SymCryptModNeg(v1);
  return SymCryptModElementMaskedCopy();
}
