/*
 * XREFs of __std_fs_convert_wide_to_narrow @ 0x18014D99C
 * Callers:
 *     ??$_Convert_wide_to_narrow@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x180117FE4 (--$_Convert_wide_to_narrow@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@@YA-AV-$basic_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _std_fs_convert_wide_to_narrow(
        UINT CodePage,
        LPCWCH lpWideCharStr,
        int cchWideChar,
        LPSTR lpMultiByteStr,
        int cbMultiByte)
{
  int v9; // esi
  int v10; // eax
  DWORD LastError; // eax
  __int64 v13; // [rsp+40h] [rbp-28h]
  WINBOOL v14; // [rsp+70h] [rbp+8h] BYREF

  if ( CodePage == 65001 || CodePage == 54936 )
  {
    v9 = cbMultiByte;
    v10 = WideCharToMultiByte(CodePage, 0x80u, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, 0LL, 0LL);
    LODWORD(v13) = v10;
  }
  else
  {
    v9 = cbMultiByte;
    v14 = 0;
    v10 = WideCharToMultiByte(CodePage, 0x400u, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, 0LL, &v14);
    LODWORD(v13) = v10;
    if ( v14 )
      return 0x45900000000LL;
  }
  if ( v10 )
    LastError = 0;
  else
    LastError = GetLastError();
  HIDWORD(v13) = LastError;
  if ( LastError == 1004 )
  {
    LODWORD(v13) = WideCharToMultiByte(CodePage, 0, lpWideCharStr, cchWideChar, lpMultiByteStr, v9, 0LL, 0LL);
    if ( (_DWORD)v13 )
      HIDWORD(v13) = 0;
    else
      HIDWORD(v13) = GetLastError();
  }
  return v13;
}
