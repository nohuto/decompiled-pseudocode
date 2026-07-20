/*
 * XREFs of StringCchCatW @ 0x140010098
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x14000FCC0 (GetFinalPathNameByHandleW.c)
 * Callees:
 *     StringCopyWorkerW @ 0x140010168 (StringCopyWorkerW.c)
 */

HRESULT __stdcall StringCchCatW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  HRESULT v3; // r9d
  size_t v5; // rcx
  STRSAFE_LPWSTR i; // rax
  size_t v7; // rax
  size_t v9; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
    goto LABEL_9;
  v5 = cchDest;
  for ( i = pszDest; v5; --v5 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v3 = v5 == 0 ? 0x80070057 : 0;
  if ( v5 )
    v7 = cchDest - v5;
  else
LABEL_9:
    v7 = 0LL;
  if ( v3 >= 0 )
    return StringCopyWorkerW(&pszDest[v7], cchDest - v7, (size_t *)pszSrc, pszSrc, v9);
  return v3;
}
