/*
 * XREFs of ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01EE340
 * Callers:
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     GetMonitorWorkRect @ 0x1C007CB4C (GetMonitorWorkRect.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00C9704 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01ED460 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxShowSwitchWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagWND *v4; // rbx
  __int64 v5; // rsi
  struct tagSwitchWndInfo *v6; // rax
  struct tagSwitchWndInfo *v7; // rdi
  struct tagSwitchWndInfo *v8; // rax
  struct tagSwitchWndInfo *v9; // rax
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF

  v4 = (struct tagWND *)gspwndAltTab;
  v5 = *(_QWORD *)(GetDispInfo(a1, a2, a3, a4) + 96);
  v6 = Getpswi(v4);
  v7 = v6;
  if ( !v6
    || *((_DWORD *)v6 + 27) && (_GetKeyState(18LL) & 0x8000u) == 0LL
    || !*((_DWORD *)v7 + 27) && (_GetAsyncKeyState(18LL) & 0x8000u) == 0LL )
  {
    return 0LL;
  }
  v11 = *(_OWORD *)GetMonitorWorkRect((__int64)&v11, v5);
  xxxSetWindowPos(v4, -1LL, 0LL, 0LL, 0, 0, 27);
  if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 31LL) & 0x10) == 0 )
  {
    v8 = Getpswi(v4);
    if ( !v8 )
      return 0LL;
    xxxSetWindowPos(
      v4,
      -1LL,
      (unsigned int)(((int)v11 + DWORD2(v11) - *((_DWORD *)v8 + 19)) / 2),
      (unsigned int)((DWORD1(v11) + HIDWORD(v11) - *((_DWORD *)v8 + 20)) / 2),
      *((_DWORD *)v8 + 19),
      *((_DWORD *)v8 + 20),
      80);
  }
  xxxInternalUpdateWindow(v4, 1);
  xxxWindowEvent(0x14u, v4, -4, 0, 1);
  v9 = Getpswi(v4);
  if ( v9 )
  {
    xxxWindowEvent(0x8005u, v4, -4, *((_DWORD *)v9 + 17) + 1 + *((_DWORD *)v9 + 14) * *((_DWORD *)v9 + 18), 1);
    return 1LL;
  }
  return 0LL;
}
