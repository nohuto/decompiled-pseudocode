/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800FFE64
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001130 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1800FFE28 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  word_1803E5D28 = 0;
  qword_1803E5CF0 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_1803E5CF8 = 0LL;
  *(_OWORD *)&stru_1803E5D08.Ptr = 0LL;
  xmmword_1803E5D18 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_1803E5D30);
  qword_1803E5D78 = 0LL;
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_1803E5D80);
  qword_1803E5DE8 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1803E5DC8 = 0LL;
  xmmword_1803E5DD8 = 0LL;
  return result;
}
