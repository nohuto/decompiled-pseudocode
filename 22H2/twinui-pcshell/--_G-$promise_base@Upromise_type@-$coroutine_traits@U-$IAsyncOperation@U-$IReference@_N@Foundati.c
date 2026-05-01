/*
 * XREFs of ??_G?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAAPEAXI@Z @ 0x180147F10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180147A14 (--1-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundatio.c)
 */

__int64 *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,void>::`scalar deleting destructor'(
        __int64 *Block,
        char a2)
{
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,void>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
