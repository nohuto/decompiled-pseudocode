/*
 * XREFs of SymCryptSizeofDivisorFromDigits @ 0x1403F3ED8
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F1F8C (SymCryptRsakeySetValue.c)
 *     SymCryptIntExtendedGcd @ 0x1403F81E4 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefDivisorCreate @ 0x1403FFAD0 (SymCryptFdefDivisorCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x1403FFFE0 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 SymCryptSizeofDivisorFromDigits()
{
  return SymCryptFdefSizeofDivisorFromDigits();
}
