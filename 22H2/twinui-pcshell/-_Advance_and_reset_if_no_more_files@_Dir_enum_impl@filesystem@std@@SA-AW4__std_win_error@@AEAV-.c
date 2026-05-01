/*
 * XREFs of ?_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@3@@Z @ 0x180125E14
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F1B0 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180126DE0 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 *     __std_fs_directory_iterator_advance @ 0x18014DAE4 (__std_fs_directory_iterator_advance.c)
 */

__int64 __fastcall std::filesystem::_Dir_enum_impl::_Advance_and_reset_if_no_more_files(
        std::filesystem::_Dir_enum_impl **a1)
{
  std::filesystem::_Dir_enum_impl *v1; // rsi
  unsigned int v3; // edi
  std::_Ref_count_base *v5; // rcx
  _BYTE v6[592]; // [rsp+20h] [rbp-268h] BYREF

  v1 = *a1;
  v3 = _std_fs_directory_iterator_advance(*((_QWORD *)*a1 + 8), v6);
  if ( !v3 )
  {
    std::filesystem::_Dir_enum_impl::_Refresh(v1, (const struct __std_fs_find_data *)v6);
    return v3;
  }
  if ( v3 != 18 )
    return v3;
  v5 = a1[1];
  a1[1] = 0LL;
  *a1 = 0LL;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return 0LL;
}
