/*
 * XREFs of ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z @ 0x180127178
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F320 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18011A49C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@@Z @ 0x18011AC68 (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@_ea_18011AC68.c)
 *     ?_Make_ec@filesystem@std@@YA?AVerror_code@2@W4__std_win_error@@@Z @ 0x180126B18 (-_Make_ec@filesystem@std@@YA-AVerror_code@2@W4__std_win_error@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn std::filesystem::_Throw_fs_error(__int64 a1, int a2)
{
  __int128 v2; // xmm6
  __int128 v3; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v4[16]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v5[4]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE pExceptionObject[168]; // [rsp+60h] [rbp-A8h] BYREF

  v2 = *(_OWORD *)std::filesystem::_Make_ec((__int64)v4, a2);
  std::string::string(v5);
  v3 = v2;
  std::filesystem::filesystem_error::filesystem_error((__int64)pExceptionObject, (__int64)v5, &v3);
  throw (std::filesystem::filesystem_error *)pExceptionObject;
}
