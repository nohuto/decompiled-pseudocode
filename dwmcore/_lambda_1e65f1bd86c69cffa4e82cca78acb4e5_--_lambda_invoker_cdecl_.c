__int64 __fastcall lambda_1e65f1bd86c69cffa4e82cca78acb4e5_::_lambda_invoker_cdecl_(CComputeScribbleScheduler *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CComputeScribbleScheduler::ProcessScribbleFrame(a1);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      485LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v1);
  return 0LL;
}
