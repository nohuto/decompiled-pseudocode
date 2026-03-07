__int64 __fastcall SmUniqueIdParseProductName(wchar_t *Str, STRSAFE_LPWSTR pszDest, size_t cbDest)
{
  size_t v4; // rbp
  wchar_t *v5; // r12
  wchar_t *v7; // rax
  unsigned int v8; // ebx
  const wchar_t *v9; // rsi
  __int64 v10; // rdi
  const wchar_t *v11; // r8
  wchar_t *v12; // rax
  const wchar_t *v13; // rdi
  __int64 v14; // rax
  const wchar_t *i; // rcx
  wchar_t *v16; // rax

  v4 = (unsigned int)cbDest;
  v5 = pszDest;
  v7 = wcsstr(Str, L"&Ven_");
  v8 = 0;
  if ( !v7 )
    return (unsigned int)-1073700864;
  v9 = v7 + 5;
  v10 = wcschr(v7 + 5, 0x26u) - (v7 + 5);
  if ( (_DWORD)v10 )
  {
    if ( StringCbCopyNW(pszDest, v4, v9, 2LL * (unsigned int)v10) < 0 || StringCbCatW(pszDest, v4, v11) < 0 )
      return (unsigned int)-1073741789;
    v5 = &pszDest[(unsigned int)(v10 + 1)];
    LODWORD(v4) = -2 - 2 * v10 + v4;
  }
  v12 = wcsstr(Str, L"&Prod_");
  if ( !v12 )
    return (unsigned int)-1073700864;
  v13 = v12 + 6;
  v14 = wcschr(v12 + 6, 0x26u) - (v12 + 6);
  if ( (_DWORD)v14 && StringCbCopyNW(v5, (unsigned int)v4, v13, 2LL * (unsigned int)v14) < 0 )
    return (unsigned int)-1073741789;
  for ( i = pszDest; ; i = v16 )
  {
    v16 = wcschr(i, 0x5Fu);
    if ( !v16 )
      break;
    *v16 = 32;
  }
  return v8;
}
