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
