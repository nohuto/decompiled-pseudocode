/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_unsigned_int___lambda_2c0233b8eff337f44babb0a39eb13a06___::Invoke @ 0x1804D2EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??R?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEBAXAEBU?$IAsyncOperation@I@123@AEBW4AsyncStatus@123@@Z @ 0x1804D1744 (--R-$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEBAXAEBU-$IAsyncOperation@I@123.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_unsigned_int___lambda_2c0233b8eff337f44babb0a39eb13a06___::Invoke(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  v4 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
    *(_QWORD *)(a1 + 8),
    &winrt::impl::guid_storage<winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>>::value,
    &v4);
  try
  {
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>::operator()(&v4, &v5, &v6);
    if ( v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
