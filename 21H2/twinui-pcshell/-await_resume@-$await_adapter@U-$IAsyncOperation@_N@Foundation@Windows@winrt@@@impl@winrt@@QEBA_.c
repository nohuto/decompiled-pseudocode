/*
 * XREFs of ?await_resume@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1804D5204
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_ResumeCoro$2 @ 0x1800DFCB0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800DFCB0.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$2 @ 0x1800E08D0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800E08D0.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FC9F0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$2 @ 0x18013C8D0 (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeCo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221A18 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>>::await_resume(
        _QWORD **a1)
{
  _QWORD *v1; // rax
  signed int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v1 + 64LL))(*v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
