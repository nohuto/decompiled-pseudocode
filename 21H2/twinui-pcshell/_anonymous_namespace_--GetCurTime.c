/*
 * XREFs of _anonymous_namespace_::GetCurTime @ 0x18028F844
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1801A78AC (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180290450 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

BOOL __fastcall anonymous_namespace_::GetCurTime(LPFILETIME lpFileTime)
{
  struct _SYSTEMTIME SystemTime; // [rsp+20h] [rbp-28h] BYREF

  GetSystemTime(&SystemTime);
  return SystemTimeToFileTime(&SystemTime, lpFileTime);
}
