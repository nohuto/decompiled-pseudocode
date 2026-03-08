/*
 * XREFs of SymCryptSizeofEckeyFromCurve @ 0x1403F339C
 * Callers:
 *     SymCryptEckeyAllocate @ 0x1403F2CF4 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeyWipe @ 0x1403F3370 (SymCryptEckeyWipe.c)
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x1403F2C94 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptSizeofIntFromDigits @ 0x1403F3EF0 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x1403F9E14 (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptSizeofEckeyFromCurve(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  int v4; // ebx

  v2 = SymCryptEcurveDigitsofScalarMultiplier(a1);
  v4 = SymCryptSizeofIntFromDigits(v2, v3);
  return v4 + (unsigned int)SymCryptSizeofEcpointFromCurve(a1) + 64;
}
