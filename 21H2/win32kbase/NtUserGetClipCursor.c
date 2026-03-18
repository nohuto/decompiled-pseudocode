/*
 * XREFs of NtUserGetClipCursor @ 0x1C0159140
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     PhysicalToLogicalDPIRect @ 0x1C006E120 (PhysicalToLogicalDPIRect.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C009A220 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C00AD7D4 (ApiSetCheckCursorClipAccess.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C00CFEF0 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetClipCursor(__m128i *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
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

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v6 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1u, 0LL, v2) )
  {
    v11 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[15] = v11[15];
    CCursorClip::GetClip((struct tagRECT *)gpCursorClip, &v16);
    LODWORD(v14) = (v16.left + v16.right) / 2;
    HIDWORD(v14) = (v16.top + v16.bottom) / 2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v15 = GuessMonitorOverrideForCoordinateConversions(v14, CurrentThreadDpiAwarenessContext, 1);
    PhysicalToLogicalDPIRect(a1, (__m128i *)&v16, CurrentThreadDpiAwarenessContext, &v15);
    v6 = 1;
  }
  else
  {
    UserSetLastError(5LL, v3, v4, v5);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
