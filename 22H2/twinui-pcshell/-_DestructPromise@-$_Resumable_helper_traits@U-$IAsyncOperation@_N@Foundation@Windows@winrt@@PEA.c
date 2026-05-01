/*
 * XREFs of ?_DestructPromise@?$_Resumable_helper_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@SAXPEAX@Z @ 0x180100C80
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_InitCoro$1_::_1_::dtor$1 @ 0x1800FE9B1 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumb_ea_1800FE9B1.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FE9F0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::experimental::_Resumable_helper_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::_DestructPromise(
        __int64 a1)
{
  return std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type::`vector deleting destructor'(
           (__int64 *)(a1 - 96),
           0);
}
