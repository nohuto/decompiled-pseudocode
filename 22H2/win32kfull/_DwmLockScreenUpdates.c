/*
 * XREFs of _DwmLockScreenUpdates @ 0x1C0134F90
 * Callers:
 *     <none>
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C0014620 (IsCurrentDesktopComposed.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C00722B4 (xxxRedrawWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DwmLockScreenUpdates(int a1)
{
  __int64 v2; // r8
  struct tagWND *v4; // rbx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    g_bLockUpdatesForDwm = a1;
    if ( grpdeskRitInput && g_bLockUpdatesForDwm && !a1 && !(unsigned int)IsCurrentDesktopComposed() )
    {
      v6[2] = 0LL;
      v4 = *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
      v6[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v6;
      v6[1] = v4;
      if ( v4 )
        HMLockObject(v4);
      xxxRedrawWindow(v4, 0LL, 0LL, 133);
      ThreadUnlock1(v5);
    }
  }
  else
  {
    UserSetLastError(5LL, gpidLogon, v2);
  }
  return 0LL;
}
