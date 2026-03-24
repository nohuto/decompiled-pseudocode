/*
 * XREFs of RtlpImageDirectoryEntryToData64 @ 0x1402533E0
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140253308 (RtlpImageDirectoryEntryToDataEx.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x1402A8EBC (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData64(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v9; // rax

  if ( (unsigned int)a3 >= *(_DWORD *)(a5 + 132) )
    return 3221225485LL;
  v6 = a3;
  v7 = *(unsigned int *)(a5 + 8LL * a3 + 136);
  if ( (_DWORD)v7 )
  {
    if ( a1 < 0x7FFFFFFEFFFFLL && a1 + v7 >= 0x7FFFFFFEFFFFLL )
      return 3221225485LL;
    *a4 = *(_DWORD *)(a5 + 8 * v6 + 140);
    if ( a2 || (unsigned int)v7 < *(_DWORD *)(a5 + 84) )
    {
      *a6 = a1 + v7;
    }
    else
    {
      v9 = RtlAddressInSectionTable(a5, a1);
      *a6 = v9;
      if ( !v9 )
        return 3221225485LL;
    }
    return 0LL;
  }
  return 3221225474LL;
}
