/*
 * XREFs of StringCchCopyW @ 0x1C027BA40
 * Callers:
 *     EngGetFilePath @ 0x1C027B660 (EngGetFilePath.c)
 *     GetNlsTablePath @ 0x1C027B834 (GetNlsTablePath.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1C027BA78 (StringCopyWorkerW.c)
 */

HRESULT __stdcall StringCchCopyW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  HRESULT result; // eax
  size_t v4; // [rsp+20h] [rbp-18h]

  if ( cchDest - 1 <= 0x7FFFFFFE )
    return StringCopyWorkerW(pszDest, cchDest, (size_t *)pszSrc, pszSrc, v4);
  result = -2147024809;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
