/*
 * XREFs of ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C022C0E0
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C022BFF0 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C022C460 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C022CC6C (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1C022CE90 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C022D18C (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 *     xxxTrackBox @ 0x1C022E110 (xxxTrackBox.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 */

void __fastcall xxxDoScroll(struct tagWND *a1, struct tagWND *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  ThreadLock(a2, &v9);
  xxxSendMessage(a2, (a5 != 0) + 276);
  xxxWindowEvent(0x800Eu, a2, (a5 != 0) - 6, 0, 1);
  ThreadUnlock1(v7, v6, v8);
}
