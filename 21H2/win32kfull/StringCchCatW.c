/*
 * XREFs of StringCchCatW @ 0x1C027DE58
 * Callers:
 *     GetNlsTablePath @ 0x1C027DCC4 (GetNlsTablePath.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1C027DF08 (StringCopyWorkerW.c)
 */

HRESULT __stdcall StringCchCatW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  __int64 v4; // rdx
  STRSAFE_LPWSTR v5; // rax
  HRESULT result; // eax
  __int64 v7; // rcx
  size_t v8; // [rsp+20h] [rbp-18h]

  v4 = 260LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
    v7 = 260 - v4;
  else
    v7 = 0LL;
  if ( v4 )
    return StringCopyWorkerW(&pszDest[v7], 260 - v7, (size_t *)pszSrc, pszSrc, v8);
  return result;
}
