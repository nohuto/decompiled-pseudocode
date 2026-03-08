/*
 * XREFs of RtlStringCopyWorkerA @ 0x14035BD04
 * Callers:
 *     RtlStringCbCopyA @ 0x14035BCD8 (RtlStringCbCopyA.c)
 *     RtlStringCbCopyExA @ 0x140384764 (RtlStringCbCopyExA.c)
 *     RtlStringCbCatExA @ 0x1404FB918 (RtlStringCbCatExA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerA(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZCH pszSrc,
        size_t cchToCopy)
{
  size_t v5; // r11
  NTSTRSAFE_PSTR v6; // r10
  __int64 v7; // rax
  signed __int64 v8; // r9
  char v9; // cl
  NTSTRSAFE_PSTR v10; // rcx
  NTSTATUS result; // eax
  size_t v12; // rcx

  v5 = 0LL;
  v6 = pszDest;
  if ( cchDest )
  {
    v7 = 2147483646LL;
    v8 = pszSrc - pszDest;
    do
    {
      if ( !v7 )
        break;
      v9 = v6[v8];
      if ( !v9 )
        break;
      *v6 = v9;
      --v7;
      ++v6;
      ++v5;
      --cchDest;
    }
    while ( cchDest );
  }
  v10 = v6 - 1;
  result = cchDest == 0 ? 0x80000005 : 0;
  if ( cchDest )
    v10 = v6;
  *v10 = 0;
  if ( pcchNewDestLength )
  {
    v12 = v5 - 1;
    if ( cchDest )
      v12 = v5;
    *pcchNewDestLength = v12;
  }
  return result;
}
