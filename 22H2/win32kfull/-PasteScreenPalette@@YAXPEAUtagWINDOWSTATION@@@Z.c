/*
 * XREFs of ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FC61C
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FC35C (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C01FC124 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     CreateScreenPalette @ 0x1C0228088 (CreateScreenPalette.c)
 */

void __fastcall PasteScreenPalette(struct tagWINDOWSTATION *a1)
{
  if ( (int)CreateScreenPalette(*(HDC *)(gpDispInfo + 56LL)) >= 0 )
  {
    InternalSetClipboardData(a1, 9u, 0LL, 0, 1);
    GreSetPaletteOwner(0LL, 0LL);
    Win32FreePool(0LL);
  }
}
