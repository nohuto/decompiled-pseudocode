/*
 * XREFs of NtUserLockCursor @ 0x1C00AD6F0
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
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01DB918 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserLockCursor(struct tagRECT *a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
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
  CCursorClip *v20; // rcx
  struct tagRECT v21; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v22; // [rsp+50h] [rbp-28h] BYREF

  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(1);
  gptiCurrent = v2;
  v4 = 0;
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
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v6, v7);
              v18 = *(_QWORD *)v9;
            }
            HMUnlockObject(v18);
          }
        }
      }
    }
  }
  v22 = 0LL;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(2LL) )
  {
    if ( a1 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (struct tagRECT *)MmUserProbeAddress;
      v22 = *a1;
      v21.left = (v22.right + v22.left) / 2;
      v21.top = (v22.bottom + v22.top) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      *(_QWORD *)&v21.left = GuessMonitorOverrideForCoordinateConversions(
                               *(__int64 *)&v21.left,
                               CurrentThreadDpiAwarenessContext,
                               0);
      LogicalToPhysicalDPIRect(&v22, &v22, CurrentThreadDpiAwarenessContext, &v21);
      v21 = v22;
      CCursorClip::LockCursor(v20, &v21);
    }
    else
    {
      CCursorClip::ClearClip(gpCursorClip);
    }
    v4 = 1;
  }
  else
  {
    UserSetLastError(5LL, v10, v11, v12);
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v4;
}
