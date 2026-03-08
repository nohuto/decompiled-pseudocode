/*
 * XREFs of RtlStringCchPrintfExW @ 0x1C001404C
 * Callers:
 *     HUBPDO_GetLocationString @ 0x1C001B020 (HUBPDO_GetLocationString.c)
 * Callees:
 *     memset @ 0x1C0044FC0 (memset.c)
 */

NTSTATUS RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  NTSTATUS v9; // edi
  NTSTRSAFE_PWSTR v10; // r15
  size_t v11; // r14
  NTSTRSAFE_PCWSTR v12; // r8
  size_t v13; // rbp
  size_t v14; // rbp
  int v15; // eax
  va_list Args; // [rsp+B0h] [rbp+38h] BYREF

  va_start(Args, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 )
  {
    v10 = pszDest;
    v11 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (NTSTRSAFE_PCWSTR)&unk_1C0062088;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
LABEL_17:
      if ( (dwFlags & 0x1C00) == 0 || !cchDest )
        goto LABEL_28;
      v13 = (2 * cchDest) >> 1;
      if ( v13 && (dwFlags & 0x1000) != 0 )
      {
        v10 = pszDest;
        *pszDest = 0;
        v11 = (2 * cchDest) >> 1;
      }
      if ( (dwFlags & 0x400) != 0 )
      {
        memset(pszDest, (unsigned __int8)dwFlags, 2 * cchDest);
        if ( (_BYTE)dwFlags )
        {
          if ( !v13 )
            goto LABEL_28;
          v11 = 1LL;
          v10 = &pszDest[v13 - 1];
          *v10 = 0;
LABEL_26:
          if ( (dwFlags & 0x800) != 0 )
          {
            v10 = pszDest;
            *pszDest = 0;
            v11 = (2 * cchDest) >> 1;
          }
LABEL_28:
          if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147483643 )
            return v9;
          goto LABEL_30;
        }
        v10 = pszDest;
        v11 = (2 * cchDest) >> 1;
      }
      if ( !v13 )
        goto LABEL_28;
      goto LABEL_26;
    }
    if ( !cchDest )
    {
      if ( *v12 )
      {
        v9 = pszDest != 0LL ? -2147483643 : -1073741811;
        goto LABEL_17;
      }
LABEL_30:
      if ( ppszDestEnd )
        *ppszDestEnd = v10;
      if ( pcchRemaining )
        *pcchRemaining = v11;
      return v9;
    }
    v14 = cchDest - 1;
    v15 = _vsnwprintf(pszDest, cchDest - 1, v12, Args);
    if ( v15 < 0 || v15 > v14 )
    {
      v9 = -2147483643;
    }
    else if ( v15 != v14 )
    {
      v14 = v15;
LABEL_43:
      v11 = cchDest - v14;
      v10 = &pszDest[v14];
      if ( v9 < 0 )
        goto LABEL_17;
      if ( (dwFlags & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
        memset(v10 + 1, (unsigned __int8)dwFlags, 2 * v11 - 2);
      goto LABEL_30;
    }
    pszDest[v14] = 0;
    goto LABEL_43;
  }
  if ( cchDest )
    *pszDest = 0;
  return v9;
}
