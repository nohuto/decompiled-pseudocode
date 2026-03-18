/*
 * XREFs of xxxFlushPalette @ 0x1C0214E20
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C001F258 (GreRealizeDefaultPalette.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0214D8C (xxxBroadcastPaletteChanged.c)
 */

__int64 __fastcall xxxFlushPalette(unsigned __int64 *a1, int a2)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL), a2);
  return xxxBroadcastPaletteChanged(a1);
}
