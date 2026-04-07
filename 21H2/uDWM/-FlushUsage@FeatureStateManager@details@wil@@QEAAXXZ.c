/*
 * XREFs of ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18007E5E0
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18002D860 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_ @ 0x180042FA0 (_lambda_d51448ba32f8ef42e59400edd4566183_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18002D544 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x18002E3F0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18002E4D8 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18007ED2C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall wil::details::FeatureStateManager::FlushUsage(wil::details::FeatureStateManager *this)
{
  if ( !wil::ProcessShutdownInProgress(this) && wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)this) )
  {
    wil::details_abi::SubscriptionList::OnSignaled(
      (LPCRITICAL_SECTION)(*((_QWORD *)this + 3) + 200LL),
      *((PSRWLOCK *)this + 3));
    wil::details_abi::FeatureStateData::RecordUsage(*((RTL_SRWLOCK **)this + 3));
  }
}
