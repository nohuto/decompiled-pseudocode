/*
 * XREFs of _lambda_a26f18ab584c88017ddfe4edd20bfc0d_::__lambda_a26f18ab584c88017ddfe4edd20bfc0d_ @ 0x1800E7CFC
 * Callers:
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs_::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___lambda_9149871aec59121227803e9d8e93736d____::_1_::dtor$0 @ 0x1800E3A90 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--UI--Shell--IWindowTabEx.c)
 *     _winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool___::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_a26f18ab584c88017ddfe4edd20bfc0d____::_1_::dtor$0 @ 0x1801298F9 (_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows--Foundation--IReferen.c)
 *     _winrt::Windows::Foundation::AsyncOperationCompletedHandler_unsigned_int_::AsyncOperationCompletedHandler_unsigned_int___lambda_2c0233b8eff337f44babb0a39eb13a06____::_1_::dtor$0 @ 0x1804CFC94 (_winrt--Windows--Foundation--AsyncOperationCompletedHandler_unsigned_int_--AsyncOperationComplet.c)
 *     _winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_8cbb94e41580c6c85ce6cc2ea21e6745____::_1_::dtor$0 @ 0x1804CFD08 (_winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool_--AsyncOperationCompletedHandle.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall lambda_a26f18ab584c88017ddfe4edd20bfc0d_::__lambda_a26f18ab584c88017ddfe4edd20bfc0d_(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
  return result;
}
