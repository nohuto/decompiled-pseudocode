/*
 * XREFs of StringCopyWorkerW_0 @ 0x1405C8810
 * Callers:
 *     StringCbCatW @ 0x1405C8740 (StringCbCatW.c)
 *     StringCbCopyNW @ 0x1405C87C4 (StringCbCopyNW.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW_0(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  STRSAFE_LPWSTR v5; // r8
  signed __int64 v7; // r9
  wchar_t v8; // cx
  STRSAFE_LPWSTR v9; // rcx
  HRESULT result; // eax

  v5 = pszDest;
  if ( cchDest )
  {
    v7 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !cchToCopy )
        break;
      v8 = *(STRSAFE_LPWSTR)((char *)v5 + v7);
      if ( !v8 )
        break;
      *v5 = v8;
      --cchToCopy;
      ++v5;
      --cchDest;
    }
    while ( cchDest );
  }
  v9 = v5 - 1;
  result = cchDest == 0 ? 0x8007007A : 0;
  if ( cchDest )
    v9 = v5;
  *v9 = 0;
  return result;
}
