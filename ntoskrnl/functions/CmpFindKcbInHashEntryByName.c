__int64 __fastcall CmpFindKcbInHashEntryByName(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 i; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int16 v12; // ax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  v13 = 0LL;
  v6 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1648)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
    {
      v9 = *(_QWORD *)(i + 64);
      if ( (*(_DWORD *)v9 & 1) != 0 )
      {
        v10 = CmpCompareCompressedName(a4, v9 + 26, *(unsigned __int16 *)(v9 + 24), 2LL);
      }
      else
      {
        v12 = *(_WORD *)(v9 + 24);
        *((_QWORD *)&v13 + 1) = v9 + 26;
        LOWORD(v13) = v12;
        WORD1(v13) = v12;
        v10 = CmpCompareUnicodeString(a4, &v13, 2LL);
      }
      if ( !v10 )
        return i - 16;
    }
  }
  return v6;
}
