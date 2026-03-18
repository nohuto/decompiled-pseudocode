/*
 * XREFs of SymCryptShortWeierstrassNegate @ 0x140402290
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x1403F900C (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x1403F9088 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x1403F92D0 (SymCryptModNeg.c)
 */

__int64 __fastcall SymCryptShortWeierstrassNegate(__int64 a1)
{
  _DWORD *v1; // r14

  v1 = *(_DWORD **)(a1 + 616);
  SymCryptModElementCreate();
  SymCryptModNeg(v1);
  return SymCryptModElementMaskedCopy();
}
