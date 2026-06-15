/*
 * XREFs of ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x140022928
 * Callers:
 *     _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_ @ 0x14001ED20 (_lambda_d51448ba32f8ef42e59400edd4566183_--_lambda_invoker_cdecl_.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x140027EA0 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x1400223AC (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1400251AC (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x14003B818 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

void __fastcall wil::details::FeatureStateManager::FlushUsage(wil::details::FeatureStateManager *this)
{
  if ( !wil::ProcessShutdownInProgress(this) && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)this) )
    wil::details_abi::SubscriptionList::OnSignaled(
      (wil::details_abi::SubscriptionList *)(*((_QWORD *)this + 3) + 200LL),
      *((struct wil::srwlock **)this + 3));
}
