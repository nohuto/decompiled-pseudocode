/*
 * XREFs of ?SetWindowLivePreviewAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1800FC828
 * Callers:
 *     ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180101AF0 (-v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_InitCoro$1 @ 0x1800FA55C (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Init.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync(
        __int64 a1,
        _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+638h] [rbp+10h] BYREF

  v4 = operator new(0x5F8uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync__InitCoro_1(
    &v6,
    (__int64)v4,
    a2,
    a1);
  return a2;
}
