/*
 * XREFs of ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C00D80A0
 * Callers:
 *     xxxSetDeskWallpaper @ 0x1C00D7F38 (xxxSetDeskWallpaper.c)
 * Callees:
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x1C00D812C (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 */

__int64 xxxNotifyShellOfWallpaperChange(void)
{
  unsigned int v0; // ebx
  struct tagWND *ShellWindow; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v0 = 0;
  ShellWindow = _GetShellWindow(*(struct tagDESKTOP **)(gptiCurrent + 456LL));
  if ( ShellWindow )
  {
    v6 = 0LL;
    v7 = 0LL;
    ThreadLockAlways(ShellWindow, &v6);
    v0 = xxxSendNotifyMessage(ShellWindow, 52LL, 4LL, 0LL, 1);
    ThreadUnlock1(v3, v2, v4);
  }
  return v0;
}
