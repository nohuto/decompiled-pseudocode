/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$2_::_1_::dtor$9 @ 0x18013D8C6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync__ResumeCoro_2_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1264) = *(_QWORD *)(a2 + 1296) + 192LL;
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(__int64 **)(a2 + 1264));
}
