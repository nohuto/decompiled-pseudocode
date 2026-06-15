/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x14001C78C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x140001270 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x140020B20 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  __int64 result; // rax

  wil::details::g_featureStateManager = 0;
  word_1400901E8 = 0;
  qword_1400901B0 = (__int64)"WilStaging_02";
  *(_OWORD *)&lpMem = 0LL;
  xmmword_1400901C8 = 0LL;
  xmmword_1400901D8 = 0LL;
  xmmword_1400901F0 = 0LL;
  xmmword_140090200 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_140090210);
  result = wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_140090258);
  wil::details::g_featureStateManager = 1;
  xmmword_1400902A0 = 0LL;
  xmmword_1400902B0 = 0LL;
  return result;
}
