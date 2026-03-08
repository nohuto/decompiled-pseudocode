/*
 * XREFs of SymCryptModulusCreate @ 0x1403F3EC0
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403F1CE4 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F1E6C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefModulusCreate @ 0x1403FF71C (SymCryptFdefModulusCreate.c)
 */

__int64 SymCryptModulusCreate()
{
  return SymCryptFdefModulusCreate();
}
