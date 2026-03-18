/*
 * XREFs of ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C00BD238
 * Callers:
 *     xxxMenuDraw @ 0x1C00BD4E0 (xxxMenuDraw.c)
 *     _ServerFixupMenuDC @ 0x1C00F4650 (_ServerFixupMenuDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C011CE5C (xxxDrawMenuBarUnderlines.c)
 *     MNDrawArrow @ 0x1C0247A88 (MNDrawArrow.c)
 *     xxxMNDrawFullNC @ 0x1C0247E7C (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C00BBEF0 (GetWindowDpiLastNotify.c)
 *     GetDPIMETRICSForDpi @ 0x1C00BF104 (GetDPIMETRICSForDpi.c)
 */

const struct tagDPIMETRICS *__fastcall GetDPIMETRICS(const struct tagWND *a1)
{
  __int64 v2; // r8
  int v3; // ecx
  __int64 v4; // rax
  unsigned int WindowDpiLastNotify; // eax
  __int64 v7; // rcx

  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 5);
    v3 = *(_DWORD *)(v2 + 288) & 0xF;
    if ( v3 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v2 + 288) >> 8) & 0x1FF;
      return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
    }
    if ( (*(_DWORD *)(v2 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
    }
    if ( v3
      || (v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) == 0
      || (*(_DWORD *)(**(_QWORD **)(v4 + 8) + 64LL) & 1) == 0 )
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
    }
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(0LL, 0LL) & 0xF) != 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v7) + 284);
    return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  }
  WindowDpiLastNotify = 96;
  return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
}
