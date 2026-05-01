/*
 * XREFs of _RequestNotificationPinConsentAsync$_ResumeCoro$2_::_1_::dtor$12 @ 0x18014CEDE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall RequestNotificationPinConsentAsync__ResumeCoro_2_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 2776) = *(_QWORD *)(a2 + 2848) + 224LL;
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(*(__int64 **)(a2 + 2776));
}
