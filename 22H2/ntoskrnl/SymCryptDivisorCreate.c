/*
 * XREFs of SymCryptDivisorCreate @ 0x1403F8BF8
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F74AC (SymCryptRsakeySetValue.c)
 *     SymCryptIntExtendedGcd @ 0x1403FD704 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefDivisorCreate @ 0x140404FF0 (SymCryptFdefDivisorCreate.c)
 */

__int64 SymCryptDivisorCreate()
{
  return SymCryptFdefDivisorCreate();
}
