/*
 * XREFs of RtlStringCopyWideCharArrayWorker @ 0x1C0191660
 * Callers:
 *     ?RtlStringCchCopyUnicodeStringEx@@YAJPEAG_KPEBU_UNICODE_STRING@@PEAPEAGPEA_KK@Z @ 0x1C01915E4 (-RtlStringCchCopyUnicodeStringEx@@YAJPEAG_KPEBU_UNICODE_STRING@@PEAPEAGPEA_KK@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWideCharArrayWorker(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        const wchar_t *pszSrc,
        size_t cchSrcLength)
{
  size_t v7; // r11
  signed __int64 v8; // r9
  __int64 v9; // r10
  NTSTRSAFE_PWSTR v10; // rcx
  NTSTATUS result; // eax
  size_t v12; // rcx

  v7 = 0LL;
  v8 = (char *)pszSrc - (char *)pszDest;
  v9 = 16LL;
  do
  {
    if ( !cchSrcLength )
      break;
    --cchSrcLength;
    *pszDest = *(NTSTRSAFE_PWSTR)((char *)pszDest + v8);
    ++v7;
    ++pszDest;
    --v9;
  }
  while ( v9 );
  v10 = pszDest - 1;
  result = v9 == 0 ? 0x80000005 : 0;
  if ( v9 )
    v10 = pszDest;
  *v10 = 0;
  if ( pcchNewDestLength )
  {
    v12 = v7 - 1;
    if ( v9 )
      v12 = v7;
    *pcchNewDestLength = v12;
  }
  return result;
}
