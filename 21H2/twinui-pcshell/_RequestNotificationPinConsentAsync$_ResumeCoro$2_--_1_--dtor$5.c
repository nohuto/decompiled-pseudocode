/*
 * XREFs of _RequestNotificationPinConsentAsync$_ResumeCoro$2_::_1_::dtor$5 @ 0x18014CF63
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x1800A1328 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall RequestNotificationPinConsentAsync__ResumeCoro_2_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 2736) = *(_QWORD *)(a2 + 2848) + 152LL;
  winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView(*(__int64 **)(a2 + 2736));
}
