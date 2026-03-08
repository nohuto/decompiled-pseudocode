/*
 * XREFs of ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C0099104
 * Callers:
 *     NtUserEnableChildWindowDpiMessage @ 0x1C0099040 (NtUserEnableChildWindowDpiMessage.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F687C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00991CC (UpdateMonitorForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x1C0099554 (xxxNotifyMonitorChanged.c)
 */

char __fastcall xxxEnableChildWindowDpiMessageX(struct tagWND *a1)
{
  char v1; // bl
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // rdx

  v1 = 0;
  if ( !a1 || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 || !IsTopLevelWindow((__int64)a1) )
    return 0;
  if ( v5 )
  {
    *(_DWORD *)(v3 + 320) |= 0x180000u;
    v6 = ValidateHmonitorNoRip(*(_QWORD *)(v4 + 256));
  }
  else
  {
    *(_DWORD *)(v3 + 320) &= 0xFFE7FFFF;
    v6 = *(_QWORD *)(gpDispInfo + 96LL);
  }
  if ( v6 )
  {
    if ( (unsigned int)UpdateMonitorForWindowAndChildren(a1) )
    {
      xxxNotifyMonitorChanged(a1, 0LL, 0LL);
      return 1;
    }
  }
  return v1;
}
