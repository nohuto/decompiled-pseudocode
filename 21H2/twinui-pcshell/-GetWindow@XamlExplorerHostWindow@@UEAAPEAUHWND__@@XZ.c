/*
 * XREFs of ?GetWindow@XamlExplorerHostWindow@@UEAAPEAUHWND__@@XZ @ 0x18008DE50
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 * Callees:
 *     <none>
 */

HWND __fastcall XamlExplorerHostWindow::GetWindow(XamlExplorerHostWindow *this)
{
  return (HWND)*((_QWORD *)this + 11);
}
