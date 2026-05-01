/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UWindowTabDataModelTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_69f91e77421940a58b7abb1c2dc0e920_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800EBF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::WindowTabDataModelTabsChangedEventArgs>,_lambda_69f91e77421940a58b7abb1c2dc0e920_>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  if ( *a2 == winrt::impl::guid_storage<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::WindowTabDataModelTabsChangedEventArgs>>::value
    && a2[1] == 0x88AC2EE3F10418A7uLL
    || *a2 == winrt::impl::guid_storage<IUnknown>::value && a2[1] == 0x46000000000000C0LL
    || *a2 == winrt::impl::guid_storage<winrt::impl::IAgileObject>::value && a2[1] == 0x905B8FCA64EEFFC0uLL )
  {
    *a3 = a1;
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 1u);
    return 0LL;
  }
  else if ( *a2 == winrt::impl::guid_storage<winrt::impl::IMarshal>::value && a2[1] == 0x46000000000000C0LL )
  {
    return winrt::impl::make_marshaler(a1, a3);
  }
  else
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
}
