/*
 * XREFs of SymCryptIntFromDivisor @ 0x1403F3824
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F1A48 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x1403F81E4 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x1403FD850 (SymCryptFdefIntFromDivisor.c)
 */

__int64 SymCryptIntFromDivisor()
{
  return SymCryptFdefIntFromDivisor();
}
