NTSTATUS RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  NTSTATUS v9; // edx
  size_t v10; // rbx
  NTSTRSAFE_PWSTR v11; // rbp
  const wchar_t *v12; // r8
  NTSTATUS v13; // r14d
  size_t v14; // rsi
  int v15; // eax
  NTSTATUS result; // eax
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-58h] BYREF
  size_t v18[2]; // [rsp+38h] [rbp-50h] BYREF
  va_list Args; // [rsp+C0h] [rbp+38h] BYREF

  va_start(Args, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) == 0 )
  {
    if ( cchDest - 1 <= 0x7FFFFFFE )
      goto LABEL_3;
    goto LABEL_22;
  }
  if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
LABEL_22:
    v9 = -1073741811;
LABEL_3:
  if ( v9 >= 0 )
  {
    v10 = cchDest;
    v11 = pszDest;
    v18[0] = cchDest;
    ppszDestEnda = pszDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (const wchar_t *)&cchOriginalDestLength;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v13 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v13 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      v18[0] = 0LL;
      v14 = cchDest - 1;
      v15 = vsnwprintf(pszDest, cchDest - 1, v12, Args);
      if ( v15 >= 0 )
      {
        if ( v15 == v14 )
        {
          v11 = &pszDest[v14];
          *v11 = 0;
          v10 = 1LL;
          goto LABEL_12;
        }
        if ( v15 <= v14 )
        {
          v10 = cchDest - v15;
          v11 = &pszDest[v15];
LABEL_12:
          if ( (dwFlags & 0x200) != 0 && v10 > 1 )
            RtlStringExHandleFillBehindNullW(v11, 2 * v10, dwFlags);
          goto LABEL_13;
        }
      }
      v11 = &pszDest[v14];
      v10 = 1LL;
      *v11 = 0;
      v18[0] = 1LL;
      v13 = -2147483643;
      ppszDestEnda = v11;
    }
    else
    {
      if ( !*v12 )
      {
LABEL_13:
        if ( ppszDestEnd )
          *ppszDestEnd = v11;
        result = v13;
        if ( pcchRemaining )
          *pcchRemaining = v10;
        return result;
      }
      v13 = -2147483643;
      if ( !pszDest )
        v13 = -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)v12, &ppszDestEnda, v18, dwFlags);
      v11 = ppszDestEnda;
      v10 = v18[0];
    }
    if ( (int)(v13 + 0x80000000) >= 0 && v13 != -2147483643 )
      return v13;
    goto LABEL_13;
  }
  result = v9;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
