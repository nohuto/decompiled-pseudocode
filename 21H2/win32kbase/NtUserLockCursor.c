/*
 * XREFs of NtUserLockCursor @ 0x1C009C790
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002AA84 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C006FD90 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0070720 (LogicalToPhysicalDPIRect.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0087170 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C009C818 (ApiSetCheckCursorClipAccess.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01A2B54 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserLockCursor(struct tagRECT *a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  CCursorClip *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v8; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v9; // [rsp+50h] [rbp-28h] BYREF

  EnterCrit(0, 1);
  v9 = 0LL;
  v3 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(2LL) )
  {
    if ( a1 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (struct tagRECT *)MmUserProbeAddress;
      v9 = *a1;
      LODWORD(v7) = (v9.right + v9.left) / 2;
      HIDWORD(v7) = (v9.top + v9.bottom) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v7 = GuessMonitorOverrideForCoordinateConversions(v7, CurrentThreadDpiAwarenessContext, 0);
      LogicalToPhysicalDPIRect(&v9, &v9, CurrentThreadDpiAwarenessContext, &v7);
      v8 = v9;
      CCursorClip::LockCursor(v6, &v8);
    }
    else
    {
      CCursorClip::ClearClip(gpCursorClip);
    }
    v3 = 1;
  }
  else
  {
    UserSetLastError(5LL, v2);
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
