/*
 * XREFs of SymCryptFdefIntGetBit @ 0x140402D7C
 * Callers:
 *     SymCryptIntGetBit @ 0x1403F8D74 (SymCryptIntGetBit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntGetBit(__int64 a1, unsigned int a2)
{
  return (*(_DWORD *)(a1 + 4 * ((unsigned __int64)a2 >> 5) + 32) >> (a2 & 0x1F)) & 1;
}
