/*
 * XREFs of ??0FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800AECB4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001230 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1800AED54 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

wil::details::FeatureStateManager *__fastcall wil::details::FeatureStateManager::FeatureStateManager(
        wil::details::FeatureStateManager *this)
{
  wil::details::FeatureStateManager *result; // rax

  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = "WilStaging_02";
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 32) = 0;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details::FeatureStateManager *)((char *)this + 72));
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details::FeatureStateManager *)((char *)this + 168));
  *((_QWORD *)this + 30) = 0LL;
  result = this;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *(_BYTE *)this = 1;
  return result;
}
