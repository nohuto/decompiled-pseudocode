/*
 * XREFs of SymCryptIntFromDivisor @ 0x1403F8D44
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F6F68 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x1403FD704 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x140402D70 (SymCryptFdefIntFromDivisor.c)
 */

__int64 SymCryptIntFromDivisor()
{
  return SymCryptFdefIntFromDivisor();
}
