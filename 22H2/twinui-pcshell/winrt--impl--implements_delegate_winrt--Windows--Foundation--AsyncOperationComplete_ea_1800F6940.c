/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_0a05c7617f82c24c45062b5c50c395f8___::QueryInterface @ 0x1800F6940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_0a05c7617f82c24c45062b5c50c395f8___::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  if ( *a2 == winrt::impl::guid_storage<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>::value
    && a2[1] == 0x9396BA2CC6F2DF89uLL
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
