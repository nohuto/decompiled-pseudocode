/*
 * XREFs of SymCryptSizeofDivisorFromDigits @ 0x140401338
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403FF3BC (SymCryptRsakeySetValue.c)
 *     SymCryptIntExtendedGcd @ 0x1404055F4 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefDivisorCreate @ 0x14040D018 (SymCryptFdefDivisorCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x14040D558 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 SymCryptSizeofDivisorFromDigits()
{
  return SymCryptFdefSizeofDivisorFromDigits();
}
