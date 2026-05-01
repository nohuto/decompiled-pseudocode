/*
 * XREFs of ?EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z @ 0x1802A8A9C
 * Callers:
 *     ?EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z @ 0x1802A89D4 (-EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1801AC2AC (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall EncodeRelativePath(
        unsigned __int16 *a1,
        WCHAR *a2,
        const struct _GUID *a3,
        __int64 a4,
        LPCWSTR pszFile2)
{
  WCHAR *v5; // rsi
  int v6; // edi
  unsigned int v7; // ebx
  int v10; // eax
  __int64 v11; // rbp
  PWSTR ppszPath; // [rsp+58h] [rbp+10h] BYREF

  ppszPath = a2;
  v5 = (WCHAR *)pszFile2;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( v7 >= 5 )
      break;
    ppszPath = 0LL;
    if ( SHGetKnownFolderPath(&a3[v7], 0x5000u, 0LL, &ppszPath) >= 0 )
    {
      v10 = PathCommonPrefixW(ppszPath, v5, 0LL);
      v11 = v10;
      if ( v10 && v10 == lstrlenW(ppszPath) )
      {
        StringFromGUID2(&a3[v7], a1, 2084);
        StringCchCatW(a1, 2084LL, (size_t *)&v5[v11]);
        v6 = 1;
      }
      CoTaskMemFree(ppszPath);
    }
    ++v7;
  }
  while ( !v6 );
  if ( !v6 )
    StringCchCopyW((char *)a1, 2084LL, (char *)v5);
}
