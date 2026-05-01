/*
 * XREFs of ?get@?$runtime_class_name@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1804D579C
 * Callers:
 *     ?GetRuntimeClassName@?$implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800F5F70 (-GetRuntimeClassName@-$implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundat.c)
 *     ?NonDelegatingGetRuntimeClassName@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800F6544 (-NonDelegatingGetRuntimeClassName@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOp.c)
 *     ?NonDelegatingGetRuntimeClassName@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1804D3690 (-NonDelegatingGetRuntimeClassName@-$root_implements@Upromise_type@-$coroutine_trait_ea_1804D3690.c)
 * Callees:
 *     WINRT_WindowsCreateString @ 0x180091515 (WINRT_WindowsCreateString.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221A18 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

HSTRING *__fastcall winrt::impl::runtime_class_name<winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get(
        HSTRING *a1)
{
  HRESULT v2; // eax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = 0LL;
  v2 = WINRT_WindowsCreateString(L"Windows.Foundation.IAsyncOperation`1<Boolean>", 0x2Du, &string);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  *a1 = string;
  return a1;
}
