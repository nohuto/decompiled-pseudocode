/*
 * XREFs of xxxBroadcastPaletteChanged @ 0x1C02351A0
 * Callers:
 *     xxxRealizePalette @ 0x1C011BC10 (xxxRealizePalette.c)
 *     xxxFlushPalette @ 0x1C0235250 (xxxFlushPalette.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxRealizeDesktop @ 0x1C01E9C18 (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxBroadcastPaletteChanged(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdi
  __int64 DesktopWindow; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  int v5; // edx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *a1;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  v4 = DesktopWindow;
  if ( v5 || v3 != DesktopWindow )
  {
    v9[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v9;
    v9[1] = v4;
    HMLockObject(v4);
    xxxRealizeDesktop(v4);
    ThreadUnlock1(v7);
  }
  return xxxSendNotifyMessage(-1LL, 0x311u, v1, 0LL, 1);
}
