/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2_::_1_::dtor$3 @ 0x1801414E3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__ResumeCoro_2_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1176) = *(_QWORD *)(a2 + 1232) + 144LL;
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(__int64 **)(a2 + 1176));
}
