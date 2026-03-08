/*
 * XREFs of RtlWideCharArrayCopyWorker @ 0x1C0017ACC
 * Callers:
 *     RtlUnicodeStringCopy @ 0x1C004DF40 (RtlUnicodeStringCopy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWideCharArrayCopyWorker(
        wchar_t *pszDest,
        unsigned __int64 cchDest,
        unsigned __int64 *pcchNewDestLength,
        const wchar_t *pszSrc,
        unsigned __int64 cchSrcLength)
{
  unsigned int v5; // r10d
  unsigned __int64 v8; // r11
  signed __int64 v9; // rcx
  __int64 result; // rax

  v5 = 0;
  v8 = 0LL;
  if ( cchDest )
  {
    v9 = (char *)pszDest - (char *)pszSrc;
    while ( cchSrcLength )
    {
      --cchSrcLength;
      *(const wchar_t *)((char *)pszSrc + v9) = *pszSrc;
      ++v8;
      ++pszSrc;
      if ( !--cchDest )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( cchSrcLength )
      v5 = -2147483643;
  }
  result = v5;
  *pcchNewDestLength = v8;
  return result;
}
