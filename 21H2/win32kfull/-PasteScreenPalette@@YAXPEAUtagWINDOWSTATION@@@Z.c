/*
 * XREFs of ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0219798
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0145C84 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C01461D0 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     CreateScreenPalette @ 0x1C023F6E8 (CreateScreenPalette.c)
 */

void __fastcall PasteScreenPalette(struct tagWINDOWSTATION *a1)
{
  if ( (int)CreateScreenPalette(*(HDC *)(gpDispInfo + 56LL)) >= 0 )
  {
    InternalSetClipboardData(a1, 9LL, 0LL, 0, 1);
    GreSetPaletteOwner(0LL, 0LL);
    Win32FreePool(0LL);
  }
}
