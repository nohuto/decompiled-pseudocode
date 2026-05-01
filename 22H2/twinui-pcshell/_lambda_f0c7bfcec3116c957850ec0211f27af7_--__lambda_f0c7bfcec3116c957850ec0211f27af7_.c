/*
 * XREFs of _lambda_f0c7bfcec3116c957850ec0211f27af7_::__lambda_f0c7bfcec3116c957850ec0211f27af7_ @ 0x1800A12C4
 * Callers:
 *     winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring_::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___ @ 0x18009BB10 (winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--hstring_--AsyncOperationComple.c)
 *     _winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring_::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90____::_1_::dtor$0 @ 0x18009BB6A (_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--hstring_--AsyncOperationCompl.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::Collections::IVectorView_winrt::WindowsUdk::UI::Shell::WebSearchProvider______::_1_::dtor$5 @ 0x1800A07CD (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1800A07CD.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Internal::UI::Shell::WindowTabDataModel____::_1_::dtor$5 @ 0x1800E6F15 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1800E6F15.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference____::_1_::dtor$5 @ 0x1800F3F3E (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1800F3F3E.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType____::_1_::dtor$5 @ 0x1800F401F (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1800F401F.c)
 *     _winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo_winrt::Windows::Storage::Streams::IRandomAccessStream___::AsyncOperationCompletedHandler_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo_winrt::Windows::Storage::Streams::IRandomAccessStream_____lambda_f0c7bfcec3116c957850ec0211f27af7____::_1_::dtor$0 @ 0x180129A33 (_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows--Foundation--Collecti.c)
 * Callees:
 *     WINRT_CloseHandle @ 0x180090CD2 (WINRT_CloseHandle.c)
 */

BOOL __fastcall lambda_f0c7bfcec3116c957850ec0211f27af7_::__lambda_f0c7bfcec3116c957850ec0211f27af7_(void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = WINRT_CloseHandle(v2);
    *a1 = 0LL;
  }
  return result;
}
