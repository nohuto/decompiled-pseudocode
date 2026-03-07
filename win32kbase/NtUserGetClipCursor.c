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
