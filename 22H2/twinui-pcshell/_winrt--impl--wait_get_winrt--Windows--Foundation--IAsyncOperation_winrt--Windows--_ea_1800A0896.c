/*
 * XREFs of _winrt::impl::wait_get_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::Collections::IVectorView_winrt::WindowsUdk::UI::Shell::WebSearchProvider______::_1_::dtor$3 @ 0x1800A0896
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x1800A1308 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::wait_get_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::Collections::IVectorView_winrt::WindowsUdk::UI::Shell::WebSearchProvider______::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView(*(winrt::Windows::Internal::UI::Shell::WindowTabView **)(a2 + 80));
  }
}
