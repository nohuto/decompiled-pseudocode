/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_unsigned_int___lambda_2c0233b8eff337f44babb0a39eb13a06___::QueryInterface @ 0x1804D3AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_unsigned_int___lambda_2c0233b8eff337f44babb0a39eb13a06___::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = *a2 - winrt::impl::guid_storage<winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>>::value;
  if ( *a2 == winrt::impl::guid_storage<winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>>::value )
    v3 = a2[1] + 0x5B59E6B631D4D255LL;
  if ( !v3 )
    goto LABEL_15;
  v4 = *a2 - winrt::impl::guid_storage<IUnknown>::value;
  if ( *a2 == winrt::impl::guid_storage<IUnknown>::value )
    v4 = a2[1] - 0x46000000000000C0LL;
  if ( !v4 )
    goto LABEL_15;
  v5 = *a2 - winrt::impl::guid_storage<winrt::impl::IAgileObject>::value;
  if ( *a2 == winrt::impl::guid_storage<winrt::impl::IAgileObject>::value )
    v5 = a2[1] + 0x6FA470359B110040LL;
  if ( v5 )
  {
    v6 = *a2 - winrt::impl::guid_storage<winrt::impl::IMarshal>::value;
    if ( *a2 == winrt::impl::guid_storage<winrt::impl::IMarshal>::value )
      v6 = a2[1] - 0x46000000000000C0LL;
    if ( v6 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
    else
    {
      return winrt::impl::make_marshaler(a1, a3);
    }
  }
  else
  {
LABEL_15:
    *a3 = a1;
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 1u);
    return 0LL;
  }
}
