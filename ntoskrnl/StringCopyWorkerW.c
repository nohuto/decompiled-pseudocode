/*
 * XREFs of StringCopyWorkerW @ 0x14039A9CC
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x140841630 (AdtpInitializeDriveLetters.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  STRSAFE_LPWSTR v5; // rdx
  __int64 v6; // r8
  signed __int64 v7; // rcx
  wchar_t v8; // ax
  STRSAFE_LPWSTR v9; // rcx
  HRESULT result; // eax

  v5 = pszDest;
  v6 = 31LL;
  v7 = (char *)L"\\DosDevices\\A:" - (char *)pszDest;
  do
  {
    if ( v6 == -2147483615 )
      break;
    v8 = *(STRSAFE_LPWSTR)((char *)v5 + v7);
    if ( !v8 )
      break;
    *v5++ = v8;
    --v6;
  }
  while ( v6 );
  v9 = v5 - 1;
  result = v6 == 0 ? 0x8007007A : 0;
  if ( v6 )
    v9 = v5;
  *v9 = 0;
  return result;
}
