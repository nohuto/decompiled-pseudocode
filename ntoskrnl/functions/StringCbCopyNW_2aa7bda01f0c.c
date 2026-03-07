HRESULT __stdcall StringCbCopyNW(STRSAFE_LPWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // rdx
  HRESULT result; // eax
  size_t cchToCopy; // r9

  v4 = cbDest >> 1;
  if ( v4 - 1 > 0x7FFFFFFE )
    return -2147024809;
  cchToCopy = cbToCopy >> 1;
  if ( cchToCopy <= 0x7FFFFFFE )
    return StringCopyWorkerW_0(pszDest, v4, (size_t *)pszSrc, pszSrc, cchToCopy);
  result = -2147024809;
  *pszDest = 0;
  return result;
}
