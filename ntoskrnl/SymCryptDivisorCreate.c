/*
 * XREFs of SymCryptDivisorCreate @ 0x1403F36D8
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F1F8C (SymCryptRsakeySetValue.c)
 *     SymCryptIntExtendedGcd @ 0x1403F81E4 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefDivisorCreate @ 0x1403FFAD0 (SymCryptFdefDivisorCreate.c)
 */

__int64 SymCryptDivisorCreate()
{
  return SymCryptFdefDivisorCreate();
}
