NTSTATUS __stdcall RtlStringCbCopyNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // rdx
  size_t v5; // r9
  size_t v6; // r9
  signed __int64 v7; // r10
  wchar_t v8; // ax
  NTSTRSAFE_PWSTR v9; // rax

  v4 = cbDest >> 1;
  if ( v4 - 1 > 0x7FFFFFFE )
    return -1073741811;
  v5 = cbToCopy >> 1;
  if ( v5 > 0x7FFFFFFE )
  {
    *pszDest = 0;
    return -1073741811;
  }
  v6 = v5 - v4;
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
