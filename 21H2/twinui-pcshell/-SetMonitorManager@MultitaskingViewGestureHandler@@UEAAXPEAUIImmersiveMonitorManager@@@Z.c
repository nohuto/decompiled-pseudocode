/*
 * XREFs of ?SetMonitorManager@MultitaskingViewGestureHandler@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1803F1640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewGestureHandler::SetMonitorManager(
        MultitaskingViewGestureHandler *this,
        struct IImmersiveMonitorManager *a2)
{
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
    (__int64 *)this + 4,
    (__int64)a2);
}
