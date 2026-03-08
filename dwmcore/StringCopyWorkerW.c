/*
 * XREFs of StringCopyWorkerW @ 0x1800AABF0
 * Callers:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AABC8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800AC24C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  STRSAFE_LPWSTR v5; // r8
  __int64 v6; // rax
  signed __int64 v7; // r9
  wchar_t v8; // cx
  STRSAFE_LPWSTR v9; // rcx
  HRESULT result; // eax

  v5 = pszDest;
  if ( cchDest )
  {
    v6 = 2147483646LL;
    v7 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !v6 )
        break;
      v8 = *(STRSAFE_LPWSTR)((char *)v5 + v7);
      if ( !v8 )
        break;
      *v5 = v8;
      --v6;
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
