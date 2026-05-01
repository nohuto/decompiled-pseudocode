/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$2_::_1_::dtor$0 @ 0x18011CF94
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_2_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 840) = *(_QWORD *)(a2 + 880) + 16LL;
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(__int64 **)(a2 + 840));
}
