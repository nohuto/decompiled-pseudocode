/*
 * XREFs of StringCchPrintfExW @ 0x14066EC40
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14066DCEC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14066E738 (AdtpBuildStagingReasonAuditStringInternal.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     StringExHandleOtherFlagsW @ 0x14055D3D8 (StringExHandleOtherFlagsW.c)
 *     StringVPrintfWorkerW @ 0x14066EE08 (StringVPrintfWorkerW.c)
 */

HRESULT StringCchPrintfExW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        STRSAFE_LPWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        DWORD dwFlags,
        STRSAFE_LPCWSTR pszFormat,
        ...)
{
  HRESULT v9; // ebx
  STRSAFE_LPWSTR v10; // r13
  size_t v11; // r14
  const wchar_t *v12; // r9
  HRESULT v13; // eax
  size_t v14; // rcx
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list argList; // [rsp+C0h] [rbp+78h] BYREF

  va_start(argList, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -2147024809;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -2147024809;
  }
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnda = pszDest;
    v10 = pszDest;
    pcchNewDestLength[0] = cchDest;
    v11 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = &word_14001ECF4;
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
      v9 = -2147024809;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = StringVPrintfWorkerW(pszDest, cchDest, pcchNewDestLength, v12, argList);
      v14 = pcchNewDestLength[0];
      v9 = v13;
      v11 = cchDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
      v10 = &pszDest[v14];
      ppszDestEnda = v10;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
          memset(v10 + 1, (unsigned __int8)dwFlags, 2 * v11 - 2);
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_22:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147024774 : -2147024809;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)ppszDestEnd, &ppszDestEnda, pcchNewDestLength, dwFlags);
      v10 = ppszDestEnda;
      v11 = pcchNewDestLength[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147024774 )
      goto LABEL_22;
  }
  return v9;
}
