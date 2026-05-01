/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasUpdatedOrInstalled_::_1_::dtor$9 @ 0x180121759
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasUpdatedOrInstalled_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>(a2 + 200);
}
