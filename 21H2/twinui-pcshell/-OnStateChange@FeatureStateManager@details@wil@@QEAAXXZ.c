/*
 * XREFs of ?OnStateChange@FeatureStateManager@details@wil@@QEAAXXZ @ 0x1801AAFF0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_0ae89f7ca77040da3af7dd229dfecfb4_@@CAJU__WIL__WNF_STATE_NAME@@KPEAU__WIL__WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1801A7CF0 (-_lambda_invoker_cdecl_@_lambda_0ae89f7ca77040da3af7dd229dfecfb4_@@CAJU__WIL__WNF_STATE_NAME@@KP.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CAXPEAX@Z @ 0x1801A7DA0 (-_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CAXPEAX@Z.c)
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1801AAE3C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall wil::details::FeatureStateManager::OnStateChange(wil::details::FeatureStateManager *this)
{
  if ( *(_BYTE *)this )
    wil::details_abi::SubscriptionList::OnSignaled(
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 72),
      (RTL_SRWLOCK *)this + 4);
}
