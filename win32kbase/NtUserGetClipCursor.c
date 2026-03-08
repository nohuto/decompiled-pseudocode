/*
 * XREFs of NtUserGetClipCursor @ 0x1C016F6E0
 * Callers:
 *     <none>
 * Callees:
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0009E00 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C003A798 (ApiSetCheckCursorClipAccess.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     PhysicalToLogicalDPIRect @ 0x1C00A8E10 (PhysicalToLogicalDPIRect.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C020AE60 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 */

__int64 __fastcall NtUserGetClipCursor(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE *v11; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v16; // [rsp+50h] [rbp-28h] BYREF

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v6 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1u, 0LL, v5) )
  {
    v11 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[15] = v11[15];
    CCursorClip::GetClip(*((CCursorClip **)&WPP_MAIN_CB.Reserved + 1), &v16);
    LODWORD(v14) = (v16.left + v16.right) / 2;
    HIDWORD(v14) = (v16.top + v16.bottom) / 2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v15 = GuessMonitorOverrideForCoordinateConversions(v14, CurrentThreadDpiAwarenessContext, 1);
    PhysicalToLogicalDPIRect(a1, (__m128i *)&v16, CurrentThreadDpiAwarenessContext, &v15);
    v6 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
