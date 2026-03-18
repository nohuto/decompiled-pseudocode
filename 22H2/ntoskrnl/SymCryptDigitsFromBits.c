/*
 * XREFs of SymCryptDigitsFromBits @ 0x1403F8BE0
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F6F68 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeyCreate @ 0x1403F7204 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeySetValue @ 0x1403F74AC (SymCryptRsakeySetValue.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x1403F79BC (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x1403F81B4 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1403FFACC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x14040050C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1404007E0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x140401E7C (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptFdefDecideModulusType @ 0x140403730 (SymCryptFdefDecideModulusType.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7737C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefDigitsFromBits @ 0x140404FC0 (SymCryptFdefDigitsFromBits.c)
 */

__int64 SymCryptDigitsFromBits()
{
  return SymCryptFdefDigitsFromBits();
}
