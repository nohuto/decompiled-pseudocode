__int64 __fastcall FContainCallBackAce(wchar_t *Str1)
{
  unsigned int v1; // edi
  const wchar_t *i; // rbx
  unsigned __int64 v4; // rbp
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v1 = 0;
  for ( i = Str1; *i; ++i )
  {
    v4 = (unsigned __int64)(i - 1);
    if ( !i[1] )
      break;
    if ( !wcsnicmp(i, L"XA", 2uLL)
      || !wcsnicmp(i, L"XD", 2uLL)
      || !wcsnicmp(i, L"RA", 2uLL)
      || !wcsnicmp(i, L"SP", 2uLL)
      || !wcsnicmp(i, L"XU", 2uLL)
      || !wcsnicmp(i, L"ZA", 2uLL)
      || !wcsnicmp(i, L"FL", 2uLL) )
    {
      v6 = 1;
      if ( v4 >= (unsigned __int64)Str1 )
      {
        v7 = 1LL;
        do
        {
          if ( i[-v7] != 32 )
            break;
          v7 = ++v6;
        }
        while ( &i[-v6] >= Str1 );
      }
      if ( i[-v6] == 40 )
      {
        LODWORD(v8) = 2;
        if ( *(_WORD *)(v4 + 6) == 32 )
        {
          do
            v8 = (unsigned int)(v8 + 1);
          while ( i[v8] == 32 );
        }
        if ( i[(unsigned int)v8] == 59 )
          return 1;
      }
    }
  }
  return v1;
}
