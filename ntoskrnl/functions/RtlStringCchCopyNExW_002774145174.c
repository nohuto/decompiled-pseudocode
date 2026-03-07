NTSTATUS __stdcall RtlStringCchCopyNExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  NTSTRSAFE_PWSTR v10; // rbp
  size_t v11; // r14
  NTSTATUS v12; // eax
  size_t v13; // rcx
  STRSAFE_LPWSTR v15; // [rsp+30h] [rbp-28h] BYREF
  size_t pcchNewDestLength[4]; // [rsp+38h] [rbp-20h] BYREF

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
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
    return v9;
  }
  v15 = pszDest;
  v10 = pszDest;
  pcchNewDestLength[0] = cchDest;
  v11 = cchDest;
  if ( cchToCopy >= 0x7FFFFFFF )
    goto LABEL_23;
  if ( (dwFlags & 0x100) != 0 && !pszSrc )
  {
    pszSrc = (STRSAFE_PCNZWCH)&cchOriginalDestLength;
    cchToCopy = 0LL;
  }
  v9 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
LABEL_23:
    v9 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else if ( cchDest )
  {
    pcchNewDestLength[0] = 0LL;
    v12 = RtlStringCopyWorkerW_0(pszDest, cchDest, pcchNewDestLength, pszSrc, cchToCopy);
    v13 = pcchNewDestLength[0];
    v9 = v12;
    v11 = cchDest - pcchNewDestLength[0];
    pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
    v10 = &pszDest[v13];
    v15 = v10;
    if ( v12 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 && v11 > 1 )
      {
        pszSrc = (STRSAFE_PCNZWCH)(2 * v11);
        if ( 2 * v11 > 2 )
          memset(v10 + 1, (unsigned __int8)dwFlags, (size_t)(pszSrc - 1));
      }
LABEL_11:
      if ( v9 >= 0 )
      {
LABEL_12:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return v9;
      }
    }
  }
  else
  {
    if ( !cchToCopy || !*pszSrc )
      goto LABEL_11;
    if ( pszDest )
    {
      v9 = -2147483643;
      goto LABEL_11;
    }
    v9 = -1073741811;
  }
  if ( (dwFlags & 0x1C00) != 0 && cchDest )
  {
    StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)pszSrc, &v15, pcchNewDestLength, dwFlags);
    v10 = v15;
    v11 = pcchNewDestLength[0];
  }
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    goto LABEL_12;
  return v9;
}
