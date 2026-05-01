/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::Cancel @ 0x180137D18
 * Callers:
 *     winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::Cancel @ 0x180137CC0 (winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncOpera.c)
 * Callees:
 *     ReleaseSRWLockExclusive_0 @ 0x180090CC2 (ReleaseSRWLockExclusive_0.c)
 *     WINRT_AcquireSRWLockExclusive @ 0x180090CE6 (WINRT_AcquireSRWLockExclusive.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1804BAC08 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x1804D11E0 (--$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA-AVexception_ptr@0@Uhresult_canceled@winr.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1804D14F8 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::Cancel(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  const void *v4; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  WINRT_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  if ( !*(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 72) = 2;
    v3 = winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)v7);
    v4 = (const void *)std::make_exception_ptr<winrt::hresult_canceled>(v6, v3);
    __ExceptionPtrAssign((void *)(a1 + 32), v4);
    __ExceptionPtrDestroy(v6);
    winrt::Windows::Foundation::IUnknown::operator=(&v8, a1 + 64);
    v2 = v8;
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 48));
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v8);
}
