/*
 * XREFs of ?await_ready@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x180100D98
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2 @ 0x1800F8270 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$2 @ 0x1800FA550 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800FE9F0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 * Callees:
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AW4AsyncStatus@Foundation@Windows@3@XZ @ 0x1800FE070 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UIRandomAccessStreamReference.c)
 */

bool __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready(
        __int64 *a1)
{
  return (unsigned int)winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>::Status(*a1) == 1;
}
