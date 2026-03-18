/*
 * XREFs of SymCryptTwistedEdwardsNegate @ 0x1403FFEC0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x1403F900C (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x1403F9088 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x1403F92D0 (SymCryptModNeg.c)
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
