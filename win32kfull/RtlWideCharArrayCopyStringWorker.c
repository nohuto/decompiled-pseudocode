/*
 * XREFs of RtlWideCharArrayCopyStringWorker @ 0x1C0103240
 * Callers:
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C01031CC (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
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
  wchar_t *v6; // r10
  __int64 v7; // r9
  size_t v8; // r11

  result = 0;
  v6 = (wchar_t *)L"\\Registry\\Machine";
  v7 = 0x7FFFLL;
  v8 = 0LL;
  if ( cchDest )
  {
    while ( v7 )
    {
      if ( *v6 )
      {
        *pszDest++ = *v6++;
        --v7;
        ++v8;
        if ( --cchDest )
          continue;
      }
      if ( cchDest || !v7 || !*v6 )
        break;
      goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    result = -2147483643;
  }
  *pcchNewDestLength = v8;
  return result;
}
