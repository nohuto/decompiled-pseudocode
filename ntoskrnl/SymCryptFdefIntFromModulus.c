/*
 * XREFs of SymCryptFdefIntFromModulus @ 0x1403FE2C8
 * Callers:
 *     SymCryptIntFromModulus @ 0x1403F383C (SymCryptIntFromModulus.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x1403FD850 (SymCryptFdefIntFromDivisor.c)
 */

__int64 __fastcall SymCryptFdefIntFromModulus(__int64 a1)
{
  return SymCryptFdefIntFromDivisor(a1 + 64);
}
