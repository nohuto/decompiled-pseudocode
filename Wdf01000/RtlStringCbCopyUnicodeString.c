int __fastcall RtlStringCbCopyUnicodeString(
        wchar_t *pszDest,
        unsigned __int64 cbDest,
        const _UNICODE_STRING *SourceString)
{
  unsigned __int64 v3; // rbx
  int result; // eax
  unsigned __int64 v6; // rcx
  signed __int64 v7; // rdx
  wchar_t *v8; // rax
  unsigned __int64 cchSrcLength; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *pszSrc; // [rsp+58h] [rbp+20h] BYREF

  v3 = cbDest >> 1;
  if ( (cbDest >> 1) - 1 > 0x7FFE )
    return -1073741811;
  pszSrc = 0LL;
  cchSrcLength = 0LL;
  result = RtlUnicodeStringValidateSrcWorker(SourceString, &pszSrc, &cchSrcLength, (const unsigned __int64)SourceString);
  if ( result < 0 )
  {
    *pszDest = 0;
  }
  else
  {
    v6 = cchSrcLength - v3;
    v7 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v6 + v3) )
        break;
      *pszDest = *(wchar_t *)((char *)pszDest + v7);
      ++pszDest;
      --v3;
    }
    while ( v3 );
    v8 = pszDest - 1;
    if ( v3 )
      v8 = pszDest;
    *v8 = 0;
    return v3 == 0 ? 0x80000005 : 0;
  }
  return result;
}
