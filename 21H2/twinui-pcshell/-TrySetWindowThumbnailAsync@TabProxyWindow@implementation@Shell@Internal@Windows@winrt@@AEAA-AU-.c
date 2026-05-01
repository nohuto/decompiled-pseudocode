/*
 * XREFs of ?TrySetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ @ 0x180100A60
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FC9F0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_InitCoro$1 @ 0x1800FE9D8 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Ini.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync(
        __int64 a1,
        __int64 a2)
{
  void *v4; // rax
  unsigned int v6; // [rsp+668h] [rbp+10h] BYREF

  v4 = operator new(0x628uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync__InitCoro_1(
    &v6,
    (__int64)v4 + 96,
    a2,
    a1);
  return a2;
}
