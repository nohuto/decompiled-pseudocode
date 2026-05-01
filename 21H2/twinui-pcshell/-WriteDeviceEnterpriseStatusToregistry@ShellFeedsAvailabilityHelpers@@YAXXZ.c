/*
 * XREFs of ?WriteDeviceEnterpriseStatusToregistry@ShellFeedsAvailabilityHelpers@@YAXXZ @ 0x180116630
 * Callers:
 *     ?WriteDeviceenterpriseStatusToregistry@ShellFeedsAvailability@@YAXXZ @ 0x1801082B0 (-WriteDeviceenterpriseStatusToregistry@ShellFeedsAvailability@@YAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z @ 0x180108180 (-SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGKK@Z.c)
 *     ?IsDeviceAADJoined@ShellFeedsAvailabilityHelpers@@YA_NXZ @ 0x18010A450 (-IsDeviceAADJoined@ShellFeedsAvailabilityHelpers@@YA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18020620C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall ShellFeedsAvailabilityHelpers::WriteDeviceEnterpriseStatusToregistry(
        ShellFeedsAvailabilityHelpers *this)
{
  DWORD JoinInformation; // eax
  ShellFeedsAvailabilityHelpers *v2; // rcx
  bool v3; // bl
  _BOOL8 v4; // rdx
  int v5; // eax
  unsigned int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Buffer; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  Buffer = 0LL;
  JoinInformation = NetGetJoinInformation(0LL, (LPWSTR *)&Buffer, (PNETSETUP_JOIN_STATUS)&v8);
  if ( JoinInformation )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x274,
      (unsigned int)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
      (const char *)JoinInformation,
      v6);
  v2 = (ShellFeedsAvailabilityHelpers *)Buffer;
  v3 = v8 == 3;
  if ( Buffer )
    NetApiBufferFree(Buffer);
  v4 = v3 || ShellFeedsAvailabilityHelpers::IsDeviceAADJoined(v2);
  v5 = ShellFeedsExperienceHelpers::SetShellFeedsRegKey(
         (ShellFeedsExperienceHelpers *)L"IsEnterpriseDevice",
         (const unsigned __int16 *)v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x287,
      (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
      (const char *)(unsigned int)v5);
}
