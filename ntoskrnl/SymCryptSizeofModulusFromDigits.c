/*
 * XREFs of SymCryptSizeofModulusFromDigits @ 0x1403F3F20
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403F1CE4 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F1E6C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x1403F249C (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefSizeofModulusFromDigits @ 0x1403FF91C (SymCryptFdefSizeofModulusFromDigits.c)
 */

__int64 SymCryptSizeofModulusFromDigits()
{
  return SymCryptFdefSizeofModulusFromDigits();
}
