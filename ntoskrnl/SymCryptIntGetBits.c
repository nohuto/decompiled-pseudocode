/*
 * XREFs of SymCryptIntGetBits @ 0x1403F386C
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptModExpWindowed @ 0x140403800 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefIntGetBits @ 0x1403FD878 (SymCryptFdefIntGetBits.c)
 */

__int64 SymCryptIntGetBits()
{
  return SymCryptFdefIntGetBits();
}
