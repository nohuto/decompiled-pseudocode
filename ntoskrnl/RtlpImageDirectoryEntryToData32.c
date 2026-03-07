__int64 __fastcall RtlpImageDirectoryEntryToData32(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5,
        unsigned __int64 *a6)
{
  __int64 v7; // r10
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax

  if ( (unsigned int)a3 >= *(_DWORD *)(a5 + 116) )
    return 3221225485LL;
  v7 = a3;
  v8 = *(unsigned int *)(a5 + 8LL * a3 + 120);
  if ( !(_DWORD)v8 )
    return 3221225474LL;
  v9 = v8 + a1;
  if ( a1 <= 0x7FFFFFFEFFFFLL && (v9 - 1 < a1 || v9 - 1 > 0x7FFFFFFEFFFFLL) )
    return 3221225485LL;
  *a4 = *(_DWORD *)(a5 + 8 * v7 + 124);
  if ( a2 || (unsigned int)v8 < *(_DWORD *)(a5 + 84) )
  {
    *a6 = v9;
    return 0LL;
  }
  else
  {
    v10 = RtlAddressInSectionTable(a5, a1, v8);
    *a6 = v10;
    return v10 == 0 ? 0xC000000D : 0;
  }
}
