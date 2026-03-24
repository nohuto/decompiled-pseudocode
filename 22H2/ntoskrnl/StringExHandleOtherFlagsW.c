/*
 * XREFs of StringExHandleOtherFlagsW @ 0x14050C2D8
 * Callers:
 *     RtlStringCbPrintfExW @ 0x14024F030 (RtlStringCbPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x14031BC50 (RtlStringCbCopyExW.c)
 *     RtlStringCchCopyExW @ 0x14032E518 (RtlStringCchCopyExW.c)
 *     RtlStringCchCopyNExW @ 0x14032E654 (RtlStringCchCopyNExW.c)
 *     RtlStringCchPrintfExW @ 0x14032EBA4 (RtlStringCchPrintfExW.c)
 *     StringCchPrintfExW @ 0x1405C3720 (StringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

HRESULT __stdcall StringExHandleOtherFlagsW(
        STRSAFE_LPWSTR pszDest,
        size_t cbDest,
        size_t cchOriginalDestLength,
        STRSAFE_LPWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        DWORD dwFlags)
{
  size_t v7; // rdi
  wchar_t *v9; // rax

  v7 = cbDest >> 1;
  if ( cbDest >> 1 && (dwFlags & 0x1000) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = v7;
    *pszDest = 0;
  }
  if ( (dwFlags & 0x400) != 0 )
  {
    memset(pszDest, (unsigned __int8)dwFlags, cbDest);
    if ( (_BYTE)dwFlags )
    {
      if ( !v7 )
        return 0;
      *pcchRemaining = 1LL;
      v9 = &pszDest[v7 - 1];
      *ppszDestEnd = v9;
      *v9 = 0;
    }
    else
    {
      *ppszDestEnd = pszDest;
      *pcchRemaining = v7;
    }
  }
  if ( v7 && (dwFlags & 0x800) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = v7;
    *pszDest = 0;
  }
  return 0;
}
