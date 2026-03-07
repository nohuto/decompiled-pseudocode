struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  word_1400169F8 = 0;
  qword_1400169C0 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_1400169C8 = 0LL;
  xmmword_1400169D8 = 0LL;
  xmmword_1400169E8 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_140016A00);
  qword_140016A48 = 0LL;
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_140016A50);
  qword_140016AB8 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_140016A98 = 0LL;
  xmmword_140016AA8 = 0LL;
  return result;
}
