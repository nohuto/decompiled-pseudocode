/*
 * XREFs of xxxFlushPalette @ 0x1C02179E0
 * Callers:
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C00FA71C (GreRealizeDefaultPalette.c)
 *     xxxBroadcastPaletteChanged @ 0x1C021794C (xxxBroadcastPaletteChanged.c)
 */

__int64 __fastcall xxxFlushPalette(unsigned __int64 *a1, int a2)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 56LL), a2);
  return xxxBroadcastPaletteChanged(a1);
}
