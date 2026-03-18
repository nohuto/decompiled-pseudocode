/*
 * XREFs of NtUserDwmLockScreenUpdates @ 0x1C0120730
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C004A1EC (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsCurrentDesktopComposed @ 0x1C009D460 (IsCurrentDesktopComposed.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserDwmLockScreenUpdates(int a1)
{
  __int64 v2; // rcx
  struct tagWND *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 0LL);
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    v2 = (unsigned int)g_bLockUpdatesForDwm;
    g_bLockUpdatesForDwm = a1;
    if ( grpdeskRitInput && g_bLockUpdatesForDwm && !a1 && !(unsigned int)IsCurrentDesktopComposed() )
    {
      v8[2] = 0LL;
      v4 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      v8[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v8;
      v8[1] = v4;
      if ( v4 )
        HMLockObject(v4);
      xxxRedrawWindow(v4, 0LL, 0LL, 133);
      ThreadUnlock1(v6, v5, v7);
    }
  }
  else
  {
    UserSetLastError(5LL, gpidLogon);
  }
  UserSessionSwitchLeaveCrit(v2);
  return 0LL;
}
