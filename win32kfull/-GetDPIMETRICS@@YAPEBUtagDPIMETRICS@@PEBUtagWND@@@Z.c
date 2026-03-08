/*
 * XREFs of ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C02363F0
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C00F268C (xxxDrawMenuBarUnderlines.c)
 *     MNDrawArrow @ 0x1C02372BC (MNDrawArrow.c)
 *     _ServerFixupMenuDC @ 0x1C0237764 (_ServerFixupMenuDC.c)
 *     xxxMNDrawFullNC @ 0x1C0237FB4 (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C02382C8 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x1C0238E5C (xxxMenuDraw.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C00A11BC (GetDPIMETRICSForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 */

const struct tagDPIMETRICS *__fastcall GetDPIMETRICS(const struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // ecx

  if ( a1 )
  {
    v3 = *((_QWORD *)a1 + 5);
    v4 = *(_DWORD *)(v3 + 288) & 0xF;
    if ( v4 != 3 && (*(_DWORD *)(v3 + 232) & 0x400) != 0 )
      GetWindowDpiLastNotify((__int64)a1);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(0LL) & 0xF) != 0 )
  {
    PsGetCurrentProcessWin32Process(v2);
  }
  return (const struct tagDPIMETRICS *)GetDPIMETRICSForDpi();
}
