/*
 * XREFs of SymCryptTwistedEdwardsIsZero @ 0x140407D90
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementIsEqual @ 0x140400F98 (SymCryptModElementIsEqual.c)
 *     SymCryptModElementIsZero @ 0x140400FB0 (SymCryptModElementIsZero.c)
 */

__int64 SymCryptTwistedEdwardsIsZero()
{
  int IsZero; // edi

  IsZero = SymCryptModElementIsZero();
  return IsZero & (unsigned int)SymCryptModElementIsEqual();
}
