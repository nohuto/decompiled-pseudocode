/*
 * XREFs of ?_Throw_fs_error@filesystem@std@@YAXPEBDAEBVerror_code@2@AEBVpath@12@@Z @ 0x180126FA0
 * Callers:
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x180127F28 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180090964 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18011A32C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x18011A9D4 (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn std::filesystem::_Throw_fs_error(
        std::filesystem *this,
        const char *a2,
        const struct std::error_code *a3,
        const struct std::filesystem::path *a4)
{
  __int128 v5; // xmm6
  __int128 v6; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v7[4]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE pExceptionObject[168]; // [rsp+50h] [rbp-A8h] BYREF

  v5 = *(_OWORD *)a2;
  std::string::string(v7);
  v6 = v5;
  std::filesystem::filesystem_error::filesystem_error((__int64)pExceptionObject, (__int64)v7, (__int64)a3, &v6);
  throw (std::filesystem::filesystem_error *)pExceptionObject;
}
