/*
 * XREFs of ?_ConstructPromise@?$_Resumable_helper_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@SAXPEAX0H@Z @ 0x18014D190
 * Callers:
 *     RequestNotificationPinConsentAsync$_InitCoro$1 @ 0x18014A504 (RequestNotificationPinConsentAsync$_InitCoro$1.c)
 * Callees:
 *     memset_0 @ 0x180090958 (memset_0.c)
 */

void **__fastcall std::experimental::_Resumable_helper_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::_ConstructPromise(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rbx
  void **result; // rax

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3 != 0 ? 2 : 65538;
  v3 = a1 - 96;
  memset_0((void *)(a1 - 96), 0, 0x58uLL);
  *(_QWORD *)(v3 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::`vftable';
  *(_QWORD *)(v3 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  *(_QWORD *)(v3 + 8) = 1LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)v3 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,void>::`vftable';
  __ExceptionPtrCreate((void *)(v3 + 32));
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_DWORD *)(v3 + 72) = 0;
  *(_BYTE *)(v3 + 76) = 0;
  result = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type::`vftable';
  *(_QWORD *)v3 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type::`vftable';
  *(_QWORD *)(v3 + 80) = 0LL;
  return result;
}
