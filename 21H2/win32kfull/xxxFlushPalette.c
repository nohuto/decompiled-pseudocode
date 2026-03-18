/*
 * XREFs of xxxFlushPalette @ 0x1C022E840
 * Callers:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C0116400 (GreRealizeDefaultPalette.c)
 *     xxxBroadcastPaletteChanged @ 0x1C022E790 (xxxBroadcastPaletteChanged.c)
 */

__int64 __fastcall xxxFlushPalette(__int64 *a1, int a2)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL), a2);
  return xxxBroadcastPaletteChanged(a1);
}
