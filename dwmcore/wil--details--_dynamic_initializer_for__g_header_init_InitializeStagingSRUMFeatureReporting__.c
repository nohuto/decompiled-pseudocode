void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingSRUMFeatureReporting__())(wil::details *__hidden this, unsigned int, unsigned int, unsigned int)
{
  void (__fastcall *result)(wil::details *__hidden, unsigned int, unsigned int, unsigned int); // rax

  result = wil::details::RecordSRUMFeatureUsage;
  g_wil_details_RecordSRUMFeatureUsage = (__int64)wil::details::RecordSRUMFeatureUsage;
  return result;
}
