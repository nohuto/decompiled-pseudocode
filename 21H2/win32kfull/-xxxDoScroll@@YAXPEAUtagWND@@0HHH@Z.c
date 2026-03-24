/*
 * XREFs of ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0244A80
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0244990 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0244E34 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C02456CC (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1C0245904 (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1C0245C00 (xxxSBTrackInit.c)
 *     xxxSBWndProc @ 0x1C0246160 (xxxSBWndProc.c)
 *     xxxTrackBox @ 0x1C0246B40 (xxxTrackBox.c)
 * Callees:
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxDoScroll(
        struct _LARGE_STRING **a1,
        struct tagWND *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        int a5)
{
  struct _LARGE_STRING *v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rcx
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0LL;
  v12[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v12;
  v12[1] = a2;
  if ( a2 )
    HMLockObject(a2);
  if ( a1 )
    v6 = *a1;
  xxxSendMessage((unsigned __int64)a2, (a5 != 0) + 276, a3 | (a4 << 16), v6);
  xxxWindowEvent(0x800Eu, a2, (a5 != 0) - 6, 0, 1u);
  ThreadUnlock1(v11);
}
