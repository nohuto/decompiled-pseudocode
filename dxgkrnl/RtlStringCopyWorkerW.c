/*
 * XREFs of RtlStringCopyWorkerW @ 0x1C00128B0
 * Callers:
 *     ?RtlStringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1C004A5F4 (-RtlStringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01AA250 (_lambda_b5f01eb3f4b149c357ab2eab84592b3f_--operator().c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTRSAFE_PWSTR v5; // r10
  size_t v6; // r11
  signed __int64 v8; // r9
  wchar_t v9; // cx
  NTSTRSAFE_PWSTR v10; // rcx
  NTSTATUS result; // eax
  size_t v12; // rcx

  v5 = pszDest;
  v6 = 0LL;
  if ( cchDest )
  {
    v8 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !cchToCopy )
        break;
      v9 = *(NTSTRSAFE_PWSTR)((char *)v5 + v8);
      if ( !v9 )
        break;
      *v5 = v9;
      --cchToCopy;
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
