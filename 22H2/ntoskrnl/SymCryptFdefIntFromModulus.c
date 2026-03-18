/*
 * XREFs of SymCryptFdefIntFromModulus @ 0x1404037E8
 * Callers:
 *     SymCryptIntFromModulus @ 0x1403F8D5C (SymCryptIntFromModulus.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x140402D70 (SymCryptFdefIntFromDivisor.c)
 */

__int64 __fastcall SymCryptFdefIntFromModulus(__int64 a1)
{
  return SymCryptFdefIntFromDivisor(a1 + 64);
}
