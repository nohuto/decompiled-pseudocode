/*
 * XREFs of SymCryptTwistedEdwardsIsZero @ 0x1403FA930
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementIsEqual @ 0x1403F3B38 (SymCryptModElementIsEqual.c)
 *     SymCryptModElementIsZero @ 0x1403F3B50 (SymCryptModElementIsZero.c)
 */

__int64 SymCryptTwistedEdwardsIsZero()
{
  int IsZero; // edi

  IsZero = SymCryptModElementIsZero();
  return IsZero & (unsigned int)SymCryptModElementIsEqual();
}
