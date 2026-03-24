/*
 * XREFs of xxxEnableChildWindowDpiMessageX @ 0x1C00F1284
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     NtUserEnableChildWindowDpiMessage @ 0x1C00F11C0 (NtUserEnableChildWindowDpiMessage.c)
 *     xxxMNOpenHierarchy @ 0x1C0239AB8 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxNotifyMonitorChanged @ 0x1C006C654 (xxxNotifyMonitorChanged.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00F160C (UpdateMonitorForWindowAndChildren.c)
 */

__int64 __fastcall xxxEnableChildWindowDpiMessageX(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // r9
  int v4; // r10d
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int16 v8; // si
  struct tagBWL *v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 || !(unsigned int)IsTopLevelWindow((__int64)a1) )
    return 0LL;
  v5 = *(_DWORD *)(v3 + 232);
  if ( v4 )
  {
    *(_DWORD *)(v3 + 232) = v5 | 0x10000000;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x20000000u;
    v6 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  }
  else
  {
    *(_DWORD *)(v3 + 232) = v5 & 0xEFFFFFFF;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x20000000u;
    v6 = *(_QWORD *)(gpDispInfo + 96LL);
  }
  if ( v6 )
  {
    v7 = *((_QWORD *)a1 + 5);
    v10 = 0LL;
    v8 = *(_WORD *)(v7 + 284);
    if ( (unsigned int)UpdateMonitorForWindowAndChildren(a1, v6, &v10, 1LL) )
    {
      xxxNotifyMonitorChanged(a1, 0LL, v10, v8);
      return 1;
    }
  }
  return v1;
}
