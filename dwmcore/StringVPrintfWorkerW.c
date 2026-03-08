/*
 * XREFs of StringVPrintfWorkerW @ 0x1800AE294
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800AE258 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x180197060 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x18010F5C0 (_vsnwprintf.c)
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
  v8 = vsnwprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v8 < 0 )
    goto LABEL_6;
  if ( v8 == v5 )
  {
    pszDest[v5] = 0;
    return v7;
  }
  if ( v8 > v5 )
  {
LABEL_6:
    pszDest[v5] = 0;
    return -2147024774;
  }
  return v7;
}
