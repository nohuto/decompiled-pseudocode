__int64 __fastcall NtUserLockCursor(struct tagRECT *a1)
{
  struct tagRECT *v1; // rsi
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rax
  char v7; // al
  struct tagKERNELHANDLETABLEENTRY *i; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  CCursorClip *v15; // rcx
  struct tagRECT v16; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v17; // [rsp+50h] [rbp-28h] BYREF

  v1 = a1;
  LOBYTE(a1) = 1;
  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(a1);
  gptiCurrent = v2;
  v4 = 0;
  if ( v2 )
  {
    *((_DWORD *)v2 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    if ( CurrentProcessWin32Process )
    {
      v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v6 )
      {
        if ( (*(_DWORD *)(v6 + 12) & 0x8000) != 0 )
        {
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) == 0
            || (v7 = 1, (*((_DWORD *)gptiCurrent + 318) & 0x80u) != 0) )
          {
            v7 = 0;
          }
          if ( v7 )
          {
            for ( i = gpSharedUserCritDeferredUnlockListHead;
                  gpSharedUserCritDeferredUnlockListHead;
                  i = gpSharedUserCritDeferredUnlockListHead )
            {
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)i + 2);
              *((_QWORD *)i + 2) = 0LL;
              if ( !*(_DWORD *)(*(_QWORD *)i + 8LL) )
              {
                v16.left = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              }
              HMUnlockObject(*(_QWORD *)i);
            }
          }
        }
      }
    }
  }
  v17 = 0LL;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(2LL, 0LL) )
  {
    if ( v1 )
    {
      if ( (unsigned __int64)v1 >= MmUserProbeAddress )
        v1 = (struct tagRECT *)MmUserProbeAddress;
      v17 = *v1;
      v16.left = (v17.right + v17.left) / 2;
      v13 = (unsigned int)((v17.bottom + v17.top) >> 31);
      LODWORD(v13) = (v17.bottom + v17.top) % 2;
      v16.top = (v17.bottom + v17.top) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(
                                           HIDWORD(*(_QWORD *)&v17.right),
                                           v13,
                                           HIDWORD(*(_QWORD *)&v17.left));
      *(_QWORD *)&v16.left = GuessMonitorOverrideForCoordinateConversions(
                               *(__int64 *)&v16.left,
                               CurrentThreadDpiAwarenessContext,
                               0);
      LogicalToPhysicalDPIRect(&v17, &v17, CurrentThreadDpiAwarenessContext, &v16);
      v16 = v17;
      CCursorClip::LockCursor(v15, &v16);
    }
    else
    {
      CCursorClip::ClearClip(*((CCursorClip **)&WPP_MAIN_CB.Reserved + 1));
    }
    v4 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v4;
}
