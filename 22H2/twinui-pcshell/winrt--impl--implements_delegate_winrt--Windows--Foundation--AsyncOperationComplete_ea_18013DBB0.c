/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_a26f18ab584c88017ddfe4edd20bfc0d___::QueryInterface @ 0x18013DBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_a26f18ab584c88017ddfe4edd20bfc0d___::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  if ( *a2 == winrt::impl::guid_storage<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::IReference<bool>>>::value
    && a2[1] == 0x70BFE33D670BDF84LL
    || *a2 == winrt::impl::guid_storage<IUnknown>::value && a2[1] == 0x46000000000000C0LL
    || *a2 == winrt::impl::guid_storage<winrt::impl::IAgileObject>::value && a2[1] == 0x905B8FCA64EEFFC0uLL )
  {
    *a3 = a1;
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 1u);
    return 0LL;
  }
  else if ( *a2 == winrt::impl::guid_storage<winrt::impl::IMarshal>::value && a2[1] == 0x46000000000000C0LL )
  {
    return winrt::impl::make_marshaler(a1, a3);
  }
  else
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
}
