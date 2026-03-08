/*
 * XREFs of RtlWideCharArrayCopyStringWorker @ 0x14059FCA0
 * Callers:
 *     RtlUnicodeStringCchCopyStringN @ 0x14059FC08 (RtlUnicodeStringCchCopyStringN.c)
 *     RtlUnicodeStringCbCatStringN @ 0x14066BEEC (RtlUnicodeStringCbCatStringN.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlWideCharArrayCopyStringWorker(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  NTSTATUS result; // eax
  NTSTRSAFE_PCWSTR v6; // r10
  size_t v7; // r11
  signed __int64 v8; // rbx
  size_t v9; // r9

  result = 0;
  v6 = pszSrc;
  v7 = 0LL;
  if ( cchDest )
  {
    v8 = (char *)pszDest - (char *)pszSrc;
    v9 = cchToCopy;
    while ( v9 )
    {
      if ( *v6 )
      {
        *(NTSTRSAFE_PCWSTR)((char *)v6 + v8) = *v6;
        --v9;
        ++v6;
        ++v7;
        if ( --cchDest )
          continue;
      }
      if ( cchDest )
        break;
      goto LABEL_9;
    }
  }
  else
  {
    v9 = cchToCopy;
LABEL_9:
    if ( v9 && *v6 )
      result = -2147483643;
  }
  *pcchNewDestLength = v7;
  return result;
}
