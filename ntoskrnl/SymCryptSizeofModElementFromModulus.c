/*
 * XREFs of SymCryptSizeofModElementFromModulus @ 0x1403F3F08
 * Callers:
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F1E6C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreEnc @ 0x1403F4594 (SymCryptRsaCoreEnc.c)
 *     SymCryptRsaCoreEncScratchSpace @ 0x1403F4724 (SymCryptRsaCoreEncScratchSpace.c)
 *     SymCryptTwistedEdwardsAdd @ 0x1403F9E40 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1403FA260 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x1403FA730 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x1403FAA70 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x1403FAFEC (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryIsEqual @ 0x1403FB190 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1403FB2C0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptFdefModInvGeneric @ 0x1403FE960 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x1404036D4 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140403800 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefSizeofModElementFromModulus @ 0x1403F2C88 (SymCryptFdefSizeofModElementFromModulus.c)
 */

__int64 __fastcall SymCryptSizeofModElementFromModulus(__int64 a1)
{
  return SymCryptFdefSizeofModElementFromModulus(a1);
}
