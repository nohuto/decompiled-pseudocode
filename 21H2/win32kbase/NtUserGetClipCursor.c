/*
 * XREFs of NtUserGetClipCursor @ 0x1C012E8E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002AA84 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EnterSharedCrit @ 0x1C0035E30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0070860 (PhysicalToLogicalDPIRect.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0087170 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C009C818 (ApiSetCheckCursorClipAccess.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C00C04D0 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetClipCursor(_OWORD *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  _OWORD *v4; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v7; // [rsp+30h] [rbp-48h]
  __int64 v8; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v9; // [rsp+50h] [rbp-28h] BYREF

  EnterSharedCrit(0, 1);
  v3 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1u, 0) )
  {
    v4 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v4 = (_OWORD *)MmUserProbeAddress;
    *v4 = *v4;
    CCursorClip::GetClip((struct tagRECT *)gpCursorClip, &v9);
    LODWORD(v7) = (v9.left + v9.right) / 2;
    HIDWORD(v7) = (v9.top + v9.bottom) / 2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v8 = GuessMonitorOverrideForCoordinateConversions(v7, CurrentThreadDpiAwarenessContext, 1);
    PhysicalToLogicalDPIRect(a1, &v9, CurrentThreadDpiAwarenessContext, &v8);
    v3 = 1;
  }
  else
  {
    UserSetLastError(5LL, v2);
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
