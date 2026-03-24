/*
 * XREFs of ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C012ED10
 * Callers:
 *     xxxSetDeskWallpaper @ 0x1C012EB9C (xxxSetDeskWallpaper.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 xxxNotifyShellOfWallpaperChange(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rcx
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  v1 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 168LL);
    if ( v2 )
    {
      v6[2] = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v6[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v6;
      v6[1] = v2;
      HMLockObject(v2);
      v0 = xxxSendNotifyMessage(v2, 0x34u, 4uLL, 0LL, 1);
      ThreadUnlock1(v4);
    }
  }
  return v0;
}
