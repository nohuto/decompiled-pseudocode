int __fastcall RtlStringCchCopyUnicodeStringEx(
        NTSTRSAFE_PWSTR pszDest,
        wchar_t *a2,
        const struct _UNICODE_STRING *a3,
        unsigned __int16 **a4)
{
  int result; // eax
  size_t v6; // rdx
  ULONG cchSrcLength; // [rsp+20h] [rbp-18h]
  wchar_t *ppszSrc; // [rsp+48h] [rbp+10h] BYREF
  size_t pcchSrcLength; // [rsp+58h] [rbp+20h] BYREF

  pcchSrcLength = (size_t)a4;
  ppszSrc = a2;
  if ( !pszDest )
    return -1073741811;
  ppszSrc = 0LL;
  pcchSrcLength = 0LL;
  result = RtlUnicodeStringValidateSrcWorker_0(a3, &ppszSrc, &pcchSrcLength, (const size_t)a4, cchSrcLength);
  if ( result >= 0 )
    return RtlStringCopyWideCharArrayWorker(pszDest, v6, &pcchSrcLength, ppszSrc, pcchSrcLength);
  *pszDest = 0;
  return result;
}
