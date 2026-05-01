/*
 * XREFs of ?await_suspend@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180145008
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E2D0 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2 @ 0x180140370 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     CoGetObjectContext_0 @ 0x1800952F1 (CoGetObjectContext_0.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$?0V_lambda_e5b45a8e7f2c7ec847f24290172a79dc_@@@?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_e5b45a8e7f2c7ec847f24290172a79dc_@@@Z @ 0x18012990C (--$-0V_lambda_e5b45a8e7f2c7ec847f24290172a79dc_@@@-$AsyncOperationCompletedHandler@U-$IReference.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::await_suspend(
        _QWORD **a1,
        __int64 a2)
{
  unsigned int ObjectContext_0; // eax
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-30h] BYREF
  LPVOID ppv[2]; // [rsp+38h] [rbp-20h] BYREF

  ppv[0] = 0LL;
  ObjectContext_0 = CoGetObjectContext_0(&winrt::impl::guid_storage<winrt::impl::IContextCallback>::value, ppv);
  winrt::check_hresult(ObjectContext_0);
  v5 = *a1;
  v9[0] = a2;
  ppv[1] = 0LL;
  v9[1] = ppv[0];
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>(
    &v8,
    v9);
  v6 = v8;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v5 + 48LL))(*v5, v8);
  winrt::check_hresult(v7);
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
}
