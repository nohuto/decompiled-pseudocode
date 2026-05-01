/*
 * XREFs of ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801351E4
 * Callers:
 *     ??0_lambda_06451eacb7a8912ae3302a5615ee0eb8_@@QEAA@AEBV?$shared_ptr@VPinRequestContext@@@std@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@AEBVPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@@Z @ 0x180134C34 (--0_lambda_06451eacb7a8912ae3302a5615ee0eb8_@@QEAA@AEBV-$shared_ptr@VPinRequestContext@@@std@@$$.c)
 *     ??0_lambda_3157cebf66dd36ffc1ef22aa7a99425b_@@QEAA@AEBV?$shared_ptr@VPinRequestContext@@@std@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@AEBVPinManagerRequestPinItem@PinManagerTelemetry@@@Z @ 0x180134CA0 (--0_lambda_3157cebf66dd36ffc1ef22aa7a99425b_@@QEAA@AEBV-$shared_ptr@VPinRequestContext@@@std@@$$.c)
 *     ??0PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@AEBV01@@Z @ 0x180135904 (--0PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@AEBV01@@Z.c)
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18013C270 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x18013FBB4 (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180019EFC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ??4?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18013647C (--4-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    1);
  *((_DWORD *)a1 + 14) = 0;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 13) = 0LL;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_DWORD *)a1 + 33) = 0;
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_BYTE *)a1 + 60) = 0;
  *((_BYTE *)a1 + 120) = 0;
  *((_DWORD *)a1 + 32) = 1;
  memset_0((char *)a1 + 136, 0, 0x90uLL);
  *((_QWORD *)a1 + 37) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  return a1;
}
