/*
 * XREFs of _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::await_resume_::_1_::dtor$1 @ 0x180144FDB
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x1800A1308 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::await_resume_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView(*(__int64 **)(a2 + 40));
  }
}
