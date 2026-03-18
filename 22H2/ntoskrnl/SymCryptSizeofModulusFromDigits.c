/*
 * XREFs of SymCryptSizeofModulusFromDigits @ 0x1403F9440
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403F7204 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F738C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x1403F79BC (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefSizeofModulusFromDigits @ 0x140404E3C (SymCryptFdefSizeofModulusFromDigits.c)
 */

__int64 SymCryptSizeofModulusFromDigits()
{
  return SymCryptFdefSizeofModulusFromDigits();
}
