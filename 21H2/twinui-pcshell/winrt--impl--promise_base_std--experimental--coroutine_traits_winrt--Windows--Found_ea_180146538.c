/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::unhandled_exception @ 0x180146538
 * Callers:
 *     __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2_::_1_::catch$195 @ 0x18013F9A9 (__anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2_--_1_--catch$19.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18035CBA4 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??1exception_ptr@std@@QEAA@XZ @ 0x18035CD10 (--1exception_ptr@std@@QEAA@XZ.c)
 *     ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x18035CE44 (--4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x18035E914 (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18035ED68 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z @ 0x1804D1698 (--0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::unhandled_exception(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  winrt::slim_lock_guard::slim_lock_guard((winrt::slim_lock_guard *)&SRWLock, (struct winrt::slim_mutex *)(a1 + 48));
  v2 = std::current_exception(v4);
  std::exception_ptr::operator=(a1 + 32, v2);
  std::exception_ptr::~exception_ptr((std::exception_ptr *)v4);
  v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v4, (const struct std::exception_ptr *)(a1 + 32));
  try
  {
    std::rethrow_exception(v3);
  }
  catch ( winrt::hresult_canceled )
  {
    *(_DWORD *)(a1 + 72) = 2;
  }
  catch ( ... )
  {
    *(_DWORD *)(a1 + 72) = 3;
  }
  ReleaseSRWLockExclusive_0(SRWLock);
}
