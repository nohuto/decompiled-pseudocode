struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  word_1803E2D18 = 0;
  qword_1803E2CE0 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_1803E2CE8 = 0LL;
  *(_OWORD *)&stru_1803E2CF8.Ptr = 0LL;
  xmmword_1803E2D08 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_1803E2D20);
  qword_1803E2D68 = 0LL;
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_1803E2D70);
  qword_1803E2DD8 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1803E2DB8 = 0LL;
  xmmword_1803E2DC8 = 0LL;
  return result;
}
