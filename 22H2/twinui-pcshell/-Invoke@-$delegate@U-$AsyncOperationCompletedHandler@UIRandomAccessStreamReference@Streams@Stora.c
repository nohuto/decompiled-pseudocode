/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_7df6716d9a7c6ea7f1df7ee8fa5760e3_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x1800F62B0
 * Callers:
 *     <none>
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,_lambda_7df6716d9a7c6ea7f1df7ee8fa5760e3_>::Invoke(
        __int64 a1)
{
  unsigned int v1; // eax
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v3[0] = 0LL;
  v3[1] = *(_QWORD *)(a1 + 8);
  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void (***)(void)), _QWORD *, void *, int, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
         *(_QWORD *)(a1 + 16),
         _lambda_54b66c8acde6d03bc095a0ebbc80a1f1_::_lambda_invoker_cdecl_,
         v3,
         &winrt::impl::guid_storage<winrt::impl::ICallbackWithNoReentrancyToApplicationSTA>::value,
         5,
         0LL);
  try
  {
    winrt::check_hresult(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
