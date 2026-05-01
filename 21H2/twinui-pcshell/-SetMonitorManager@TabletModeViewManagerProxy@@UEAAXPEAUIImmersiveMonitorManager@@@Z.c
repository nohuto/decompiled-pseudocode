/*
 * XREFs of ?SetMonitorManager@TabletModeViewManagerProxy@@UEAAXPEAUIImmersiveMonitorManager@@@Z @ 0x1803F3C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModeViewManagerProxy::SetMonitorManager(
        TabletModeViewManagerProxy *this,
        struct IImmersiveMonitorManager *a2)
{
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
    (__int64 *)this + 3,
    (__int64)a2);
}
