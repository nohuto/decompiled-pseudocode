/*
 * XREFs of ?now@_File_time_clock@filesystem@std@@SA?AV?$time_point@U_File_time_clock@filesystem@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@@chrono@3@XZ @ 0x1801287D0
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F320 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::filesystem::_File_time_clock::now(_QWORD *a1)
{
  *a1 = _Xtime_get_ticks() + 116444736000000000LL;
  return a1;
}
