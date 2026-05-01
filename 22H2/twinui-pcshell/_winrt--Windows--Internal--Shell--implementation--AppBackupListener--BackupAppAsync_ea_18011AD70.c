/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_13_::_parameters_::__parameters_ @ 0x18011AD70
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$2 @ 0x18011C210 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$2.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

HRESULT __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_13_::_parameters_::__parameters_(
        HSTRING *a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 3);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 2);
  return winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 1);
}
