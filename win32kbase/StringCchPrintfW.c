/*
 * XREFs of StringCchPrintfW @ 0x1C008D258
 * Callers:
 *     WmsgpConnect @ 0x1C0301300 (WmsgpConnect.c)
 * Callees:
 *     _vsnwprintf @ 0x1C00DAA34 (_vsnwprintf.c)
 */

HRESULT StringCchPrintfW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  size_t v4; // rsi
  HRESULT v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    v4 = cchDest - 1;
    v5 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147024774;
    }
    else if ( v6 != v4 )
    {
      return v5;
    }
    pszDest[v4] = 0;
    return v5;
  }
  v5 = -2147024809;
  if ( cchDest )
    *pszDest = 0;
  return v5;
}
