/*
 * XREFs of ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x180135568
 * Callers:
 *     ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800DB4A0 (-TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Win.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 *     ??$make_pair@AEAV?$shared_ptr@VPinOperationContext@@@std@@AEAU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@YA?AU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@0@AEAV?$shared_ptr@VPinOperationContext@@@0@AEAU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@Z @ 0x180134380 (--$make_pair@AEAV-$shared_ptr@VPinOperationContext@@@std@@AEAU-$IAsyncOperation@U-$IReference@_N.c)
 *     ??0_lambda_06451eacb7a8912ae3302a5615ee0eb8_@@QEAA@AEBV?$shared_ptr@VPinRequestContext@@@std@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@AEBVPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@@Z @ 0x180134C34 (--0_lambda_06451eacb7a8912ae3302a5615ee0eb8_@@QEAA@AEBV-$shared_ptr@VPinRequestContext@@@std@@$$.c)
 *     ??0_lambda_3157cebf66dd36ffc1ef22aa7a99425b_@@QEAA@AEBV?$shared_ptr@VPinRequestContext@@@std@@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@AEBVPinManagerRequestPinItem@PinManagerTelemetry@@@Z @ 0x180134CA0 (--0_lambda_3157cebf66dd36ffc1ef22aa7a99425b_@@QEAA@AEBV-$shared_ptr@VPinRequestContext@@@std@@$$.c)
 *     _lambda_3365270d15408528c67f40078b37390e_::_lambda_3365270d15408528c67f40078b37390e_ @ 0x180134D0C (_lambda_3365270d15408528c67f40078b37390e_--_lambda_3365270d15408528c67f40078b37390e_.c)
 *     ??0?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@AEBU01@@Z @ 0x180135510 (--0-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Foundati.c)
 *     ??4?$shared_ptr@VPinRequestContext@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801365D4 (--4-$shared_ptr@VPinRequestContext@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _lambda_3365270d15408528c67f40078b37390e_::operator() @ 0x180136A28 (_lambda_3365270d15408528c67f40078b37390e_--operator().c)
 *     ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x180137620 (-AreEquivalentPinOperations@@YA_NV-$shared_ptr@VPinOperationContext@@@std@@0@Z.c)
 *     _anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements @ 0x180138FF8 (_anonymous_namespace_--DoesRequestorMeetPinningForegroundRequirements.c)
 *     _anonymous_namespace_::GetPinRequestPromptContent @ 0x180139C40 (_anonymous_namespace_--GetPinRequestPromptContent.c)
 *     ?HandlePinRejected@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013A95C (-HandlePinRejected@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?HandlePinRequested@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013ABB4 (-HandlePinRequested@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x18013B3A8 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     ?IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV?$shared_ptr@VPinOperationContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x18013B660 (-IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV-$shared_p.c)
 *     ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013B730 (-IsPinOperationBlocked@PinHistory@@QEBA_NV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x18013B8A4 (-IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV-$shar.c)
 *     _anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation @ 0x18013B9E0 (_anonymous_namespace_--PinConsentPromptManager--IsPromptOutstandingForPinOperation.c)
 *     ?RequestContext@PinOperationContext@@QEBA?AV?$shared_ptr@VPinRequestContext@@@std@@XZ @ 0x18013E218 (-RequestContext@PinOperationContext@@QEBA-AV-$shared_ptr@VPinRequestContext@@@std@@XZ.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E440 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2 @ 0x1801404E0 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$2.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_f864d990cd59c7d75306b1f1b4f893f3_@@_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@EEAA_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@2@@Z @ 0x180144BE0 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_f864d990cd59c7d75306b1f1b4f893f3_@@_NAEBU-$pair@V-$shar.c)
 *     _lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::_lambda_c5e85cbf5d6483b8d295c64a0af9bf90_ @ 0x1801478E8 (_lambda_c5e85cbf5d6483b8d295c64a0af9bf90_--_lambda_c5e85cbf5d6483b8d295c64a0af9bf90_.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
