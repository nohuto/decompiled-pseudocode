/*
 * XREFs of ?last_write_time@filesystem@std@@YA?AV?$time_point@U_File_time_clock@filesystem@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@@chrono@2@AEBVpath@12@@Z @ 0x1801283F8
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F320 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x1801271E4 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 *     __std_fs_get_stats @ 0x18014DCBC (__std_fs_get_stats.c)
 */

_QWORD *__fastcall std::filesystem::last_write_time(_QWORD *a1, const WCHAR *a2)
{
  const WCHAR *v4; // rcx
  int stats; // eax
  __int64 v7; // [rsp+20h] [rbp-28h]

  *a1 = 0LL;
  v4 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v4 = *(const WCHAR **)a2;
  stats = _std_fs_get_stats(v4);
  if ( stats )
  {
    *a1 = 0x8000000000000000uLL;
    std::filesystem::_Throw_fs_error((__int64)"last_write_time", stats, (__int64)a2);
  }
  *a1 = v7;
  return a1;
}
