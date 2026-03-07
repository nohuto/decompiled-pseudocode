NTSTATUS __stdcall RtlStringCchCopyNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  size_t v4; // r10
  NTSTATUS result; // eax
  size_t v6; // r9
  signed __int64 v7; // r8
  wchar_t v8; // ax
  NTSTRSAFE_PWSTR v9; // rax

  v4 = cchDest;
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( !cchDest )
      return result;
    goto LABEL_12;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    result = -1073741811;
LABEL_12:
    *pszDest = 0;
    return result;
  }
  v6 = cchToCopy - cchDest;
  v7 = (char *)pszSrc - (char *)pszDest;
  do
  {
    if ( !(v6 + v4) )
      break;
    v8 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v7);
    if ( !v8 )
      break;
    *pszDest++ = v8;
    --v4;
  }
  while ( v4 );
  v9 = pszDest - 1;
  if ( v4 )
    v9 = pszDest;
  *v9 = 0;
  return v4 == 0 ? 0x80000005 : 0;
}
