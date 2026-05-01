/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_563ef2cba1e039dda91c2deec08b635f_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F6A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,_lambda_563ef2cba1e039dda91c2deec08b635f_>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  if ( *a2 == winrt::impl::guid_storage<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::value
    && a2[1] == 0x357F1C54EDDBB183LL
    || *a2 == winrt::impl::guid_storage<IUnknown>::value && a2[1] == 0x46000000000000C0LL
    || *a2 == winrt::impl::guid_storage<winrt::impl::IAgileObject>::value && a2[1] == 0x905B8FCA64EEFFC0uLL )
  {
    *a3 = a1;
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
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
