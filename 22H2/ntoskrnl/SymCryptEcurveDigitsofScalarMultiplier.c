/*
 * XREFs of SymCryptEcurveDigitsofScalarMultiplier @ 0x1403F81B4
 * Callers:
 *     SymCryptEckeyCreate @ 0x1403F8268 (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x1403F8438 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x1403F88BC (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1403FFACC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x14040050C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x140401E7C (SymCryptShortWeierstrassFillScratchSpaces.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x1403F8BE0 (SymCryptDigitsFromBits.c)
 */

__int64 __fastcall SymCryptEcurveDigitsofScalarMultiplier(__int64 a1)
{
  return SymCryptDigitsFromBits((unsigned int)(*(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 64)));
}
