/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted_::_1_::dtor$5 @ 0x18012111C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>(a2 + 128);
}
