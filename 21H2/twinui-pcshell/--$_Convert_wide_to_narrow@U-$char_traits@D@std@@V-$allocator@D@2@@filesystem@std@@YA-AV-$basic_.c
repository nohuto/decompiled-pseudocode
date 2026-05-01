/*
 * XREFs of ??$_Convert_wide_to_narrow@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x180118154
 * Callers:
 *     ?string@path@filesystem@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@XZ @ 0x180128F64 (-string@path@filesystem@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@3@XZ.c)
 * Callees:
 *     ?_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z @ 0x1801260D0 (-_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z.c)
 *     ?_Xsystem_error_invalid_argument@filesystem@std@@YAXXZ @ 0x1801272C8 (-_Xsystem_error_invalid_argument@filesystem@std@@YAXXZ.c)
 *     ?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_KD@Z @ 0x180128C80 (-resize@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_KD@Z.c)
 *     __std_fs_convert_wide_to_narrow @ 0x18014DB0C (__std_fs_convert_wide_to_narrow.c)
 */

// Hidden C++ exception states: #wind=1
std::filesystem *__fastcall std::filesystem::_Convert_wide_to_narrow<std::char_traits<char>,std::allocator<char>>(
        std::filesystem *a1,
        UINT a2,
        __int64 a3)
{
  int v5; // esi
  const WCHAR *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r14
  CHAR *v9; // r9
  __int64 v10; // rax

  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 15LL;
  *(_BYTE *)a1 = 0;
  if ( *(_QWORD *)(a3 + 8) )
  {
    if ( *(_QWORD *)(a3 + 8) > 0x7FFFFFFFuLL )
      std::filesystem::_Xsystem_error_invalid_argument(a1);
    v5 = *(_DWORD *)(a3 + 8);
    v6 = *(const WCHAR **)a3;
    v7 = _std_fs_convert_wide_to_narrow(a2, *(LPCWCH *)a3, v5, 0LL, 0);
    v8 = (int)std::filesystem::_Check_convert_result(v7);
    std::string::resize(a1, v8);
    v9 = (CHAR *)a1;
    if ( *((_QWORD *)a1 + 3) >= 0x10uLL )
      v9 = *(CHAR **)a1;
    v10 = _std_fs_convert_wide_to_narrow(a2, v6, v5, v9, v8);
    std::filesystem::_Check_convert_result(v10);
  }
  return a1;
}
