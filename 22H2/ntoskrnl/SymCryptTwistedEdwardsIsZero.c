/*
 * XREFs of SymCryptTwistedEdwardsIsZero @ 0x1403FFE50
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementIsEqual @ 0x1403F9058 (SymCryptModElementIsEqual.c)
 *     SymCryptModElementIsZero @ 0x1403F9070 (SymCryptModElementIsZero.c)
 */

__int64 SymCryptTwistedEdwardsIsZero()
{
  int IsZero; // edi

  IsZero = SymCryptModElementIsZero();
  return IsZero & (unsigned int)SymCryptModElementIsEqual();
}
