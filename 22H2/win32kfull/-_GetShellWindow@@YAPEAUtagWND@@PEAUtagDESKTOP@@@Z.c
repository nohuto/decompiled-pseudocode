/*
 * XREFs of ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x1C0049738
 * Callers:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0010920 (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C0049544 (xxxSetDeskWallpaper.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C00496AC (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     xxxDesktopPaintCallback @ 0x1C00B6FE0 (xxxDesktopPaintCallback.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall _GetShellWindow(struct tagDESKTOP *a1)
{
  if ( a1 )
    return *(struct tagWND **)(*((_QWORD *)a1 + 1) + 168LL);
  else
    return 0LL;
}
