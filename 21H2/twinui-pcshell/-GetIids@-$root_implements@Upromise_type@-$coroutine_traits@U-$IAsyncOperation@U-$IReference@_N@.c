/*
 * XREFs of ?GetIids@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x18014973C
 * Callers:
 *     ?GetIids@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x180149730 (-GetIids@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Fou.c)
 * Callees:
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x180091363 (__Platform_CoTaskMemAlloc.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,winrt::Windows::Foundation::IAsyncInfo>::GetIids(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  void *v4; // rax
  unsigned int v5; // ebx

  *a2 = 2;
  v4 = _Platform_CoTaskMemAlloc(0x20uLL);
  *a3 = v4;
  v5 = 0;
  if ( v4 )
    memmove_0(
      v4,
      &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,winrt::Windows::Foundation::IAsyncInfo>>::value,
      0x20uLL);
  else
    return (unsigned int)-2147024882;
  return v5;
}
