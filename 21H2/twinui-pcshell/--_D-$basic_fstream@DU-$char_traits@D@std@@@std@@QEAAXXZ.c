/*
 * XREFs of ??_D?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAAXXZ @ 0x18011BD80
 * Callers:
 *     ??_G?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAAPEAXI@Z @ 0x18011BEBC (--_G-$basic_fstream@DU-$char_traits@D@std@@@std@@UEAAPEAXI@Z.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F320 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::dtor$12 @ 0x18011FA4B (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppCompa_ea_18011FA4B.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::dtor$27 @ 0x18011FB36 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppCompa_ea_18011FB36.c)
 * Callees:
 *     ??1?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x18011AF8C (--1-$basic_fstream@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::fstream::`vbase destructor'(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 184;
  std::fstream::~fstream<char,std::char_traits<char>>(a1 + 184);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
