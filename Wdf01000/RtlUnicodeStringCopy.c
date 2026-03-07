int __fastcall RtlUnicodeStringCopy(
        _UNICODE_STRING *DestinationString,
        const _UNICODE_STRING *SourceString,
        __int64 a3,
        unsigned __int64 *a4)
{
  __int16 v5; // bx
  int result; // eax
  unsigned __int64 v8; // r9
  unsigned __int64 cchDest; // [rsp+30h] [rbp-20h] BYREF
  wchar_t *pszDest; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 cchNewDestLength; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 cchSrcLength; // [rsp+80h] [rbp+30h] BYREF
  wchar_t *pszSrc; // [rsp+88h] [rbp+38h] BYREF

  v5 = 0;
  pszDest = 0LL;
  cchDest = 0LL;
  result = RtlUnicodeStringValidateDestWorker(DestinationString, &pszDest, &cchDest, a4);
  if ( result >= 0 )
  {
    pszSrc = 0LL;
    cchSrcLength = 0LL;
    cchNewDestLength = 0LL;
    result = RtlUnicodeStringValidateSrcWorker(SourceString, &pszSrc, &cchSrcLength, v8);
    if ( result >= 0 )
    {
      result = RtlWideCharArrayCopyWorker(pszDest, cchDest, &cchNewDestLength, pszSrc, cchSrcLength);
      v5 = cchNewDestLength;
    }
    DestinationString->Length = 2 * v5;
  }
  return result;
}
