/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2_::_1_::dtor$2 @ 0x180141624
 * Callers:
 *     <none>
 * Callees:
 *     ??1PinConsentPromptContent@@QEAA@XZ @ 0x180136108 (--1PinConsentPromptContent@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__ResumeCoro_2_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 1168) = *(_QWORD *)(a2 + 1232) + 32LL;
  PinConsentPromptContent::~PinConsentPromptContent(*(PinConsentPromptContent **)(a2 + 1168));
}
