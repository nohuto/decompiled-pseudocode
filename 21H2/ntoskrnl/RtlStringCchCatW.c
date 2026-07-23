/*
 * XREFs of RtlStringCchCatW @ 0x1403714B0
 * Callers:
 *     ExpGetGlobalLocaleSection @ 0x1406A268C (ExpGetGlobalLocaleSection.c)
 *     AslpEnvResolveVars @ 0x140753F84 (AslpEnvResolveVars.c)
 *     SdbpCreateSearchDBContext @ 0x14075B000 (SdbpCreateSearchDBContext.c)
 *     SshpQueryRegistryValues @ 0x140796AF0 (SshpQueryRegistryValues.c)
 *     AslpFileQueryVersionString @ 0x1407B2FFC (AslpFileQueryVersionString.c)
 *     AslPathCombine @ 0x1409689F4 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x140968B60 (AslPathToSystemPathBuf.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4240C (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v5; // r9d
  size_t v7; // rcx
  NTSTRSAFE_PWSTR i; // rax
  size_t v9; // r8
  wchar_t *v10; // rdx
  size_t v11; // rcx
  __int64 v12; // r9
  char *v13; // r11
  wchar_t v14; // ax
  wchar_t *v15; // rax

  v5 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
    goto LABEL_19;
  v7 = cchDest;
  for ( i = pszDest; v7; --v7 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v5 = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
    v9 = cchDest - v7;
  else
LABEL_19:
    v9 = 0LL;
  if ( v5 >= 0 )
  {
    v10 = &pszDest[v9];
    v11 = cchDest - v9;
    if ( cchDest != v9 )
    {
      v12 = 2147483646LL;
      v13 = (char *)((char *)pszSrc - (char *)v10);
      do
      {
        if ( !v12 )
          break;
        v14 = *(wchar_t *)((char *)v10 + (_QWORD)v13);
        if ( !v14 )
          break;
        *v10 = v14;
        --v12;
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    v15 = v10 - 1;
    if ( v11 )
      v15 = v10;
    v5 = v11 == 0 ? 0x80000005 : 0;
    *v15 = 0;
  }
  return v5;
}
