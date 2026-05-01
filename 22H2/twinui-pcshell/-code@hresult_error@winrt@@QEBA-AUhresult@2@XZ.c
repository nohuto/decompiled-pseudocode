/*
 * XREFs of ?code@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x180101028
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$2_::_1_::catch$109 @ 0x18011CE82 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_18011CE82.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$2_::_1_::catch$64 @ 0x18012044A (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMe_ea_18012044A.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall winrt::hresult_error::code(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 12);
  return a2;
}
