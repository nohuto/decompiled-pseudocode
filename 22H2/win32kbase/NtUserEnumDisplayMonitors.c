/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C00708A0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     xxxEnumDisplayMonitors @ 0x1C0070940 (xxxEnumDisplayMonitors.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(HDC a1)
{
  int v2; // edi

  EnterCrit(0, 1);
  v2 = 0;
  if ( gbVideoInitialized )
    v2 = xxxEnumDisplayMonitors(a1, 0);
  UserSessionSwitchLeaveCrit();
  return v2;
}
