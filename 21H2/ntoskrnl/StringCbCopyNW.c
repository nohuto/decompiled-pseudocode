/*
 * XREFs of StringCbCopyNW @ 0x14059D8B0
 * Callers:
 *     SmUniqueIdParseProductName @ 0x14059D4B0 (SmUniqueIdParseProductName.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x14059D910 (StringCopyWorkerW_0.c)
 */

HRESULT __stdcall StringCbCopyNW(STRSAFE_LPWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // r10
  HRESULT v5; // edx
  size_t cchToCopy; // r9

  v4 = cbDest >> 1;
  v5 = 0;
  if ( v4 - 1 > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 >= 0 )
  {
    cchToCopy = cbToCopy >> 1;
    if ( cchToCopy <= 0x7FFFFFFE )
    {
      return StringCopyWorkerW_0(pszDest, v4, (size_t *)pszSrc, pszSrc, cchToCopy);
    }
    else
    {
      v5 = -2147024809;
      *pszDest = 0;
    }
  }
  return v5;
}
