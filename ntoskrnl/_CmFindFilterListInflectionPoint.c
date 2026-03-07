const wchar_t *__fastcall CmFindFilterListInflectionPoint(wchar_t *Str1, wchar_t *a2, wchar_t *Str2)
{
  const wchar_t *v5; // rdi
  const wchar_t *v6; // rbx
  const wchar_t *v7; // r14
  __int64 v8; // rbp
  const wchar_t *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax

  v5 = Str1;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 && *a2 && *Str1 )
  {
    while ( 1 )
    {
      v6 = 0LL;
      v8 = -1LL;
      do
        ++v8;
      while ( v5[v8] );
      v9 = a2;
      if ( *a2 )
      {
        while ( 1 )
        {
          v10 = -1LL;
          do
            ++v10;
          while ( v9[v10] );
          if ( (_DWORD)v10 == (_DWORD)v8 && !wcsicmp(v9, v5) )
            break;
          v9 += (unsigned int)(v10 + 1);
          if ( !*v9 )
          {
            v6 = 0LL;
            goto LABEL_15;
          }
        }
        v6 = v9;
      }
      if ( v6 )
        break;
LABEL_15:
      if ( !wcsicmp(v5, Str2) )
        v7 = v5;
      v11 = -1LL;
      do
        ++v11;
      while ( v5[v11] );
      v5 += v11 + 1;
      if ( !*v5 )
      {
        if ( v7 )
          return v7;
        return v6;
      }
    }
  }
  return v6;
}
