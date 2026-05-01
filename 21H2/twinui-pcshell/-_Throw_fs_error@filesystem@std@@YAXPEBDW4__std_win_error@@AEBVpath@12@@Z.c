/*
 * XREFs of ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x1801271E4
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F320 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?last_write_time@filesystem@std@@YA?AV?$time_point@U_File_time_clock@filesystem@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@@chrono@2@AEBVpath@12@@Z @ 0x1801283F8 (-last_write_time@filesystem@std@@YA-AV-$time_point@U_File_time_clock@filesystem@std@@V-$duration.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18011A49C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVpath@12@Verror_code@2@@Z @ 0x18011AB44 (--0filesystem_error@filesystem@std@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?_Make_ec@filesystem@std@@YA?AVerror_code@2@W4__std_win_error@@@Z @ 0x180126B18 (-_Make_ec@filesystem@std@@YA-AVerror_code@2@W4__std_win_error@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn std::filesystem::_Throw_fs_error(__int64 a1, int a2, __int64 a3)
{
  __int128 v4; // xmm6
  __int128 v5; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v7[4]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE pExceptionObject[168]; // [rsp+60h] [rbp-A8h] BYREF

  v4 = *(_OWORD *)std::filesystem::_Make_ec((__int64)v6, a2);
  std::string::string(v7);
  v5 = v4;
  std::filesystem::filesystem_error::filesystem_error((__int64)pExceptionObject, (__int64)v7, a3, &v5);
  throw (std::filesystem::filesystem_error *)pExceptionObject;
}
