/*
 * XREFs of SymCryptIntBitsizeOfObject @ 0x1403F8C58
 * Callers:
 *     SymCryptIntExtendedGcd @ 0x1403FD704 (SymCryptIntExtendedGcd.c)
 *     SymCryptModExpWindowed @ 0x140408D20 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefIntBitsizeOfObject @ 0x140405060 (SymCryptFdefIntBitsizeOfObject.c)
 */

__int64 SymCryptIntBitsizeOfObject()
{
  return SymCryptFdefIntBitsizeOfObject();
}
