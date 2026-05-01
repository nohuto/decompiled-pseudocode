/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$2_::_1_::dtor$9 @ 0x18011EEA9
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ @ 0x18011B1A0 (--1-$pair@$$CBUhstring@winrt@@_N@std@@QEAA@XZ.c)
 */

HRESULT __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__ResumeCoro_2_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 2000) = *(_QWORD *)(a2 + 2032) + 104LL;
  *(_QWORD *)(a2 + 1512) = **(_QWORD **)(a2 + 2000);
  return std::pair<winrt::hstring const,bool>::~pair<winrt::hstring const,bool>(*(HSTRING **)(a2 + 1512));
}
