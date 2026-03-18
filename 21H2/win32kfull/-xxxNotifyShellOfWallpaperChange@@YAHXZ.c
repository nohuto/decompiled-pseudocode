/*
 * XREFs of ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C011A340
 * Callers:
 *     xxxSetDeskWallpaper @ 0x1C011A1CC (xxxSetDeskWallpaper.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 */

__int64 xxxNotifyShellOfWallpaperChange(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  struct tagWND *v2; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  v1 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v1 )
  {
    v2 = *(struct tagWND **)(*(_QWORD *)(v1 + 8) + 168LL);
    if ( v2 )
    {
      v8[2] = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v8;
      v8[1] = v2;
      HMLockObject(v2);
      v0 = xxxSendNotifyMessage(v2, 0x34u, 4LL, 0LL, 1);
      ThreadUnlock1(v5, v4, v6);
    }
  }
  return v0;
}
