/*
 * XREFs of __Platform_CoTaskMemAlloc @ 0x180091343
 * Callers:
 *     ?NonDelegatingGetIids@?$root_implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowFactoryInternal@345@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800EB624 (-NonDelegatingGetIids@-$root_implements@UTabProxyWindowFactory@implementation@Shell@Internal@Win.c)
 *     ?GetIids@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800F5C40 (-GetIids@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Win.c)
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::GetIids @ 0x1801395AC (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_1801395AC.c)
 *     ?GetIids@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1801495CC (-GetIids@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@.c)
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@KAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEBV34567@I@Z @ 0x180360214 (-AllocateAndCopyElements@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@.c)
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@KAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEBQE$AAU34567@I@Z @ 0x18036EC88 (-AllocateAndCopyElements@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Interna.c)
 *     ?GetIids@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804D2860 (-GetIids@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation@Windows.c)
 *     ?NonDelegatingGetIids@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1804D3184 (-NonDelegatingGetIids@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UISe.c)
 *     ?GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z @ 0x1804F6D40 (-GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __stdcall _Platform_CoTaskMemAlloc(SIZE_T cb)
{
  return CoTaskMemAlloc(cb);
}
