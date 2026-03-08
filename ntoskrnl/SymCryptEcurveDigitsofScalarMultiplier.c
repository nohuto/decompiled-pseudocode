/*
 * XREFs of SymCryptEcurveDigitsofScalarMultiplier @ 0x1403F2C94
 * Callers:
 *     SymCryptEckeyCreate @ 0x1403F2D48 (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x1403F339C (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1403FA5AC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x1403FAFEC (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x1403FC95C (SymCryptShortWeierstrassFillScratchSpaces.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x1403F36C0 (SymCryptDigitsFromBits.c)
 */

__int64 __fastcall SymCryptEcurveDigitsofScalarMultiplier(__int64 a1)
{
  return SymCryptDigitsFromBits((unsigned int)(*(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 64)));
}
