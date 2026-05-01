/*
 * XREFs of ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18013FE60
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012AC30 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E2A0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E2A0.c)
 *     ??R_lambda_06451eacb7a8912ae3302a5615ee0eb8_@@QEAAXW4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x1801365E0 (--R_lambda_06451eacb7a8912ae3302a5615ee0eb8_@@QEAAXW4PinManagerRequestPinItemResult@PinManagerTe.c)
 *     ??R_lambda_3157cebf66dd36ffc1ef22aa7a99425b_@@QEAAXW4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x180136814 (--R_lambda_3157cebf66dd36ffc1ef22aa7a99425b_@@QEAAXW4PinManagerRequestPinItemResult@PinManagerTe.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x180138320 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@PEFBU_ITEMIDLIST@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x18013858C (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$share_ea_18013858C.c)
 *     ?HandlePinRejected@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013A7EC (-HandlePinRejected@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?HandlePinRequested@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013AA44 (-HandlePinRequested@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x18013AF10 (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x18013B238 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x18013B734 (-IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV-$shar.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E2D0 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x180143AB0 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall PinRequestContext::RequestorBestAvailableAppId(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  _OWORD *result; // rax
  __int128 v5; // [rsp+0h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)&v5 = *(_QWORD *)(a1 + 24);
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v2 + 2 * v3) );
    *((_QWORD *)&v5 + 1) = v3;
  }
  else
  {
    v5 = 0uLL;
  }
  result = a2;
  *a2 = v5;
  return result;
}
