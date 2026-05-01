/*
 * XREFs of ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x180128098
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F320 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?_Get_any_status@filesystem@std@@YA?AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_flags@@@Z @ 0x180126904 (-_Get_any_status@filesystem@std@@YA-AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_fla.c)
 *     ?_Make_ec@filesystem@std@@YA?AVerror_code@2@W4__std_win_error@@@Z @ 0x180126B18 (-_Make_ec@filesystem@std@@YA-AVerror_code@2@W4__std_win_error@@@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDAEBVerror_code@2@AEBVpath@12@@Z @ 0x180127110 (-_Throw_fs_error@filesystem@std@@YAXPEBDAEBVerror_code@2@AEBVpath@12@@Z.c)
 */

char __fastcall std::filesystem::exists(std::filesystem *this, const struct std::filesystem::path *a2)
{
  char v3; // bl
  unsigned int *any_status; // rax
  std::filesystem *v5; // rcx
  const struct std::filesystem::path *v6; // r9
  __int64 v8; // [rsp+20h] [rbp-38h]
  char v9[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v10[24]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&`std::_Immortalize<std::_System_error_category>'::`2'::_Flag,
          (int (*)(void *, void *, void **))std::_Immortalize_impl<std::_System_error_category>,
          &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage) )
    goto LABEL_8;
  any_status = std::filesystem::_Get_any_status((unsigned int *)v9, (__int64)this);
  v8 = *(_QWORD *)any_status;
  *(_OWORD *)v9 = *(_OWORD *)std::filesystem::_Make_ec((__int64)v10, any_status[2]);
  if ( !(_DWORD)v8 )
  {
    if ( !*(_DWORD *)v9 )
      return v3;
LABEL_9:
    std::filesystem::_Throw_fs_error(v5, v9, this, v6);
  }
  if ( !std::_Execute_once(
          (struct std::once_flag *)&`std::_Immortalize<std::_System_error_category>'::`2'::_Flag,
          (int (*)(void *, void *, void **))std::_Immortalize_impl<std::_System_error_category>,
          &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage) )
  {
LABEL_8:
    _o_terminate();
    __debugbreak();
    goto LABEL_9;
  }
  return (_DWORD)v8 != 1;
}
