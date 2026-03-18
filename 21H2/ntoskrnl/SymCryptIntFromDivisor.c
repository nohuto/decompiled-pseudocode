/*
 * XREFs of SymCryptIntFromDivisor @ 0x140400C18
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403FEE6C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x1404055F4 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x14040ACE0 (SymCryptFdefIntFromDivisor.c)
 */

__int64 SymCryptIntFromDivisor()
{
  return SymCryptFdefIntFromDivisor();
}
