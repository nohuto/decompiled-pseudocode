/*
 * XREFs of ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C010CC94
 * Callers:
 *     NtUserEnableChildWindowDpiMessage @ 0x1C010CBD0 (NtUserEnableChildWindowDpiMessage.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0144D6C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     UpdateMonitorForWindowAndChildren @ 0x1C006A424 (UpdateMonitorForWindowAndChildren.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C007563C (xxxNotifyMonitorChanged.c)
 */

char __fastcall xxxEnableChildWindowDpiMessageX(struct tagWND *this)
{
  char v1; // bl
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int16 v7; // si
  struct tagBWL *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !this || (*(_DWORD *)(*((_QWORD *)this + 5) + 288LL) & 0xF) != 2 || !IsTopLevelWindow((__int64)this) )
    return 0;
  if ( v4 )
  {
    *((_DWORD *)this + 80) |= 0x180000u;
    v5 = ValidateHmonitorNoRip(*(_QWORD *)(v3 + 256));
  }
  else
  {
    *((_DWORD *)this + 80) &= 0xFFE7FFFF;
    v5 = *(_QWORD *)(gpDispInfo + 96LL);
  }
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 5);
    v9 = 0LL;
    v7 = *(_WORD *)(v6 + 284);
    if ( (unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND **)this, v5, (__int64 *)&v9, 1) )
    {
      xxxNotifyMonitorChanged(this, 0LL, v9, v7);
      return 1;
    }
  }
  return v1;
}
