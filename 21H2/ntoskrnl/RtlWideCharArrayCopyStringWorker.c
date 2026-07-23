/*
 * XREFs of RtlWideCharArrayCopyStringWorker @ 0x14057F2C8
 * Callers:
 *     RtlUnicodeStringCchCopyStringN @ 0x14057F1F8 (RtlUnicodeStringCchCopyStringN.c)
 *     RtlUnicodeStringCbCatStringN @ 0x1405C0E2C (RtlUnicodeStringCbCatStringN.c)
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
  if ( !cchDest )
  {
    v9 = cchToCopy;
LABEL_9:
    if ( v9 && *v6 )
      result = -2147483643;
    goto LABEL_12;
  }
  v8 = (char *)pszDest - (char *)pszSrc;
  v9 = cchToCopy;
  do
  {
    if ( !v9 )
      break;
    if ( !*v6 )
      break;
    *(NTSTRSAFE_PCWSTR)((char *)v6 + v8) = *v6;
    --v9;
    ++v6;
    ++v7;
    --cchDest;
  }
  while ( cchDest );
  if ( !cchDest )
    goto LABEL_9;
LABEL_12:
  *pcchNewDestLength = v7;
  return result;
}
