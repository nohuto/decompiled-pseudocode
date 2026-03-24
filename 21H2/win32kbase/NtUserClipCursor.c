/*
 * XREFs of NtUserClipCursor @ 0x1C00BEAC0
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
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01A2CB0 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserClipCursor(__int64 a1)
{
  struct tagRECT *v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v6[6]; // [rsp+20h] [rbp-68h] BYREF
  struct tagRECT v7; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v8; // [rsp+60h] [rbp-28h] BYREF

  v1 = (struct tagRECT *)a1;
  v6[3] = a1;
  EnterCrit(0, 1);
  v8 = 0LL;
  v2 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(0, v1 == 0LL) )
  {
    if ( v1 )
    {
      if ( (unsigned __int64)v1 >= MmUserProbeAddress )
        v1 = (struct tagRECT *)MmUserProbeAddress;
      v8 = *v1;
      LODWORD(v6[0]) = (v8.right + v8.left) / 2;
      HIDWORD(v6[0]) = (v8.top + v8.bottom) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v6[0] = GuessMonitorOverrideForCoordinateConversions(v6[0], CurrentThreadDpiAwarenessContext, 0);
      LogicalToPhysicalDPIRect(&v8, &v8, CurrentThreadDpiAwarenessContext, v6);
      v7 = v8;
      CCursorClip::SetClip(gpCursorClip, &v7);
    }
    else
    {
      CCursorClip::ClearClip(gpCursorClip);
    }
    v2 = 1;
  }
  else
  {
    UserSetLastError(5LL, v3);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
