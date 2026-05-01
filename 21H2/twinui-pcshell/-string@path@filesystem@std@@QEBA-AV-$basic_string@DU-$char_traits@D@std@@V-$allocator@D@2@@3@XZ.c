/*
 * XREFs of ?string@path@filesystem@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@XZ @ 0x180128F64
 * Callers:
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180126D94 (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 * Callees:
 *     ??$_Convert_wide_to_narrow@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x180118154 (--$_Convert_wide_to_narrow@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@@YA-AV-$basic_.c)
 */

std::filesystem *__fastcall std::filesystem::path::string(_QWORD *a1, std::filesystem *a2)
{
  __int64 v3; // rax
  int v4; // eax
  UINT v5; // edx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1[2];
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  v7[0] = a1;
  v7[1] = v3;
  v4 = _o____lc_codepage_func(a1, a2);
  v5 = 0;
  if ( v4 == 65001 )
    v5 = 65001;
  std::filesystem::_Convert_wide_to_narrow<std::char_traits<char>,std::allocator<char>>(a2, v5, (__int64)v7);
  return a2;
}
