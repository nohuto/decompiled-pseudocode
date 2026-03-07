struct _D3DKMT_DISPLAYMODE *__fastcall MODE_UNION_LIST::SearchIndexdModeList(
        MODE_UNION_LIST *this,
        const struct _D3DKMT_DISPLAYMODE *a2,
        unsigned int *a3)
{
  unsigned int v3; // r10d
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r11d
  int v11; // edi
  __int64 v12; // r10
  int v13; // edx
  int v14; // eax
  int v15; // r11d
  int v16; // ecx

  v3 = *((_DWORD *)this + 4);
  if ( v3
    && (v6 = *((_QWORD *)this + 1),
        v7 = *((_QWORD *)this + 4),
        (int)CompareDisplayMode(a2, v6 + 44LL * *(unsigned int *)(v7 + 4LL * (v3 - 1)), a3, 0LL) <= 0) )
  {
    v11 = v9;
    v12 = (unsigned int)v9;
    v13 = v9;
    if ( v10 >= 0 )
    {
      do
      {
        v14 = CompareDisplayMode(a2, v6 + 44LL * *(unsigned int *)(v7 + 4LL * ((v10 + v11) >> 1)), v8, v9);
        v13 = v14;
        if ( !v14 )
          break;
        v16 = v12 - 1;
        if ( v14 >= 0 )
          v16 = v15;
        v10 = v16;
        if ( v14 >= 0 )
          v11 = v12 + 1;
      }
      while ( v11 <= v16 );
    }
    if ( v13 > 0 )
      v12 = (unsigned int)(v12 + 1);
    *a3 = v12;
    if ( !v13 )
      return (struct _D3DKMT_DISPLAYMODE *)(v6 + 44LL * *(unsigned int *)(v7 + 4 * v12));
    return (struct _D3DKMT_DISPLAYMODE *)v9;
  }
  else
  {
    *a3 = v3;
    return 0LL;
  }
}
