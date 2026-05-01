/*
 * XREFs of ??$?0V_lambda_e5b45a8e7f2c7ec847f24290172a79dc_@@@?$AsyncOperationCompletedHandler@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_e5b45a8e7f2c7ec847f24290172a79dc_@@@Z @ 0x18012990C
 * Callers:
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180145008 (-await_suspend@-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@winrt@@@Fo.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v6; // [rsp+20h] [rbp-18h]

  v6 = operator new(0x20uLL);
  v6[1] = *a2;
  v4 = a2[1];
  a2[1] = 0LL;
  v6[2] = v4;
  *((_DWORD *)v6 + 6) = 1;
  *v6 = &winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>,_lambda_e5b45a8e7f2c7ec847f24290172a79dc_>::`vftable';
  *a1 = v6;
  if ( a2[1] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a2 + 1);
  return a1;
}
