/*
 * XREFs of RtlStringCchCatW @ 0x140246580
 * Callers:
 *     AslpFileQueryVersionString @ 0x1406D48D0 (AslpFileQueryVersionString.c)
 *     SdbpCreateSearchDBContext @ 0x1407A3094 (SdbpCreateSearchDBContext.c)
 *     SdbGetMergeRedirectPath @ 0x140A4B4A0 (SdbGetMergeRedirectPath.c)
 *     AslPathCombine @ 0x140A524A8 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x140A527A4 (AslPathToSystemPathBuf.c)
 *     AslpEnvResolveVars @ 0x140A54B80 (AslpEnvResolveVars.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B44AFC (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v5; // r10
  NTSTRSAFE_PWSTR v6; // rax
  NTSTATUS v7; // edx
  size_t v8; // r8
  wchar_t *v9; // rdx
  size_t v10; // rcx
  __int64 v11; // rax
  char *v12; // r11
  wchar_t v13; // r8
  wchar_t *v14; // rax

  if ( cchDest - 1 > 0x7FFFFFFE )
    return -1073741811;
  v5 = cchDest;
  v6 = pszDest;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v7 = v5 == 0 ? 0xC000000D : 0;
  v8 = (cchDest - v5) & -(__int64)(v5 != 0);
  if ( v5 )
  {
    v9 = &pszDest[v8];
    v10 = cchDest - v8;
    if ( cchDest != v8 )
    {
      v11 = 2147483646LL;
      v12 = (char *)((char *)pszSrc - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(wchar_t *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    v7 = v10 == 0 ? 0x80000005 : 0;
    *v14 = 0;
  }
  return v7;
}
