/*
 * XREFs of LdrpSectionTableFromVirtualAddress @ 0x140787C20
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1406DFE4C (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x1407EB258 (LdrpResGetResourceDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpSectionTableFromVirtualAddress(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 v7; // r10
  int v8; // r9d
  unsigned int v9; // ecx

  if ( a3 )
  {
    v7 = *(unsigned __int16 *)(a3 + 20) + a3 + 24;
    if ( v7 )
    {
      v8 = 0;
      if ( *(_WORD *)(a3 + 6) )
      {
        while ( !a6 || v7 + 40 <= a2 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          v9 = *(_DWORD *)(v7 + 12);
          if ( a5 == v9 || a5 > v9 && a5 < *(_DWORD *)(v7 + 16) + v9 )
            return v7;
          ++v8;
          v7 += 40LL;
          if ( v8 >= *(unsigned __int16 *)(a3 + 6) )
            return 0LL;
        }
      }
    }
  }
  return 0LL;
}
