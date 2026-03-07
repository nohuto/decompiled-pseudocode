__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned __int64 a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  _DWORD *v4; // rdi
  unsigned __int64 *v5; // r13
  unsigned int *v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  unsigned __int64 v9; // r14
  unsigned int *v10; // rcx
  __int64 v11; // r12
  BOOL v12; // eax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int16 v15; // ax
  unsigned int v16; // r8d
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  unsigned int v19; // r8d
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rax
  __int64 v25; // [rsp+28h] [rbp-40h] BYREF
  __int64 v26; // [rsp+30h] [rbp-38h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  LOBYTE(a2) = 1;
  v26 = RtlImageDirectoryEntryToData(a1, (int)a2, 2, (int)&v25);
  if ( !v26 )
    return 3221225609LL;
  v25 = 0LL;
  result = LdrpGetImageSize(v7, &v25);
  if ( (int)result >= 0 )
  {
    v9 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
    v10 = v6 + 4;
    if ( (unsigned __int64)v6 < (v7 & 0xFFFFFFFFFFFFFFFCuLL) )
      return 3221225595LL;
    if ( v10 < v6 )
      return 3221225595LL;
    v11 = v25;
    if ( v25 && (unsigned __int64)v10 > v9 + v25 )
    {
      return 3221225595LL;
    }
    else
    {
      v12 = 0;
      if ( (v7 & 3) != 0 )
      {
        v12 = (v7 & 1) != 0;
        v7 &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( v12 )
      {
        v13 = RtlImageNtHeader(v7);
        v14 = v13;
        if ( !v13 )
          return 3221225609LL;
        v15 = *(_WORD *)(v13 + 24);
        if ( v15 == 267 )
        {
          v16 = *(_DWORD *)(v14 + 136);
        }
        else if ( v15 == 523 )
        {
          v16 = *(_DWORD *)(v14 + 152);
        }
        else
        {
          v16 = 0;
        }
        if ( !v16 )
          return 3221225609LL;
        v17 = v7 + v16 - v26;
        v18 = RtlSectionTableFromVirtualAddress(v14, v7, v16);
        if ( !v18 )
          return 3221225609LL;
        v19 = *v6;
        if ( *v6 > *(_DWORD *)(v18 + 8) )
        {
          LODWORD(v25) = *(_DWORD *)(v18 + 12);
          v22 = RtlSectionTableFromVirtualAddress(v14, v7, v19);
          v23 = v22;
          if ( !v22 )
            return 3221225609LL;
          v24 = RtlAddressInSectionTable(v14, v7, *(_DWORD *)(v22 + 12));
          v17 += v26 + *(unsigned int *)(v23 + 12) - (unsigned __int64)(unsigned int)v25 - v24;
          v5 = a3;
        }
        v4 = a4;
      }
      else
      {
        v17 = 0LL;
      }
      if ( v5 )
      {
        v20 = v7 + *v6 - v17;
        v21 = v20 + v6[1];
        if ( v20 < v9 || v21 < v20 || v11 && v21 > v9 + v11 )
          return 3221225595LL;
        *v5 = v20;
      }
      if ( v4 )
        *v4 = v6[1];
      return 0LL;
    }
  }
  return result;
}
