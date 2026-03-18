/*
 * XREFs of StringCchCatW @ 0x1C027B9CC
 * Callers:
 *     GetNlsTablePath @ 0x1C027B834 (GetNlsTablePath.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1C027BA78 (StringCopyWorkerW.c)
 */

HRESULT __stdcall StringCchCatW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  STRSAFE_LPWSTR v3; // rax
  __int64 v4; // r9
  HRESULT result; // eax
  size_t v6; // [rsp+20h] [rbp-18h]

  v3 = pszDest;
  v4 = 260LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
    return StringCopyWorkerW(
             (STRSAFE_LPWSTR)((char *)pszDest + ((2 * (260 - v4)) & -(__int64)(v4 != 0))),
             ((v4 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) + 260,
             (size_t *)pszSrc,
             pszSrc,
             v6);
  return result;
}
