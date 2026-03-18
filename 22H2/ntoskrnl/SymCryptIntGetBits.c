/*
 * XREFs of SymCryptIntGetBits @ 0x1403F8D8C
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F8438 (SymCryptEckeySetValue.c)
 *     SymCryptModExpWindowed @ 0x140408D20 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefIntGetBits @ 0x140402D98 (SymCryptFdefIntGetBits.c)
 */

__int64 SymCryptIntGetBits()
{
  return SymCryptFdefIntGetBits();
}
