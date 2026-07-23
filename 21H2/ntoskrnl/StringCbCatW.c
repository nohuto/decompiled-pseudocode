/*
 * XREFs of StringCbCatW @ 0x14059D818
 * Callers:
 *     SmUniqueIdParseProductName @ 0x14059D4B0 (SmUniqueIdParseProductName.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x14059D910 (StringCopyWorkerW_0.c)
 */

HRESULT __stdcall StringCbCatW(STRSAFE_LPWSTR pszDest, size_t cbDest, STRSAFE_LPCWSTR pszSrc)
{
  size_t v3; // rdx
  __int64 v4; // r8
  size_t v6; // rcx
  STRSAFE_LPWSTR i; // rax
  size_t v8; // rax

  v3 = cbDest >> 1;
  v4 = 0LL;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = 2147942487LL;
  if ( (int)v4 < 0 )
    goto LABEL_9;
  v6 = v3;
  for ( i = pszDest; v6; --v6 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v4 = v6 == 0 ? 0x80070057 : 0;
  if ( v6 )
    v8 = v3 - v6;
  else
LABEL_9:
    v8 = 0LL;
  if ( (int)v4 >= 0 )
    LODWORD(v4) = StringCopyWorkerW_0(&pszDest[v8], v3 - v8, (size_t *)v4, L" ", 0x7FFFFFFEuLL);
  return v4;
}
