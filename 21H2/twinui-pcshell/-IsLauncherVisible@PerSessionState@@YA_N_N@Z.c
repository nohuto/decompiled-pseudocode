/*
 * XREFs of ?IsLauncherVisible@PerSessionState@@YA_N_N@Z @ 0x1803A0954
 * Callers:
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18039BA14 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1803A07EC (--$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

bool __fastcall PerSessionState::IsLauncherVisible(PerSessionState *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+38h] [rbp+10h] BYREF
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  v4 = (unsigned __int8)this;
  v5 = wil::wnf_query_nothrow<int>((__int64)this, &v9, &v10, a4);
  if ( v5 >= 0 )
  {
    v6 = v10;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\perlogoncheck.cpp",
      (const char *)(unsigned int)v5);
    v6 = v4;
  }
  return v6 != 0;
}
