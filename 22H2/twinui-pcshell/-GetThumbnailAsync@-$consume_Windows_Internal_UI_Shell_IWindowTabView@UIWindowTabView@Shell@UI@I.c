/*
 * XREFs of ?GetThumbnailAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@3@AEBUBitmapSize@Imaging@Graphics@63@_N@Z @ 0x1800F5E3C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2 @ 0x1800FA550 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FE9F0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::GetThumbnailAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        char a4)
{
  __int64 v4; // rcx
  _QWORD *v5; // r10
  unsigned int v7; // eax
  _QWORD *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v4 = *a1;
  v5 = a3;
  v9 = 0LL;
  LOBYTE(a3) = a4;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, _QWORD **))(*(_QWORD *)v4 + 136LL))(v4, *v5, a3, &v9);
  winrt::check_hresult(v7);
  *a2 = v9;
  return a2;
}
