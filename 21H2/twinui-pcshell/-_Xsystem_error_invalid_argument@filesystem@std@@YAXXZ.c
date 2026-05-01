/*
 * XREFs of ?_Xsystem_error_invalid_argument@filesystem@std@@YAXXZ @ 0x1801272C8
 * Callers:
 *     ??$_Convert_wide_to_narrow@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x180118154 (--$_Convert_wide_to_narrow@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@@YA-AV-$basic_.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x18011ADF8 (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 *     ?make_error_code@std@@YA?AVerror_code@1@W4errc@1@@Z @ 0x1801285C0 (-make_error_code@std@@YA-AVerror_code@1@W4errc@1@@Z.c)
 */

void __fastcall __noreturn std::filesystem::_Xsystem_error_invalid_argument(std::filesystem *this)
{
  __int128 v1; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v2[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+40h] [rbp-38h] BYREF

  v1 = *(_OWORD *)std::make_error_code(v2);
  std::system_error::system_error((std::exception *)pExceptionObject, &v1);
  throw (std::system_error *)pExceptionObject;
}
