/*
 * XREFs of ??1?$handle_type@Uhandle_traits@winrt@@@winrt@@QEAA@XZ @ 0x1802611EC
 * Callers:
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::Collections::IVectorView_winrt::WindowsUdk::UI::Shell::WebSearchProvider______::_1_::dtor$0 @ 0x1800A07E1 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Fou.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Internal::UI::Shell::WindowTabDataModel____::_1_::dtor$0 @ 0x1800E7079 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Int.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference____::_1_::dtor$0 @ 0x1800F40A2 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Sto.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType____::_1_::dtor$0 @ 0x1800F4183 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_1800F4183.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoInfo_winrt::Windows::Storage::Streams::IRandomAccessStream______::_1_::dtor$0 @ 0x180134B12 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt-_ea_180134B12.c)
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::hstring____::_1_::dtor$0 @ 0x1801755B1 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperation_winrt--hstring____-.c)
 * Callees:
 *     WINRT_CloseHandle @ 0x180090CF2 (WINRT_CloseHandle.c)
 */

BOOL __fastcall winrt::handle_type<winrt::handle_traits>::~handle_type<winrt::handle_traits>(void **a1)
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
