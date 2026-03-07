__int64 __fastcall RtlpImageDirectoryEntryToData64(
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
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  if ( (unsigned int)a3 >= *(_DWORD *)(a5 + 132) )
    return 3221225485LL;
  v7 = a3;
  v8 = *(unsigned int *)(a5 + 8LL * a3 + 136);
  if ( !(_DWORD)v8 )
    return 3221225474LL;
  if ( a1 > 0x7FFFFFFEFFFFLL )
  {
    v9 = a1 + v8;
    goto LABEL_5;
  }
  v9 = v8 + a1;
  v11 = v8 + a1 - 1;
  if ( v11 < a1 || v11 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
LABEL_5:
  *a4 = *(_DWORD *)(a5 + 8 * v7 + 140);
  if ( a2 || (unsigned int)v8 < *(_DWORD *)(a5 + 84) )
  {
    *a6 = v9;
    return 0LL;
  }
  else
  {
    v12 = RtlAddressInSectionTable(a5, a1, v8);
    *a6 = v12;
    return v12 == 0 ? 0xC000000D : 0;
  }
}
