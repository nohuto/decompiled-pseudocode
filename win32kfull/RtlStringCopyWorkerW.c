/*
 * XREFs of RtlStringCopyWorkerW @ 0x1C010A9DC
 * Callers:
 *     _RegisterDManipHook @ 0x1C00DD6D0 (_RegisterDManipHook.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C00DD870 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C010A9B4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
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
  NTSTRSAFE_PWSTR v5; // r8
  __int64 v6; // rax
  signed __int64 v7; // r9
  wchar_t v8; // cx
  NTSTRSAFE_PWSTR v9; // rcx
  NTSTATUS result; // eax

  v5 = pszDest;
  if ( cchDest )
  {
    v6 = 2147483646LL;
    v7 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !v6 )
        break;
      v8 = *(NTSTRSAFE_PWSTR)((char *)v5 + v7);
      if ( !v8 )
        break;
      *v5 = v8;
      --v6;
      ++v5;
      --cchDest;
    }
    while ( cchDest );
  }
  v9 = v5 - 1;
  result = cchDest == 0 ? 0x80000005 : 0;
  if ( cchDest )
    v9 = v5;
  *v9 = 0;
  return result;
}
