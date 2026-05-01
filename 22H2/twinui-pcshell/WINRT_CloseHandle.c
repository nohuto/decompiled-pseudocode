/*
 * XREFs of WINRT_CloseHandle @ 0x180090CD2
 * Callers:
 *     ??$wait_for_completed@U?$IAsyncOperation@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800A0700 (--$wait_for_completed@U-$IAsyncOperation@U-$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@w.c)
 *     _lambda_f0c7bfcec3116c957850ec0211f27af7_::__lambda_f0c7bfcec3116c957850ec0211f27af7_ @ 0x1800A12C4 (_lambda_f0c7bfcec3116c957850ec0211f27af7_--__lambda_f0c7bfcec3116c957850ec0211f27af7_.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___lambda_ddff42c9e86eec33477d2fc149b371cd___::Release @ 0x1800A85F0 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncOperationComplete_ea_1800A85F0.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800E6E48 (--$wait_for_completed@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@F.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800F3E80 (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@w.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800F3F5C (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Win.c)
 *     winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo_winrt::Windows::Storage::Streams::IRandomAccessStream___::AsyncOperationCompletedHandler_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo_winrt::Windows::Storage::Streams::IRandomAccessStream_____lambda_f0c7bfcec3116c957850ec0211f27af7___ @ 0x1801299AC (winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows--Foundation--Collectio.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo_winrt::Windows::Storage::Streams::IRandomAccessStream_____lambda_f0c7bfcec3116c957850ec0211f27af7___::Release @ 0x18013DD80 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncOperationComplete_ea_18013DD80.c)
 *     ??1?$handle_type@Uhandle_traits@winrt@@@winrt@@QEAA@XZ @ 0x18026103C (--1-$handle_type@Uhandle_traits@winrt@@@winrt@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_CloseHandle(HANDLE hObject)
{
  return CloseHandle(hObject);
}
