/*
 * XREFs of SymCryptFdefIntBitsizeOfObject @ 0x14040D08C
 * Callers:
 *     SymCryptIntBitsizeOfObject @ 0x140400B2C (SymCryptIntBitsizeOfObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntBitsizeOfObject(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 4) << 9);
}
