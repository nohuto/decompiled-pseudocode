/*
 * XREFs of SymCryptFdefIntFromModulus @ 0x14040B750
 * Callers:
 *     SymCryptIntFromModulus @ 0x140400C30 (SymCryptIntFromModulus.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x14040ACE0 (SymCryptFdefIntFromDivisor.c)
 */

__int64 __fastcall SymCryptFdefIntFromModulus(__int64 a1)
{
  return SymCryptFdefIntFromDivisor(a1 + 64);
}
