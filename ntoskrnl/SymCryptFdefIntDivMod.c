/*
 * XREFs of SymCryptFdefIntDivMod @ 0x1403FD6A8
 * Callers:
 *     SymCryptIntDivMod @ 0x1403F37E0 (SymCryptIntDivMod.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 *     SymCryptFdefRawDivMod @ 0x1403FDD28 (SymCryptFdefRawDivMod.c)
 */

__int64 __fastcall SymCryptFdefIntDivMod(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int v11; // ecx
  unsigned int v12; // ecx

  result = SymCryptFdefRawDivMod((void *)(a1 + 32), (void *)((a4 + 32) & -(__int64)(a4 != 0)), a5, a6);
  if ( a3 )
  {
    result = *(unsigned int *)(a3 + 4);
    v11 = *(_DWORD *)(a1 + 4);
    if ( (unsigned int)result > v11 )
      result = SymCryptWipe(a3 + 4 * (16 * v11 + 8LL), ((unsigned int)result - v11) << 6);
  }
  if ( a4 )
  {
    result = *(unsigned int *)(a4 + 4);
    v12 = *(_DWORD *)(a2 + 4);
    if ( (unsigned int)result > v12 )
      return SymCryptWipe(a4 + 4 * (16 * v12 + 8LL), ((unsigned int)result - v12) << 6);
  }
  return result;
}
