/*
 * XREFs of ?_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z @ 0x180125F60
 * Callers:
 *     ??$_Convert_wide_to_narrow@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x180117FE4 (--$_Convert_wide_to_narrow@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@@YA-AV-$basic_.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180090964 (_CxxThrowException_0.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x18011AC88 (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 *     ?_Make_ec@filesystem@std@@YA?AVerror_code@2@W4__std_win_error@@@Z @ 0x1801269A8 (-_Make_ec@filesystem@std@@YA-AVerror_code@2@W4__std_win_error@@@Z.c)
 */

__int64 __fastcall std::filesystem::_Check_convert_result(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v3[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+40h] [rbp-38h] BYREF

  if ( HIDWORD(a1) )
  {
    v2 = *(_OWORD *)std::filesystem::_Make_ec(v3, HIDWORD(a1));
    std::system_error::system_error((std::exception *)pExceptionObject, &v2);
    throw (std::system_error *)pExceptionObject;
  }
  return (unsigned int)a1;
}
