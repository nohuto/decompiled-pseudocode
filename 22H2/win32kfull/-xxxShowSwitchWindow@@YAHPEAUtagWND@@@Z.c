/*
 * XREFs of ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01C9F1C
 * Callers:
 *     xxxNextWindow @ 0x1C01CA504 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CACD8 (xxxOldNextWindow.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C008B640 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GetMonitorWorkRect @ 0x1C00C46A8 (GetMonitorWorkRect.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01C9008 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxShowSwitchWindow(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rsi
  struct tagSwitchWndInfo *v3; // rax
  struct tagSwitchWndInfo *v4; // rdi
  struct tagSwitchWndInfo *v5; // rax
  struct tagSwitchWndInfo *v6; // rax
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF

  v1 = (struct tagWND *)gspwndAltTab;
  v2 = *(_QWORD *)(GetDispInfo(a1) + 96);
  v3 = Getpswi(v1);
  v4 = v3;
  if ( !v3
    || *((_DWORD *)v3 + 27) && (_GetKeyState(18LL) & 0x8000u) == 0LL
    || !*((_DWORD *)v4 + 27) && (_GetAsyncKeyState(18LL) & 0x8000u) == 0LL )
  {
    return 0LL;
  }
  v8 = *GetMonitorWorkRect(&v8, v2);
  xxxSetWindowPos(v1, -1LL, 0LL, 0LL, 0, 0, 27);
  if ( (*(_BYTE *)(*((_QWORD *)v1 + 5) + 31LL) & 0x10) == 0 )
  {
    v5 = Getpswi(v1);
    if ( !v5 )
      return 0LL;
    xxxSetWindowPos(
      v1,
      -1LL,
      (unsigned int)(((int)v8 + DWORD2(v8) - *((_DWORD *)v5 + 19)) / 2),
      (unsigned int)((DWORD1(v8) + HIDWORD(v8) - *((_DWORD *)v5 + 20)) / 2),
      *((_DWORD *)v5 + 19),
      *((_DWORD *)v5 + 20),
      80);
  }
  xxxInternalUpdateWindow(v1, 1u);
  xxxWindowEvent(0x14u, v1, -4, 0, 1);
  v6 = Getpswi(v1);
  if ( v6 )
  {
    xxxWindowEvent(0x8005u, v1, -4, *((_DWORD *)v6 + 17) + 1 + *((_DWORD *)v6 + 14) * *((_DWORD *)v6 + 18), 1);
    return 1LL;
  }
  return 0LL;
}
