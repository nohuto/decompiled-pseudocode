/*
 * XREFs of ?code@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x180101198
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$2_::_1_::catch$109 @ 0x18011CFF2 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_18011CFF2.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$2_::_1_::catch$64 @ 0x1801205BA (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMe_ea_1801205BA.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall winrt::hresult_error::code(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 12);
  return a2;
}
