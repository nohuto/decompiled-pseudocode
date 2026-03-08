/*
 * XREFs of SymCryptDigitsFromBits @ 0x1403F36C0
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F1A48 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeyCreate @ 0x1403F1CE4 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeySetValue @ 0x1403F1F8C (SymCryptRsakeySetValue.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x1403F249C (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x1403F2C94 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1403FA5AC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x1403FAFEC (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1403FB2C0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x1403FC95C (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptFdefDecideModulusType @ 0x1403FE210 (SymCryptFdefDecideModulusType.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7467C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefDigitsFromBits @ 0x1403FFAA0 (SymCryptFdefDigitsFromBits.c)
 */

__int64 SymCryptDigitsFromBits()
{
  return SymCryptFdefDigitsFromBits();
}
