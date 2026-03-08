/*
 * XREFs of ?RtlStringCchCopyUnicodeStringEx@@YAJPEAG_KPEBU_UNICODE_STRING@@PEAPEAGPEA_KK@Z @ 0x1C01915E4
 * Callers:
 *     LogDiagSDCAccessDenied @ 0x1C01955E4 (LogDiagSDCAccessDenied.c)
 * Callees:
 *     RtlStringCopyWideCharArrayWorker @ 0x1C0191660 (RtlStringCopyWideCharArrayWorker.c)
 *     RtlUnicodeStringValidateSrcWorker_0 @ 0x1C01916D4 (RtlUnicodeStringValidateSrcWorker_0.c)
 */

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
