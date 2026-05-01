/*
 * XREFs of _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry$_ResumeCoro$2_::_1_::dtor$1 @ 0x180105E1B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry__ResumeCoro_2_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 848) = *(_QWORD *)(a2 + 880) + 32LL;
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(__int64 **)(a2 + 848));
}
