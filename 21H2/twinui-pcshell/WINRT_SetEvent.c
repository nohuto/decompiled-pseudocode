/*
 * XREFs of WINRT_SetEvent @ 0x18009144E
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___lambda_ddff42c9e86eec33477d2fc149b371cd___::Invoke @ 0x1800A7B10 (winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows-.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo_winrt::Windows::Storage::Streams::IRandomAccessStream_____lambda_f0c7bfcec3116c957850ec0211f27af7___::Invoke @ 0x18013ADA0 (winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_wi_ea_18013ADA0.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___::Invoke @ 0x180262FE0 (winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--hstring_.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_SetEvent(HANDLE hEvent)
{
  return SetEvent(hEvent);
}
