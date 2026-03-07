HRESULT __stdcall StringCopyWorkerW_0(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  STRSAFE_LPWSTR v5; // r10
  size_t v6; // r11
  __int64 v7; // rax
  signed __int64 v8; // r9
  wchar_t v9; // cx
  STRSAFE_LPWSTR v10; // rcx
  HRESULT result; // eax
  size_t v12; // rcx

  v5 = pszDest;
  v6 = 0LL;
  if ( cchDest )
  {
    v7 = 2147483646LL;
    v8 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !v7 )
        break;
      v9 = *(STRSAFE_LPWSTR)((char *)v5 + v8);
      if ( !v9 )
        break;
      *v5 = v9;
      --v7;
      ++v5;
      ++v6;
      --cchDest;
    }
    while ( cchDest );
  }
  v10 = v5 - 1;
  result = cchDest == 0 ? 0x8007007A : 0;
  if ( cchDest )
    v10 = v5;
  *v10 = 0;
  if ( pcchNewDestLength )
  {
    v12 = v6 - 1;
    if ( cchDest )
      v12 = v6;
    *pcchNewDestLength = v12;
  }
  return result;
}
