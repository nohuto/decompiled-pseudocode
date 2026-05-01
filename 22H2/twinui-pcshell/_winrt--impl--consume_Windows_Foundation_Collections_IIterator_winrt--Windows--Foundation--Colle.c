/*
 * XREFs of _winrt::impl::consume_Windows_Foundation_Collections_IIterator_winrt::Windows::Foundation::Collections::IIterator_winrt::Windows::ApplicationModel::Package__winrt::Windows::ApplicationModel::Package_::Current_::_1_::dtor$0 @ 0x1800A2F16
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x1800A1308 (--1WindowTabView@Shell@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::consume_Windows_Foundation_Collections_IIterator_winrt::Windows::Foundation::Collections::IIterator_winrt::Windows::ApplicationModel::Package__winrt::Windows::ApplicationModel::Package_::Current_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::Internal::UI::Shell::WindowTabView::~WindowTabView(*(__int64 **)(a2 + 72));
  }
}
