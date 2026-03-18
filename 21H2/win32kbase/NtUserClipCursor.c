/*
 * XREFs of NtUserClipCursor @ 0x1C00CF260
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C00293AC (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     LogicalToPhysicalDPIRect @ 0x1C006DD10 (LogicalToPhysicalDPIRect.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C006F3A0 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C009A220 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C00AD7D4 (ApiSetCheckCursorClipAccess.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01DBA60 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserClipCursor(struct tagRECT *a1)
{
  struct tagRECT *v1; // rsi
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  char v8; // al
  struct tagKERNELHANDLETABLEENTRY *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  struct tagRECT v20; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v21; // [rsp+50h] [rbp-28h] BYREF

  v1 = a1;
  *(_QWORD *)&v20.left = a1;
  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v2;
  v5 = 0;
  if ( v2 )
  {
    *((_DWORD *)v2 + 377) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    if ( CurrentProcessWin32Process )
    {
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
          || (v8 = 1, (*((_DWORD *)gptiCurrent + 314) & 0x80u) != 0) )
        {
          v8 = 0;
        }
        if ( v8 )
        {
          while ( 1 )
          {
            v9 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            *((_QWORD *)v9 + 2) = 0LL;
            v18 = *(_QWORD *)v9;
            if ( !*(_DWORD *)(*(_QWORD *)v9 + 8LL) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v7, v4);
              v18 = *(_QWORD *)v9;
            }
            HMUnlockObject(v18);
          }
        }
      }
    }
  }
  v21 = 0LL;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(0, v1 == 0LL, v4) )
  {
    if ( v1 )
    {
      if ( (unsigned __int64)v1 >= MmUserProbeAddress )
        v1 = (struct tagRECT *)MmUserProbeAddress;
      v21 = *v1;
      v20.left = (v21.right + v21.left) / 2;
      v20.top = (v21.bottom + v21.top) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      *(_QWORD *)&v20.left = GuessMonitorOverrideForCoordinateConversions(
                               *(__int64 *)&v20.left,
                               CurrentThreadDpiAwarenessContext,
                               0);
      LogicalToPhysicalDPIRect(&v21, &v21, CurrentThreadDpiAwarenessContext, &v20);
      v20 = v21;
      CCursorClip::SetClip(gpCursorClip, &v20);
    }
    else
    {
      CCursorClip::ClearClip(gpCursorClip);
    }
    v5 = 1;
  }
  else
  {
    UserSetLastError(5LL, v10, v11, v12);
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v5;
}
