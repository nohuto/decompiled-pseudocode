/*
 * XREFs of winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::GetResults @ 0x18013A1C0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180090964 (_CxxThrowException_0.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180090CA2 (ReleaseSRWLockExclusive_0.c)
 *     WINRT_AcquireSRWLockExclusive @ 0x180090CC6 (WINRT_AcquireSRWLockExclusive.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::rethrow_if_failed @ 0x1801460CC (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1801460CC.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@XZ @ 0x1804D11E4 (--0hresult_illegal_method_call@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::GetResults(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v6; // rdx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (a1 - 16) & -(__int64)(a1 != 0);
  v8 = v3 + 48;
  WINRT_AcquireSRWLockExclusive((PSRWLOCK)(v3 + 48));
  if ( *(_DWORD *)(v3 + 72) != 1 )
  {
    try
    {
      winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::rethrow_if_failed();
      winrt::hresult_illegal_method_call::hresult_illegal_method_call((winrt::hresult_illegal_method_call *)pExceptionObject);
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    catch ( ... )
    {
      *(_DWORD *)(v6 + 80) = *(_DWORD *)winrt::to_hresult(&v8);
      return (unsigned int)v8;
    }
  }
  v4 = *(_QWORD *)(v3 + 80);
  *(_QWORD *)(v3 + 80) = 0LL;
  ReleaseSRWLockExclusive_0((PSRWLOCK)(v3 + 48));
  v8 = 0LL;
  *a2 = v4;
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v8);
  return 0LL;
}
