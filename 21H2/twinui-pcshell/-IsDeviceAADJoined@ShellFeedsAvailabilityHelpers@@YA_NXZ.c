/*
 * XREFs of ?IsDeviceAADJoined@ShellFeedsAvailabilityHelpers@@YA_NXZ @ 0x18010A450
 * Callers:
 *     ?WriteDeviceEnterpriseStatusToregistry@ShellFeedsAvailabilityHelpers@@YAXXZ @ 0x180116630 (-WriteDeviceEnterpriseStatusToregistry@ShellFeedsAvailabilityHelpers@@YAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

bool __fastcall ShellFeedsAvailabilityHelpers::IsDeviceAADJoined(ShellFeedsAvailabilityHelpers *this)
{
  bool v1; // bl
  int JoinInfo; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _DWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v5 = 0LL;
  JoinInfo = DsrGetJoinInfo(0LL, &v5);
  if ( JoinInfo >= 0 )
  {
    if ( v5 )
      v1 = *v5 == 1;
    DsrFreeJoinInfo();
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x27C,
      (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
      (const char *)(unsigned int)JoinInfo);
  }
  return v1;
}
