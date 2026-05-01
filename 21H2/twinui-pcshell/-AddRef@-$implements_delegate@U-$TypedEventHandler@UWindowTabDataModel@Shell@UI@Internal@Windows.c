/*
 * XREFs of ?AddRef@?$implements_delegate@U?$TypedEventHandler@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UWindowTabDataModelTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_69f91e77421940a58b7abb1c2dc0e920_@@@impl@winrt@@UEAAIXZ @ 0x1800E8CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::WindowTabDataModelTabsChangedEventArgs>,_lambda_69f91e77421940a58b7abb1c2dc0e920_>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 32));
}
