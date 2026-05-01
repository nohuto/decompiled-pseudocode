/*
 * XREFs of ?remove_Dismissed@CSplashScreen@@UEAAJUEventRegistrationToken@@@Z @ 0x1801FB5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSplashScreen::remove_Dismissed(CSplashScreen *this, struct EventRegistrationToken a2)
{
  return Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
           (__int64 *)this + 9,
           (struct IUnknown *)a2.value);
}
