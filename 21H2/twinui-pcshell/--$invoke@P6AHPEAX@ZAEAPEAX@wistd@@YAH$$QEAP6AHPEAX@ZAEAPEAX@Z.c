/*
 * XREFs of ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009532C
 * Callers:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC138 (-end_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC294 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAX_J@Z @ 0x1800ACA2C (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAX_J@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800AE0C8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip@@AEAA?AU_GUID@@XZ @ 0x1800AEBD0 (-start@-$shared_data@$00$0A@$0A@@details@tip@@AEAA-AU_GUID@@XZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAA?AU_GUID@@XZ @ 0x1800AED20 (-start@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAA-AU_GUID@@XZ.c)
 *     ??1?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x180135F7C (--1-$tuple@V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_n.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180135FCC (--1-$unique_any_t@V-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle.c)
 *     ?CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x180137DDC (-CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV-$tip_te.c)
 *     _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x180138E40 (_anonymous_namespace_--DoRequestorAndForegroundPublisherMatch.c)
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x180139A60 (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18013C270 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 *     ??1?$tuple@Vpath@filesystem@std@@V?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AXPEAX@Z$1?DeleteAndCloseFileHandle@?A0x5aed2876@@YAX0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x180147BF4 (--1-$tuple@Vpath@filesystem@std@@V-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_po.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AXPEAX@Z$1?DeleteAndCloseFileHandle@?A0x5aed2876@@YAX0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180147C80 (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AXPEAX@Z$1-DeleteAndClos.c)
 *     _anonymous_namespace_::CreateTemporaryLogoFile @ 0x180148FEC (_anonymous_namespace_--CreateTemporaryLogoFile.c)
 *     ?close_reset@?$resource_policy@PEAXP6AXPEAX@Z$1?DeleteAndCloseFileHandle@?A0x5aed2876@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX_J$0?0PEAX@details@wil@@SAXPEAX@Z @ 0x18014D59C (-close_reset@-$resource_policy@PEAXP6AXPEAX@Z$1-DeleteAndCloseFileHandle@-A0x5aed2876@@YAX0@ZU-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::invoke<int (*)(void *),void * &>(__int64 (__fastcall **a1)(_QWORD), _QWORD *a2)
{
  return (*a1)(*a2);
}
