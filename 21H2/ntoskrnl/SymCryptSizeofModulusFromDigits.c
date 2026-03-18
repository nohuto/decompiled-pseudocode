/*
 * XREFs of SymCryptSizeofModulusFromDigits @ 0x140401380
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403FF10C (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403FF298 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x1403FF8AC (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefSizeofModulusFromDigits @ 0x14040CE5C (SymCryptFdefSizeofModulusFromDigits.c)
 */

__int64 SymCryptSizeofModulusFromDigits()
{
  return SymCryptFdefSizeofModulusFromDigits();
}
