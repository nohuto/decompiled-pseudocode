/*
 * XREFs of SymCryptIntBitsizeOfObject @ 0x1403F3738
 * Callers:
 *     SymCryptIntExtendedGcd @ 0x1403F81E4 (SymCryptIntExtendedGcd.c)
 *     SymCryptModExpWindowed @ 0x140403800 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefIntBitsizeOfObject @ 0x1403FFB40 (SymCryptFdefIntBitsizeOfObject.c)
 */

__int64 SymCryptIntBitsizeOfObject()
{
  return SymCryptFdefIntBitsizeOfObject();
}
