__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1803E2DF0 = 0LL;
  stru_1803E2DE8.Ptr = 0LL;
  byte_1803E2DF8 = 0;
  xmmword_1803E2E00 = 0LL;
  xmmword_1803E2E10 = 0LL;
  xmmword_1803E2E20 = 0LL;
  xmmword_1803E2E30 = 0LL;
  xmmword_1803E2E40 = 0LL;
  return result;
}
