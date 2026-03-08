/*
 * XREFs of SymCryptFdefIntCopyMixedSize @ 0x1403FFC50
 * Callers:
 *     SymCryptIntCopyMixedSize @ 0x1403F37B0 (SymCryptIntCopyMixedSize.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall SymCryptFdefIntCopyMixedSize(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ebp
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ecx
  __int64 v9; // rdx
  int v10; // ecx
  _QWORD *v11; // rax

  v2 = 0;
  if ( a1 != a2 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    if ( v5 >= *(_DWORD *)(a2 + 4) )
      v5 = *(_DWORD *)(a2 + 4);
    memmove((void *)(a2 + 32), (const void *)(a1 + 32), v5 << 6);
    v6 = *(_DWORD *)(a2 + 4);
    v7 = 16 * v5;
    if ( v6 > v5 )
      SymCryptWipe(a2 + 4 * (v7 + 8LL), (v6 - v5) << 6);
    v8 = *(_DWORD *)(a1 + 4);
    if ( v8 > v5 )
    {
      v9 = 0LL;
      v10 = (8 * (v8 - v5)) & 0x1FFFFFFF;
      v11 = (_QWORD *)(a1 + 4 * (v7 + 8LL));
      if ( v10 )
      {
        do
        {
          v9 |= *v11++;
          --v10;
        }
        while ( v10 );
        if ( v9 )
          return 32781;
      }
    }
  }
  return v2;
}
