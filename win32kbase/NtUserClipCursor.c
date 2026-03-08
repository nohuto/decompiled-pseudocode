/*
 * XREFs of NtUserClipCursor @ 0x1C016D9B0
 * Callers:
 *     <none>
 * Callees:
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0009E00 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0015530 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C003A798 (ApiSetCheckCursorClipAccess.c)
 *     LogicalToPhysicalDPIRect @ 0x1C003B920 (LogicalToPhysicalDPIRect.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C020B050 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserClipCursor(struct tagRECT *a1)
{
  struct tagRECT *v1; // rsi
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rax
  char v8; // al
  __int64 *i; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v16; // [rsp+20h] [rbp-68h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT v18; // [rsp+60h] [rbp-28h] BYREF

  v1 = a1;
  *(_QWORD *)&v17.left = a1;
  LOBYTE(a1) = 1;
  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v2;
  v5 = 0;
  if ( v2 )
  {
    *((_DWORD *)v2 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    if ( CurrentProcessWin32Process )
    {
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v7 )
      {
        if ( (*(_DWORD *)(v7 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v8 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v8 = 0;
          }
          if ( v8 )
          {
            for ( i = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  gpSharedUserCritDeferredUnlockListHead;
                  i = (__int64 *)gpSharedUserCritDeferredUnlockListHead )
            {
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
              i[2] = 0LL;
              if ( !*(_DWORD *)(*i + 8) )
              {
                LODWORD(v16) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              }
              HMUnlockObject(*i);
            }
          }
        }
      }
    }
  }
  v18 = 0LL;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(0, v1 == 0LL, v4) )
  {
    if ( v1 )
    {
      if ( (unsigned __int64)v1 >= MmUserProbeAddress )
        v1 = (struct tagRECT *)MmUserProbeAddress;
      v18 = *v1;
      LODWORD(v16) = (v18.right + v18.left) / 2;
      HIDWORD(v16) = (v18.bottom + v18.top) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v16 = GuessMonitorOverrideForCoordinateConversions(v16, CurrentThreadDpiAwarenessContext, 0);
      LogicalToPhysicalDPIRect((__int64)&v18, &v18, CurrentThreadDpiAwarenessContext, &v16);
      v17 = v18;
      CCursorClip::SetClip(*((CCursorClip **)&WPP_MAIN_CB.Reserved + 1), &v17);
    }
    else
    {
      CCursorClip::ClearClip(*((CCursorClip **)&WPP_MAIN_CB.Reserved + 1));
    }
    v5 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v5;
}
