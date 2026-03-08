/*
 * XREFs of Xp10SortHuffmanSymbols @ 0x1409C55EC
 * Callers:
 *     Xp10ReadAndDecodeHuffmanTables @ 0x1409C4774 (Xp10ReadAndDecodeHuffmanTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10SortHuffmanSymbols(__int64 a1, __int64 a2, __int16 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r10d
  unsigned int v7; // r11d
  __int16 v8; // r8
  __int16 i; // dx
  __int64 v10; // rax

  v5 = a5;
  v7 = 0;
  if ( a5 >= a4 )
  {
    v8 = a3 - 1;
    do
    {
      for ( i = v8; i >= 0; --i )
      {
        if ( *(unsigned __int8 *)((unsigned __int16)i + a1) == v5 )
        {
          v10 = v7++;
          *(_WORD *)(a2 + 2 * v10) = i;
        }
      }
      --v5;
    }
    while ( v5 >= a4 );
  }
  return v7;
}
