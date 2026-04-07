/*
 * XREFs of ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180053964
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x180058A60 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x18002E3F0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18007DDBC (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::destroy(wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_featureStateManager[0] = 0;
    if ( qword_1800E6B98 )
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(qword_1800E6B98);
  }
  else
  {
    wil::details::FeatureStateManager::~FeatureStateManager((wil::details::FeatureStateManager *)wil::details::g_featureStateManager);
  }
}
