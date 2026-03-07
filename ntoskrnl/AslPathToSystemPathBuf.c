__int64 __fastcall AslPathToSystemPathBuf(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v6; // r8
  NTSTRSAFE_PWSTR v7; // rdx
  wchar_t v8; // ax
  NTSTRSAFE_PWSTR v9; // rax
  signed int v10; // eax
  NTSTATUS v11; // edi

  memset(pszDest, 0, 2 * cchDest);
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v10 = -1073741811;
    if ( cchDest )
    {
      *pszDest = 0;
      v11 = -1073741811;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = cchDest;
    v7 = pszDest;
    do
    {
      if ( !(2147483646 - cchDest + v6) )
        break;
      v8 = *(NTSTRSAFE_PWSTR)((char *)v7 + (char *)L"\\SystemRoot" - (char *)pszDest);
      if ( !v8 )
        break;
      *v7++ = v8;
      --v6;
    }
    while ( v6 );
    v9 = v7 - 1;
    if ( v6 )
      v9 = v7;
    *v9 = 0;
    v10 = v6 == 0 ? 0x80000005 : 0;
  }
  v11 = v10;
  if ( v10 < 0 )
  {
LABEL_10:
    AslLogCallPrintf(1LL);
    return (unsigned int)v11;
  }
  v11 = RtlStringCchCatW(pszDest, cchDest, pszSrc);
  if ( v11 < 0 )
  {
    AslLogCallPrintf(1LL);
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
