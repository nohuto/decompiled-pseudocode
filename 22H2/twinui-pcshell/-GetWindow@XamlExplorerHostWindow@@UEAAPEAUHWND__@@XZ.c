/*
 * XREFs of ?GetWindow@XamlExplorerHostWindow@@UEAAPEAUHWND__@@XZ @ 0x18008DE30
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012AC30 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E2A0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E2A0.c)
 * Callees:
 *     <none>
 */

HWND __fastcall XamlExplorerHostWindow::GetWindow(XamlExplorerHostWindow *this)
{
  return (HWND)*((_QWORD *)this + 11);
}
