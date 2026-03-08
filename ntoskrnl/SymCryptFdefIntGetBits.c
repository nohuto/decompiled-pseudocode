/*
 * XREFs of SymCryptFdefIntGetBits @ 0x1403FD878
 * Callers:
 *     SymCryptIntGetBits @ 0x1403F386C (SymCryptIntGetBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntGetBits(__int64 a1, unsigned int a2, char a3)
{
  int v4; // eax
  unsigned int v5; // ecx

  v4 = *(_DWORD *)(a1 + 4 * ((unsigned __int64)a2 >> 5) + 32) >> (a2 & 0x1F);
  if ( (a2 & 0x1F) != 0 )
  {
    v5 = (a2 >> 5) + 1;
    if ( v5 < 16 * *(_DWORD *)(a1 + 4) )
      v4 |= *(_DWORD *)(a1 + 4LL * v5 + 32) << (32 - (a2 & 0x1F));
  }
  return (0xFFFFFFFF >> (32 - a3)) & v4;
}
