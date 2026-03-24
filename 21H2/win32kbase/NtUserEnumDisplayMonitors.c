/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C006FDF0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     xxxEnumDisplayMonitors @ 0x1C006FE90 (xxxEnumDisplayMonitors.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
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
