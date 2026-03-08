/*
 * XREFs of SymCryptFdefIntBitsizeOfObject @ 0x1403FFB40
 * Callers:
 *     SymCryptIntBitsizeOfObject @ 0x1403F3738 (SymCryptIntBitsizeOfObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntBitsizeOfObject(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 4) << 9);
}
