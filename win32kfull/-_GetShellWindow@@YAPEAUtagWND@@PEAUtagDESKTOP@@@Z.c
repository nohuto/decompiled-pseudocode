/*
 * XREFs of ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x1C00D812C
 * Callers:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C000E95C (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C00D7F38 (xxxSetDeskWallpaper.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C00D80A0 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     xxxDesktopPaintCallback @ 0x1C00EF1F0 (xxxDesktopPaintCallback.c)
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
