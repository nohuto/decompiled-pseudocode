/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$2_::_1_::dtor$1 @ 0x18011EEBB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ @ 0x18011B310 (--1-$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ.c)
 */

HRESULT __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__ResumeCoro_2_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1952) = *(_QWORD *)(a2 + 2032) + 24LL;
  *(_QWORD *)(a2 + 200) = **(_QWORD **)(a2 + 1952);
  return std::pair<winrt::hstring const,bool>::~pair<winrt::hstring const,bool>(*(HSTRING **)(a2 + 200));
}
