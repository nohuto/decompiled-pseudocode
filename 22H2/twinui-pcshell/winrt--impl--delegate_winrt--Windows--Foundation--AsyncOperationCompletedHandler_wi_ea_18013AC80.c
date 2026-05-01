/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_a26f18ab584c88017ddfe4edd20bfc0d___::Invoke @ 0x18013AC80
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??R?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEBAXAEBU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@123@AEBW4AsyncStatus@123@@Z @ 0x180136FE8 (--R-$AsyncOperationCompletedHandler@U-$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windo.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1802673F8 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_a26f18ab584c88017ddfe4edd20bfc0d___::Invoke(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, __int64 *, void **); // rbx
  void **v5; // rax
  struct IUnknown *v7; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF

  v7 = a2;
  v8 = a3;
  v9 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v3 + 24LL);
  v5 = winrt::put_abi((winrt *)&v9, a2);
  v4(
    v3,
    &winrt::impl::guid_storage<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>>::value,
    v5);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>::operator()(
    &v9,
    &v7,
    &v8);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  return 0LL;
}
