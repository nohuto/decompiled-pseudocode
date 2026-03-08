/*
 * XREFs of RtlStringCopyWorkerW_0 @ 0x140245C00
 * Callers:
 *     RtlStringCchCopyNExW @ 0x140245AC0 (RtlStringCchCopyNExW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerW_0(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS v5; // ebx
  size_t v6; // r11
  signed __int64 v8; // r9
  wchar_t v9; // ax
  NTSTATUS result; // eax

  v5 = 0;
  v6 = 0LL;
  if ( cchDest )
  {
    v8 = (char *)pszSrc - (char *)pszDest;
    while ( cchToCopy )
    {
      v9 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v8);
      if ( !v9 )
        break;
      *pszDest = v9;
      --cchToCopy;
      ++pszDest;
      ++v6;
      if ( !--cchDest )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    --pszDest;
    v5 = -2147483643;
    --v6;
  }
  *pszDest = 0;
  result = v5;
  if ( pcchNewDestLength )
    *pcchNewDestLength = v6;
  return result;
}
