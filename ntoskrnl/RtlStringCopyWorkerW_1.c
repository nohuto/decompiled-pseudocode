/*
 * XREFs of RtlStringCopyWorkerW_1 @ 0x1402E194C
 * Callers:
 *     RtlStringCbCopyExW @ 0x1402E1820 (RtlStringCbCopyExW.c)
 *     RtlStringCchCatExW @ 0x140391578 (RtlStringCchCatExW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerW_1(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTRSAFE_PWSTR v5; // r10
  size_t v6; // r11
  __int64 v7; // rax
  signed __int64 v8; // r9
  wchar_t v9; // cx
  NTSTRSAFE_PWSTR v10; // rcx
  NTSTATUS result; // eax
  size_t v12; // rcx

  v5 = pszDest;
  v6 = 0LL;
  if ( cchDest )
  {
    v7 = 2147483646LL;
    v8 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !v7 )
        break;
      v9 = *(NTSTRSAFE_PWSTR)((char *)v5 + v8);
      if ( !v9 )
        break;
      *v5 = v9;
      --v7;
      ++v5;
      ++v6;
      --cchDest;
    }
    while ( cchDest );
  }
  v10 = v5 - 1;
  result = cchDest == 0 ? 0x80000005 : 0;
  if ( cchDest )
    v10 = v5;
  *v10 = 0;
  if ( pcchNewDestLength )
  {
    v12 = v6 - 1;
    if ( cchDest )
      v12 = v6;
    *pcchNewDestLength = v12;
  }
  return result;
}
