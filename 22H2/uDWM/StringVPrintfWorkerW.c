/*
 * XREFs of StringVPrintfWorkerW @ 0x180042C94
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180042C3C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18007FA08 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringVPrintfWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_LPCWSTR pszFormat,
        va_list argList)
{
  size_t v5; // rdi
  HRESULT v7; // ebx
  int v8; // eax

  v5 = cchDest - 1;
  v7 = 0;
  v8 = _vsnwprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v8 < 0 || v8 > v5 )
  {
    pszDest[v5] = 0;
    return -2147024774;
  }
  else if ( v8 == v5 )
  {
    pszDest[v5] = 0;
  }
  return v7;
}
