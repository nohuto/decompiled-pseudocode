/*
 * XREFs of ??1_lambda_9783efd0cf9a4011a5fefd366cc6ea27_@@QEAA@XZ @ 0x1800F4458
 * Callers:
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___::await_suspend_::_1_::dtor$4 @ 0x180100E94 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Wind_ea_180100E94.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___::await_suspend_::_1_::dtor$4 @ 0x180100F6C (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Wind_ea_180100F6C.c)
 *     _winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool___::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_e5b45a8e7f2c7ec847f24290172a79dc____::_1_::dtor$0 @ 0x180129999 (_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows--Foundat_ea_180129999.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_unsigned_int___::await_suspend_::_1_::dtor$4 @ 0x1804D4F84 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_unsigned_in_ea_1804D4F84.c)
 *     _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_bool___::await_suspend_::_1_::dtor$4 @ 0x1804D5074 (_winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_bool___--aw_ea_1804D5074.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

void __fastcall _lambda_9783efd0cf9a4011a5fefd366cc6ea27_::~_lambda_9783efd0cf9a4011a5fefd366cc6ea27_(
        _lambda_9783efd0cf9a4011a5fefd366cc6ea27_ *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 8);
  if ( *v1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v1);
}
