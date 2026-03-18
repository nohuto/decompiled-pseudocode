/*
 * XREFs of SymCryptSizeofModElementFromModulus @ 0x140401368
 * Callers:
 *     SymCryptRsakeyCreateAllObjects @ 0x1403FF298 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreEnc @ 0x1404019F4 (SymCryptRsaCoreEnc.c)
 *     SymCryptRsaCoreEncScratchSpace @ 0x140401B84 (SymCryptRsaCoreEncScratchSpace.c)
 *     SymCryptTwistedEdwardsAdd @ 0x140407280 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1404076A0 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140407B90 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140407ED0 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x14040844C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryIsEqual @ 0x140408600 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140408730 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptFdefModInvGeneric @ 0x14040BDF0 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140410C24 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140410D50 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefSizeofModElementFromModulus @ 0x14040009C (SymCryptFdefSizeofModElementFromModulus.c)
 */

__int64 __fastcall SymCryptSizeofModElementFromModulus(__int64 a1)
{
  return SymCryptFdefSizeofModElementFromModulus(a1);
}
