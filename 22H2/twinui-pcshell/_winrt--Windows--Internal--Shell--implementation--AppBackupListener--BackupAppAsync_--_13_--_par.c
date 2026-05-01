/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_13_::_parameters_::_parameters_ @ 0x18011A090
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_InitCoro$1 @ 0x18011BF84 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_InitCoro$1.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_13_::_parameters_::_parameters_(
        __int64 a1,
        __int64 a2,
        HSTRING *a3,
        HSTRING *a4,
        HSTRING *a5,
        int a6)
{
  HSTRING v8; // rax
  HSTRING v9; // rax
  HSTRING v10; // rax

  *(_QWORD *)a1 = a2;
  v8 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 8) = v8;
  v9 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a1 + 16) = v9;
  v10 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a1 + 24) = v10;
  *(_DWORD *)(a1 + 32) = a6;
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a4);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a5);
  return a1;
}
