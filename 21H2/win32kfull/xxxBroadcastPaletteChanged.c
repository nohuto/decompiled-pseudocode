/*
 * XREFs of xxxBroadcastPaletteChanged @ 0x1C022E790
 * Callers:
 *     xxxRealizePalette @ 0x1C0147070 (xxxRealizePalette.c)
 *     xxxFlushPalette @ 0x1C022E840 (xxxFlushPalette.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     xxxRealizeDesktop @ 0x1C01E43AC (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxBroadcastPaletteChanged(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 DesktopWindow; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  int v5; // edx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *a1;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  v4 = DesktopWindow;
  if ( v5 || v3 != DesktopWindow )
  {
    v11[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v11;
    v11[1] = v4;
    HMLockObject(v4);
    xxxRealizeDesktop(v4);
    ThreadUnlock1(v8, v7, v9);
  }
  return xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, v1, 0LL, 1);
}
