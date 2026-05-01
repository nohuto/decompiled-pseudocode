/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry_::_3_::_parameters_::_parameters_ @ 0x18011A060
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_InitCoro$1 @ 0x18011D150 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Ini.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry_::_3_::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 a2,
        HSTRING *a3)
{
  HSTRING v4; // rax

  *a1 = a2;
  v4 = *a3;
  *a3 = 0LL;
  a1[1] = v4;
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  return a1;
}
