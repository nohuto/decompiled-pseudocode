/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$2_::_1_::dtor$1 @ 0x18012441F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIStream@@@winrt@@QEAA@XZ @ 0x1800A1358 (--1-$com_ptr@UIStream@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync__ResumeCoro_2_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1264) = *(_QWORD *)(a2 + 1312) + 24LL;
  return winrt::com_ptr<IStream>::~com_ptr<IStream>(*(_QWORD **)(a2 + 1264));
}
