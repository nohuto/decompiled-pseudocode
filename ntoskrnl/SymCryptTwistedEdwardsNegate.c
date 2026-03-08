/*
 * XREFs of SymCryptTwistedEdwardsNegate @ 0x1403FA9A0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x1403F3AEC (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x1403F3B68 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x1403F3DB0 (SymCryptModNeg.c)
 */

__int64 __fastcall SymCryptTwistedEdwardsNegate(__int64 a1)
{
  _DWORD *v1; // r15

  v1 = *(_DWORD **)(a1 + 616);
  SymCryptModElementCreate();
  SymCryptModNeg(v1);
  SymCryptModElementMaskedCopy();
  SymCryptModNeg(v1);
  return SymCryptModElementMaskedCopy();
}
