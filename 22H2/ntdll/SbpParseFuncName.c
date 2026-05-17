/*
 * XREFs of SbpParseFuncName @ 0x1801139B0
 * Callers:
 *     SbpResolveBasedOnName @ 0x180113A48 (SbpResolveBasedOnName.c)
 * Callees:
 *     StringCchCopyW @ 0x1800DDF3C (StringCchCopyW.c)
 *     StringCchCopyNW @ 0x180113B04 (StringCchCopyNW.c)
 */

__int64 __fastcall SbpParseFuncName(wchar_t *pszSrc, STRSAFE_LPWSTR pszDest, __int64 a3, wchar_t *a4)
{
  wchar_t v4; // ax
  STRSAFE_PCNZWCH v5; // r11
  unsigned int v8; // ebx
  __int64 v9; // r11

  v4 = *pszSrc;
  v5 = pszSrc;
  v8 = 0;
  while ( v4 )
  {
    if ( v4 == 33 )
    {
      if ( StringCchCopyNW(pszDest, (size_t)pszDest, pszSrc, v5 - pszSrc) >= 0
        && StringCchCopyW(a4, 0x400uLL, (STRSAFE_LPCWSTR)(v9 + 2)) >= 0 )
      {
        return 1;
      }
      break;
    }
    v4 = *++v5;
  }
  if ( pszDest )
    *pszDest = 0;
  if ( a4 )
    *a4 = 0;
  return v8;
}
