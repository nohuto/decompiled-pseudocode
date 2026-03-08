/*
 * XREFs of StringCbCatW @ 0x1405C8740
 * Callers:
 *     SmUniqueIdParseProductName @ 0x1405C83D8 (SmUniqueIdParseProductName.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x1405C8810 (StringCopyWorkerW_0.c)
 */

HRESULT __stdcall StringCbCatW(STRSAFE_LPWSTR pszDest, size_t cbDest, STRSAFE_LPCWSTR pszSrc)
{
  size_t v3; // rdx
  size_t *v5; // r8
  STRSAFE_LPWSTR v6; // rax
  HRESULT result; // eax
  size_t v8; // rcx

  v3 = cbDest >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
    return -2147024809;
  v5 = (size_t *)v3;
  v6 = pszDest;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    v5 = (size_t *)((char *)v5 - 1);
  }
  while ( v5 );
  result = v5 == 0LL ? 0x80070057 : 0;
  if ( v5 )
    v8 = v3 - (_QWORD)v5;
  else
    v8 = 0LL;
  if ( v5 )
    return StringCopyWorkerW_0(&pszDest[v8], v3 - v8, v5, L" ", 0x7FFFFFFEuLL);
  return result;
}
